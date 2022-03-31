///////////////////////////////////////////////////////////////////////////////
// TcPtpBestMasterDiagDriver.h

#ifndef __TCPTPBESTMASTERDIAGDRIVER_H__
#define __TCPTPBESTMASTERDIAGDRIVER_H__

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "TcBase.h"

#define TCPTPBESTMASTERDIAGDRV_NAME        "TCPTPBESTMASTERDIAG"
#define TCPTPBESTMASTERDIAGDRV_Major       1
#define TCPTPBESTMASTERDIAGDRV_Minor       0

#define DEVICE_CLASS CTcPtpBestMasterDiagDriver

#include "ObjDriver.h"

class CTcPtpBestMasterDiagDriver : public CObjDriver
{
public:
	virtual IOSTATUS	OnLoad();
	virtual VOID		OnUnLoad();

	//////////////////////////////////////////////////////
	// VxD-Services exported by this driver
	static unsigned long	_cdecl TCPTPBESTMASTERDIAGDRV_GetVersion();
	//////////////////////////////////////////////////////
	
};

Begin_VxD_Service_Table(TCPTPBESTMASTERDIAGDRV)
	VxD_Service( TCPTPBESTMASTERDIAGDRV_GetVersion )
End_VxD_Service_Table


#endif // ifndef __TCPTPBESTMASTERDIAGDRIVER_H__