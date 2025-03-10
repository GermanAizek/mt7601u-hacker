/****************************************************************************

    Module Name:
    UTIL/rt_linux_symb.c
 
    Abstract:
	All symbols provided from UTIL module are put here.
 
    Revision History:
    Who        When          What
    ---------  ----------    ----------------------------------------------
    GermanAizek@yandex.ru 10.03.2025 MODULE_LICENSE for newer Linux Kernel 6.x

***************************************************************************/

#define RTMP_MODULE_OS
#define RTMP_MODULE_OS_UTIL

/*#include "rt_config.h" */
#include "rtmp_comm.h"
#include "rtmp_osabl.h"
#include "rt_os_util.h"

#ifdef OS_ABL_SUPPORT
MODULE_LICENSE("GPL");
#endif /* OS_ABL_SUPPORT */
#ifdef OS_ABL_FUNC_SUPPORT

EXPORT_SYMBOL(RTDebugLevel);
EXPORT_SYMBOL(RTDebugFunc);

/* utility */
EXPORT_SYMBOL(RtmpUtilInit);
EXPORT_SYMBOL(RTMPFreeNdisPacket);
EXPORT_SYMBOL(AdapterBlockAllocateMemory);

EXPORT_SYMBOL(RTMP_SetPeriodicTimer);
EXPORT_SYMBOL(RTMP_OS_Add_Timer);
EXPORT_SYMBOL(RTMP_OS_Mod_Timer);
EXPORT_SYMBOL(RTMP_OS_Del_Timer);
EXPORT_SYMBOL(RTMP_OS_Init_Timer);
EXPORT_SYMBOL(RTMP_OS_Release_Timer);

EXPORT_SYMBOL(RTMP_OS_Alloc_Rsc);
EXPORT_SYMBOL(RTMP_OS_Free_Rscs);

EXPORT_SYMBOL(os_alloc_mem);
EXPORT_SYMBOL(os_alloc_mem_suspend);
EXPORT_SYMBOL(os_free_mem);

EXPORT_SYMBOL(ExpandPacket);
EXPORT_SYMBOL(ClonePacket);
EXPORT_SYMBOL(RTMP_AllocateFragPacketBuffer);
EXPORT_SYMBOL(Sniff2BytesFromNdisBuffer);
EXPORT_SYMBOL(RtmpOSNetPktAlloc);
EXPORT_SYMBOL(duplicate_pkt_with_TKIP_MIC);
EXPORT_SYMBOL(RTMPAllocateNdisPacket);
EXPORT_SYMBOL(RTMP_QueryPacketInfo);
EXPORT_SYMBOL(DuplicatePacket);
EXPORT_SYMBOL(duplicate_pkt);
EXPORT_SYMBOL(RTMPL2FrameTxAction);
EXPORT_SYMBOL(RtmpOsPktBodyCopy);
EXPORT_SYMBOL(RtmpOsIsPktCloned);
EXPORT_SYMBOL(RtmpOsPktCopy);
EXPORT_SYMBOL(RtmpOsPktClone);
EXPORT_SYMBOL(RtmpOsPktDataPtrAssign);
EXPORT_SYMBOL(RtmpOsPktLenAssign);
EXPORT_SYMBOL(RtmpOsPktTailAdjust);
EXPORT_SYMBOL(RtmpOsPktTailBufExtend);
EXPORT_SYMBOL(RtmpOsPktHeadBufExtend);
EXPORT_SYMBOL(RtmpOsPktReserve);
EXPORT_SYMBOL(RtmpOsPktProtocolAssign);
EXPORT_SYMBOL(RtmpOsPktInfPpaSend);
EXPORT_SYMBOL(RtmpThreadPidKill);
EXPORT_SYMBOL(RtmpOsPktRcvHandle);
#ifdef IAPP_SUPPORT
EXPORT_SYMBOL(RtmpOsPktIappMakeUp);
#endif /* IAPP_SUPPORT */
EXPORT_SYMBOL(RtmpOsPktInit);
#ifdef CONFIG_AP_SUPPORT
EXPORT_SYMBOL(VLAN_8023_Header_Copy);
#endif /* CONFIG_AP_SUPPORT */
EXPORT_SYMBOL(wlan_802_11_to_802_3_packet);
EXPORT_SYMBOL(RtmpOsPktOffsetInit);

#ifdef HDR_TRANS_SUPPORT
EXPORT_SYMBOL(RtmpOsSetPacket);
#endif /* HDR_TRANS_SUPPORT */

EXPORT_SYMBOL(RtmpOSNetDevCreate);
EXPORT_SYMBOL(RtmpOSNetDevClose);
EXPORT_SYMBOL(RtmpOSNetDevAttach);
EXPORT_SYMBOL(RtmpOSNetDevDetach);
EXPORT_SYMBOL(RtmpOSNetDevProtect);
EXPORT_SYMBOL(RtmpOSNetDevFree);
EXPORT_SYMBOL(RtmpOSNetDevIsUp);
EXPORT_SYMBOL(RtmpOsNetDevGetPhyAddr);
EXPORT_SYMBOL(RtmpOsNetQueueStart);
EXPORT_SYMBOL(RtmpOsNetQueueStop);
EXPORT_SYMBOL(RtmpOsNetQueueWake);
EXPORT_SYMBOL(RtmpOsSetPktNetDev);
EXPORT_SYMBOL(RtmpOsPktNetDevGet);
EXPORT_SYMBOL(RtmpOsGetNetDevName);
EXPORT_SYMBOL(RtmpOsSetNetDevPriv);
EXPORT_SYMBOL(RtmpOsGetNetDevPriv);
EXPORT_SYMBOL(RtmpDevPrivFlagsGet);
EXPORT_SYMBOL(RtmpOsSetNetDevType);
EXPORT_SYMBOL(RtmpOsSetNetDevTypeMonitor);
EXPORT_SYMBOL(RtmpOSNetDevAddrSet);

EXPORT_SYMBOL(RtmpOSFileOpen);
EXPORT_SYMBOL(RtmpOSFSInfoChange);
EXPORT_SYMBOL(RtmpOSFileWrite);
EXPORT_SYMBOL(RtmpOSFileRead);
EXPORT_SYMBOL(RtmpOSFileClose);
EXPORT_SYMBOL(RtmpOSFileSeek);
EXPORT_SYMBOL(RtmpOsFileIsErr);

EXPORT_SYMBOL(RtmpOSTaskNotifyToExit);
EXPORT_SYMBOL(RtmpOSTaskInit);
EXPORT_SYMBOL(RtmpOSTaskAttach);
EXPORT_SYMBOL(RtmpOSTaskCustomize);
EXPORT_SYMBOL(RtmpOSTaskKill);
EXPORT_SYMBOL(RtmpOSTaskAlloc);
EXPORT_SYMBOL(RtmpOSTaskFree);
EXPORT_SYMBOL(RtmpOSTaskWait);
EXPORT_SYMBOL(RtmpOsCheckTaskLegality);
EXPORT_SYMBOL(RtmpOsTaskDataGet);
EXPORT_SYMBOL(RtmpOsTaskIsKilled);
EXPORT_SYMBOL(RtmpOsTaskWakeUp);

EXPORT_SYMBOL(RtmpOsTaskletSche);
EXPORT_SYMBOL(RtmpOsTaskletInit);
EXPORT_SYMBOL(RtmpOsTaskletKill);
EXPORT_SYMBOL(RtmpOsTaskletDataAssign);
EXPORT_SYMBOL(RtmpOsTaskPidInit);

EXPORT_SYMBOL(RtmpOsAllocateLock);
EXPORT_SYMBOL(RtmpOsFreeSpinLock);
EXPORT_SYMBOL(RtmpOsSpinLockBh);
EXPORT_SYMBOL(RtmpOsSpinUnLockBh);
EXPORT_SYMBOL(RtmpOsIntLock);
EXPORT_SYMBOL(RtmpOsIntUnLock);

EXPORT_SYMBOL(RtmpOsSemaInitLocked);
EXPORT_SYMBOL(RtmpOsSemaInit);
EXPORT_SYMBOL(RtmpOsSemaDestory);
EXPORT_SYMBOL(RtmpOsSemaWaitInterruptible);
EXPORT_SYMBOL(RtmpOsSemaWakeUp);
EXPORT_SYMBOL(RtmpOsMlmeUp);

EXPORT_SYMBOL(RtmpOsGetPid);

EXPORT_SYMBOL(RtmpOsWait);
EXPORT_SYMBOL(RtmpOsTimerAfter);
EXPORT_SYMBOL(RtmpOsTimerBefore);
EXPORT_SYMBOL(RtmpOsGetSystemUpTime);

EXPORT_SYMBOL(RtmpOsDCacheFlush);


EXPORT_SYMBOL(RtmpOsNtohs);
EXPORT_SYMBOL(RtmpOsHtons);
EXPORT_SYMBOL(RtmpOsNtohl);
EXPORT_SYMBOL(RtmpOsHtonl);

EXPORT_SYMBOL(RtmpOsVmalloc);
EXPORT_SYMBOL(RtmpOsVfree);
EXPORT_SYMBOL(RtmpOsCopyFromUser);
EXPORT_SYMBOL(RtmpOsCopyToUser);

EXPORT_SYMBOL(RtmpOsCmdUp);
EXPORT_SYMBOL(RtmpOsCmdDisplayLenCheck);

EXPORT_SYMBOL(hex_dump);
EXPORT_SYMBOL(RtmpOsSendWirelessEvent);
EXPORT_SYMBOL(RTMP_GetCurrentSystemTime);
EXPORT_SYMBOL(RTMP_GetCurrentSystemTick);
EXPORT_SYMBOL(RTMPusecDelay);
EXPORT_SYMBOL(RtmpOsMsDelay);
EXPORT_SYMBOL(RtmpOSWrielessEventSend);
EXPORT_SYMBOL(RtmpOSWrielessEventSendExt);
EXPORT_SYMBOL(RtmpOsTickUnitGet);
EXPORT_SYMBOL(RtmpOsOpsInit);
EXPORT_SYMBOL(RtmpOsGetUnaligned);
EXPORT_SYMBOL(RtmpOsGetUnaligned32);
EXPORT_SYMBOL(RtmpOsGetUnalignedlong);
EXPORT_SYMBOL(RtmpOsMaxScanDataGet);
EXPORT_SYMBOL(RtmpDrvMaxRateGet);
EXPORT_SYMBOL(RtmpOsWirelessExtVerGet);
EXPORT_SYMBOL(rtstrchr);
EXPORT_SYMBOL(RtmpOsIsInInterrupt);
EXPORT_SYMBOL(RtmpOsSimpleStrtol);
EXPORT_SYMBOL(RtmpOsStatsAlloc);

EXPORT_SYMBOL(RtmpOsAtomicInit);
EXPORT_SYMBOL(RtmpOsAtomicDestroy);
EXPORT_SYMBOL(RtmpOsAtomicRead);
EXPORT_SYMBOL(RtmpOsAtomicDec);
EXPORT_SYMBOL(RtmpOsAtomicInterlockedExchange);

EXPORT_SYMBOL(RtmpDrvAllMacPrint);
EXPORT_SYMBOL(RtmpDrvAllE2PPrint);

EXPORT_SYMBOL(RtmpMeshDown);
EXPORT_SYMBOL(RtmpOSIRQRelease);
EXPORT_SYMBOL(RtmpOsWlanEventSet);

/* cfg80211 */
#ifdef RT_CFG80211_SUPPORT
extern UCHAR Cfg80211_Chan[];
EXPORT_SYMBOL(CFG80211OS_UnRegister);
EXPORT_SYMBOL(CFG80211_SupBandInit);
EXPORT_SYMBOL(Cfg80211_Chan);
EXPORT_SYMBOL(CFG80211OS_RegHint);
EXPORT_SYMBOL(CFG80211OS_RegHint11D);
EXPORT_SYMBOL(CFG80211OS_BandInfoGet);
EXPORT_SYMBOL(CFG80211OS_ChanNumGet);
EXPORT_SYMBOL(CFG80211OS_ChanInfoGet);
EXPORT_SYMBOL(CFG80211OS_ChanInfoInit);
EXPORT_SYMBOL(CFG80211OS_Scaning);
EXPORT_SYMBOL(CFG80211OS_ScanEnd);
EXPORT_SYMBOL(CFG80211OS_ConnectResultInform);
EXPORT_SYMBOL(CFG80211OS_SupBandReInit);
#endif /* RT_CFG80211_SUPPORT */

/* global variables */
EXPORT_SYMBOL(RTPktOffsetData);
EXPORT_SYMBOL(RTPktOffsetLen);
EXPORT_SYMBOL(RTPktOffsetCB);

#ifdef VENDOR_FEATURE4_SUPPORT
EXPORT_SYMBOL(OS_NumOfMemAlloc);
EXPORT_SYMBOL(OS_NumOfMemFree);
#endif /* VENDOR_FEATURE4_SUPPORT */

#ifdef VENDOR_FEATURE2_SUPPORT
EXPORT_SYMBOL(OS_NumOfPktAlloc);
EXPORT_SYMBOL(OS_NumOfPktFree);
#endif /* VENDOR_FEATURE2_SUPPORT */

/* only for AP */
#ifdef CONFIG_AP_SUPPORT
EXPORT_SYMBOL(duplicate_pkt_with_VLAN);
#ifdef BG_FT_SUPPORT
EXPORT_SYMBOL(BG_FTPH_Init);
EXPORT_SYMBOL(BG_FTPH_Remove);
#endif /* BG_FT_SUPPORT */
#endif /* CONFIG_AP_SUPPORT */

#ifdef CONFIG_STA_SUPPORT
EXPORT_SYMBOL(ralinkrate);
EXPORT_SYMBOL(RT_RateSize);
EXPORT_SYMBOL(send_monitor_packets);

#ifdef NATIVE_WPA_SUPPLICANT_SUPPORT
EXPORT_SYMBOL(wext_notify_event_assoc);
#endif /* NATIVE_WPA_SUPPLICANT_SUPPORT */

#ifdef WPA_SUPPLICANT_SUPPORT
#ifndef NATIVE_WPA_SUPPLICANT_SUPPORT
EXPORT_SYMBOL(SendAssocIEsToWpaSupplicant);
#endif /* NATIVE_WPA_SUPPLICANT_SUPPORT */
#endif /* WPA_SUPPLICANT_SUPPORT */

#ifdef WPA_SUPPLICANT_SUPPORT
EXPORT_SYMBOL(WpaSendMicFailureToWpaSupplicant);
#endif /* WPA_SUPPLICANT_SUPPORT */
#endif /* CONFIG_STA_SUPPORT */


/* only for PCI */

/* only for USB */
#ifdef RTMP_MAC_USB
EXPORT_SYMBOL(dump_urb);
EXPORT_SYMBOL(RtmpOsUsbUrbDataGet);
EXPORT_SYMBOL(RtmpOsUsbUrbStatusGet);
EXPORT_SYMBOL(RtmpOsUsbUrbLenGet);
EXPORT_SYMBOL(RtmpOsUsbEmptyUrbCheck);
EXPORT_SYMBOL(RtmpOsUsbInitHTTxDesc);
EXPORT_SYMBOL(RtmpOsUsbInitRxDesc);
EXPORT_SYMBOL(RtmpOsUsbContextGet);
EXPORT_SYMBOL(RtmpOsUsbStatusGet);
EXPORT_SYMBOL(RtmpOsUsbDmaMapping);
EXPORT_SYMBOL(RtmpOsGetUsbDevVendorID);
EXPORT_SYMBOL(RtmpOsGetUsbDevProductID);
#endif /* RTMP_MAC_USB */

/* only for RBUS or flash-capable concurrent devices */
#if defined(RTMP_RBUS_SUPPORT) || defined (RTMP_FLASH_SUPPORT) 
EXPORT_SYMBOL(RtmpFlashRead);
EXPORT_SYMBOL(RtmpFlashWrite);
#endif /* defined(RTMP_RBUS_SUPPORT) || defined (RTMP_FLASH_SUPPORT)  */


EXPORT_SYMBOL(RtPrivIoctlSetVal);

#ifdef RTMP_USB_SUPPORT
EXPORT_SYMBOL(RtmpInitCompletion);
EXPORT_SYMBOL(RtmpWaitForCompletionTimeout);
EXPORT_SYMBOL(RtmpComplete);
#endif /* RTMP_USB_SUPPORT */
EXPORT_SYMBOL(RtmpMsecsToJiffies);


EXPORT_SYMBOL(RtmpDrvAllRFPrint);
#endif /* OS_ABL_SUPPORT */

