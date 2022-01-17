# TF6230 - TwinCAT Parallel Redundancy Protocol Samples

> SPDX-License-Identifier: [0BSD](https://spdx.org/licenses/0BSD.html)  
> SPDX-FileCopyrightText: 2022 [Beckhoff Automation GmbH & Co. KG](https://www.beckhoff.com)  

These examples demonstrate the diagnosis of a PRP connection.
In the first example, the link status of both RT Ethernet adapters is read out in a simplified manner. Based on this, the list of all detected nodes in the network is also retrieved and evaluated in the second example.

## TcPrpLinkStatusSample - Readingthe Link Status
In this example the structure TcPrpAdapterLinkStatus of the TwinCAT PRP Module is readen. This can be used to query the link status of the two RT-Ethernet Adapters used for the PRP conection. In this way it can be determined whether there is an active connection on the corresponding adapter to the next node in the network, as for example a switch. A single active connection should be sufficient to continue to communicate the other nodes in the PRP network. However, the inactive connection should already be an indication of a failure in the network.

# Reading the Node Table
This example also queries the "Node Table" with the structure TcPrpNodeEntry. The table of nodes in the network is read from the TwinCAT PRP module using ADS Read (see FB_TcPrpAdapter.GetNodeTable) and a specific node in the list is searched for and evaluated on the basis of a defined MAC address (see FB_TcPrpAdapter.GetNodeIndexByMac and FB_TcPrpAdapter.GetNodeEntry).
The different values from the "Node Entry" are summarized on the basis of LAN A and LAN B to determine whether the communication to the node was interrupted. If no frames from the respective LAN were received from this node for more than two seconds, this is recognized as a "Timeout" (see FB_TcPrpNode.bTimeout{A,B}). If neither frames on LAN A, nor on LAN B are detected, this is indicated as "Disconnect" (see FB_TcPrpNode.bDisconnect).