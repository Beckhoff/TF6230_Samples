///////////////////////////////////////////////////////////////////////////////
// TcPtpBestMasterDiagCtrl.h

#ifndef __TCPTPBESTMASTERDIAGCTRL_H__
#define __TCPTPBESTMASTERDIAGCTRL_H__

#include <atlbase.h>
#include <atlcom.h>


#include "resource.h"       // main symbols
#include "TcPtpBestMasterDiagW32.h"
#include "TcBase.h"
#include "TcPtpBestMasterDiagClassFactory.h"
#include "TcOCFCtrlImpl.h"

class CTcPtpBestMasterDiagCtrl 
	: public CComObjectRootEx<CComMultiThreadModel>
	, public CComCoClass<CTcPtpBestMasterDiagCtrl, &CLSID_TcPtpBestMasterDiagCtrl>
	, public ITcPtpBestMasterDiagCtrl
	, public ITcOCFCtrlImpl<CTcPtpBestMasterDiagCtrl, CTcPtpBestMasterDiagClassFactory>
{
public:
	CTcPtpBestMasterDiagCtrl();
	virtual ~CTcPtpBestMasterDiagCtrl();

DECLARE_REGISTRY_RESOURCEID(IDR_TCPTPBESTMASTERDIAGCTRL)
DECLARE_NOT_AGGREGATABLE(CTcPtpBestMasterDiagCtrl)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CTcPtpBestMasterDiagCtrl)
	COM_INTERFACE_ENTRY(ITcPtpBestMasterDiagCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl2)
END_COM_MAP()

};

#endif // #ifndef __TCPTPBESTMASTERDIAGCTRL_H__
