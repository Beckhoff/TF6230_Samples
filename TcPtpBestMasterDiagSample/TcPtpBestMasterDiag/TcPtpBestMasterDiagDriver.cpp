///////////////////////////////////////////////////////////////////////////////
// TcPtpBestMasterDiagDriver.cpp
#include "TcPch.h"
#pragma hdrstop

#include "TcPtpBestMasterDiagDriver.h"
#include "TcPtpBestMasterDiagClassFactory.h"

DECLARE_GENERIC_DEVICE(TCPTPBESTMASTERDIAGDRV)

IOSTATUS CTcPtpBestMasterDiagDriver::OnLoad( )
{
	TRACE(_T("CObjClassFactory::OnLoad()\n") );
	m_pObjClassFactory = new CTcPtpBestMasterDiagClassFactory();

	return IOSTATUS_SUCCESS;
}

VOID CTcPtpBestMasterDiagDriver::OnUnLoad( )
{
	delete m_pObjClassFactory;
}

unsigned long _cdecl CTcPtpBestMasterDiagDriver::TCPTPBESTMASTERDIAGDRV_GetVersion( )
{
	return( (TCPTPBESTMASTERDIAGDRV_Major << 8) | TCPTPBESTMASTERDIAGDRV_Minor );
}

