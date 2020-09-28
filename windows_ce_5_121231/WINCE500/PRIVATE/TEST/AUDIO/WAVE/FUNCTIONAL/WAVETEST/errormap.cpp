//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
//
// This source code is licensed under Microsoft Shared Source License
// Version 1.0 for Windows CE.
// For a copy of the license visit http://go.microsoft.com/fwlink/?LinkId=3223.
//
#include "TUXMAIN.H"
#include "ERRORMAP.H"

BEGINMAP(MMRESULT,lpErrorMap)
ENTRY(WAVERR_BADFORMAT)
ENTRY(MMSYSERR_ERROR)
ENTRY(MMSYSERR_BADDEVICEID)
ENTRY(MMSYSERR_NOTENABLED)
ENTRY(MMSYSERR_ALLOCATED)
ENTRY(MMSYSERR_INVALHANDLE)
ENTRY(MMSYSERR_NODRIVER)
ENTRY(MMSYSERR_NOMEM)
ENTRY(MMSYSERR_NOTSUPPORTED)
ENTRY(MMSYSERR_BADERRNUM)
ENTRY(MMSYSERR_INVALFLAG)
ENTRY(MMSYSERR_INVALPARAM)
ENTRY(MMSYSERR_HANDLEBUSY)
ENTRY(MMSYSERR_INVALIDALIAS)
ENTRY(MMSYSERR_BADDB)
ENTRY(MMSYSERR_KEYNOTFOUND)
ENTRY(MMSYSERR_READERROR)
ENTRY(MMSYSERR_WRITEERROR)
ENTRY(MMSYSERR_DELETEERROR)
ENTRY(MMSYSERR_VALNOTFOUND)
ENTRY(MMSYSERR_NODRIVERCB)
ENTRY(MMSYSERR_LASTERROR)
ENDMAP

Map<MMRESULT> g_ErrorMap(lpErrorMap,MAPSIZE(lpErrorMap));
