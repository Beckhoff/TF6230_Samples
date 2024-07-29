## About this repository

This repository contains official sample code for the product TF6230 | TwinCAT 3 Parallel Redundancy Protocol (PRP) offered by [Beckhoff Automation](https://www.beckhoff.com). The sample code is provided as-is under the Zero-Clause BSD license.

## How to get support

Should you have any questions regarding the provided sample code, please contact your local Beckhoff support team. Contact information can be found on the official Beckhoff website at https://www.beckhoff.com/contact/.

## Further information

Further information about this sample code can be found on the [Beckhoff Information System](https://infosys.beckhoff.com) in the [TF6230 documentation](https://infosys.beckhoff.com/content/1033/tf6230_tc3_parallel_redundancy_protocol/index.html).

# TF6230 - TwinCAT Parallel Redundancy Protocol Samples

These samples demonstrate the diagnosis of a PRP connection.
In the first sample, the link status of both RT-Ethernet Adapters is read out in a simplified manner. Based on this, the list of all detected nodes in the network is also readen and evaluated in the second sample.

## TcPrpLinkStatusSample - Readingthe Link Status

In this example the structure TcPrpAdapterLinkStatus of the TwinCAT PRP Module is readen. This can be used to query the link status of the two RT-Ethernet Adapters used for the PRP conection. In this way it can be determined whether there is an active connection on the corresponding adapter to the next node in the network, as for example a switch. A single active connection should be sufficient to continue to communicate the other nodes in the PRP network. However, the inactive connection should already be an indication of a failure in the network.

## TcPrpNodeTableSample - Reading the Node Table

This example also queries the "Node Table" with the structure TcPrpNodeEntry. The table of nodes in the network is read from the TwinCAT PRP module using ADS Read (see FB_TcPrpAdapter.GetNodeTable) and a specific node in the list is searched for and evaluated on the basis of a defined MAC address (see FB_TcPrpAdapter.GetNodeIndexByMac and FB_TcPrpAdapter.GetNodeEntry).
The different values from the "Node Entry" are summarized on the basis of LAN A and LAN B to determine whether the communication to the node was interrupted. If no frames from the respective LAN were received from this node for more than two seconds, this is recognized as a "Timeout" (see FB_TcPrpNode.bTimeout{A,B}). If neither frames on LAN A, nor on LAN B are detected, this is indicated as "Disconnect" (see FB_TcPrpNode.bDisconnect).