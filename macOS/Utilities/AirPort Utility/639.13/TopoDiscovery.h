//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSKeyedArchiverDelegate-Protocol.h"
#import "NSKeyedUnarchiverDelegate-Protocol.h"
#import "NetworkDeviceDiscoveryDelegate-Protocol.h"
#import "SettingsFunctionDelegate-Protocol.h"
#import "SetupUIDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, NSTimer, NetworkDeviceInfoDiscovery;
@protocol OS_dispatch_queue, OS_dispatch_source, TopoDiscoveryDelegate;

@interface TopoDiscovery : NSObject <SetupUIDelegate, NetworkDeviceDiscoveryDelegate, SettingsFunctionDelegate, NSKeyedUnarchiverDelegate, NSKeyedArchiverDelegate>
{
    BOOL editing;
    NSString *_currentSelectedInterface;
    NSMutableDictionary *_currentTopoInfo;
    NSMutableDictionary *_interfaceInfoDict;
    NSMutableDictionary *_unconfiguredBaseStationNodes;
    NSMutableDictionary *_remoteBaseStationNodes;
    NSMutableDictionary *_connectivityCheckNodes;
    id _delegate;
    struct ACPBrowserSession *_acpBrowserSession;
    unsigned long long _discoveryState;
    unsigned long long _discoveryOptions;
    unsigned int _lastGoodNetworkHash;
    unsigned int _networkHashForArchive;
    NSString *_networkIdentifierForArchive;
    NetworkDeviceInfoDiscovery *_netDeviceDiscovery;
    NSMutableArray *_networkDeviceInfo;
    NSObject<OS_dispatch_queue> *_connectivityCheckQueue;
    NSString *_routerIPv4Address;
    NSString *_routerSubnetMask;
    NSString *_routerMACAddress;
    NSArray *_dnsServers;
    NSString *_dnsDomainNames;
    NSString *_defaultInterface;
    NSObject<OS_dispatch_source> *_watchdogTimer;
    BOOL _suddenTerminationDisabled;
    NSMutableArray *_indexToAddress;
    NSMutableDictionary *_addressToIndex;
    unsigned int _currentTopoSequence;
    NSObject<OS_dispatch_source> *_missingDevicesTimer;
    NSObject<OS_dispatch_source> *_noFoundDevicesTimer;
    NSMutableArray *_pausedNodes;
    NSMutableArray *_waitingRemovalNodes;
    NSMutableArray *_tooBusyToCancelNodes;
    id uninterruptibleActivity;
    NSTimer *activityWatchdogTimer;
}

+ (void)moveSavedTopos;
+ (id)getTopoFileArchiveBasePath;
+ (void)initalizeQueues;
+ (id)getFlattenedAndLocalizedRadioStationList:(id)arg1 forNode:(id)arg2;
+ (id)findSystemInterfaceInfo:(id)arg1 forInterface:(id)arg2;
@property(retain, nonatomic) NSTimer *activityWatchdogTimer; // @synthesize activityWatchdogTimer;
@property(retain, nonatomic) id uninterruptibleActivity; // @synthesize uninterruptibleActivity;
@property(nonatomic, getter=isEditing) BOOL editing; // @synthesize editing;
@property(nonatomic) id <TopoDiscoveryDelegate> delegate; // @synthesize delegate=_delegate;
- (int)callbackFunctionWithParamDict:(id)arg1;
- (void)setupProgressUpdated:(int)arg1 status:(int)arg2 paramDict:(id)arg3 forController:(id)arg4;
- (void)handBaseStationSetupControllBusyStateChangeWithStatus:(int)arg1 andParams:(id)arg2 forController:(id)arg3;
- (void)handleBaseStationDiskTaskProgressWithStatus:(int)arg1 andParams:(id)arg2 forController:(id)arg3;
- (void)handleBaseStationSetupCompleteWithStatus:(int)arg1 andParams:(id)arg2 forController:(id)arg3;
- (void)handleBaseStationSetupStartWithStatus:(int)arg1 andParams:(id)arg2 forController:(id)arg3;
- (void)activityWatchdogTimedOut:(id)arg1;
- (void)handleBaseStationTaskCompleteWithStatus:(int)arg1 andParams:(id)arg2 forController:(id)arg3;
- (void)handleBaseStationTaskStartWithStatus:(int)arg1 andParams:(id)arg2 forController:(id)arg3;
- (void)setupRPCResponseWithResult:(int)arg1 rpcSelector:(int)arg2 responseDict:(id)arg3 forController:(id)arg4;
- (void)processDeviceConnectionsDueToNode:(id)arg1;
- (void)constructTopoTreeRecursivelyFromNode:(id)arg1 withConnections:(char *)arg2 count:(unsigned long long)arg3;
- (void)processSwitchCache:(id)arg1 forBase:(id)arg2 withBaseInterfaceName:(id)arg3;
- (void)convertACPEthernetLinkState:(unsigned int)arg1 toSpeed:(id *)arg2 andDuplex:(id *)arg3;
- (id)computeMaxEthernetSpeedForBase:(id)arg1;
- (void)processBridgeCache:(id)arg1 forBase:(id)arg2 withClientList:(id)arg3;
- (id)findWDSEntry:(id)arg1 withClients:(id)arg2 onInterface:(id)arg3;
- (id)findWDSEntry:(id)arg1 withClients:(id)arg2 onSpecificInterface:(id)arg3;
- (id)addConnectedDeviceToList:(id)arg1 forBase:(id)arg2 withInterface:(id)arg3 andType:(id)arg4 withInfo:(id)arg5 withPeer:(id)arg6;
- (id)findDeviceInfoInDeviceListByMAC:(id)arg1 withInterface:(id)arg2 forBase:(id)arg3;
- (void)debugDumpConnections:(char *)arg1 rowWidth:(unsigned long long)arg2;
- (id)debugGetNameForMACAddress:(id)arg1;
- (void)recursivelyUpdateChildClientLists:(id)arg1;
- (void)setupMonitoredSettingChanged:(int)arg1 paramDict:(id)arg2 forController:(id)arg3;
- (void)readBSConfigResultReady:(int)arg1 forController:(id)arg2;
- (void)recordInterestingThingsAboutBase:(id)arg1;
- (void)addPossiblePasswordToUnconnectedDevices:(id)arg1;
- (id)pickPasswordToTryForDevice:(id)arg1;
- (void)processBaseStationClientsForNode:(id)arg1;
- (id)generateMissingPHYInfoForWirelessClient:(id)arg1 fromNode:(id)arg2;
- (void)getIPv6ddressForMACAddress:(id)arg1 withClientInfo:(id)arg2;
- (void)getIPv4AddressForMACAddress:(id)arg1 withClientInfo:(id)arg2;
- (void)updateClientListUsingDHCPInfo:(id)arg1 forBase:(id)arg2;
- (void)updateClientListUsingNetworkInfo:(id)arg1 forBase:(id)arg2;
- (void)networkDeviceInfoUpdated:(id)arg1;
- (void)fixupUnknownConnectionMediumsIfPossibleDueToNode:(id)arg1;
- (id)setOfBaseStationsInClientList:(id)arg1 ofBase:(id)arg2;
- (BOOL)isMACAddress:(id)arg1 thisBase:(id)arg2;
- (BOOL)addUnconfiguredBaseStation:(id)arg1 key:(id *)arg2;
- (id)findRemoteBaseStationNodeUsingMACAddress:(id)arg1;
- (id)findUnconfiguredBaseStationNodeUsingMACAddresses:(id)arg1 orNetworkName:(id)arg2;
- (id)getBaseStationMACAddressSource:(id)arg1;
- (id)normalizeAddressForTopo:(id)arg1;
- (BOOL)isThisMACAddressABaseStation:(id)arg1;
- (id)findBaseStationNodeUsingMACAddress:(id)arg1;
- (id)findBaseStationNodeUsingMACAddressInternal:(id)arg1;
- (void)attachChildDevice:(id)arg1 toParent:(id)arg2 withDownstreamConnectionInfo:(id)arg3 andUpstreamConnectionInfo:(id)arg4;
- (void)attachChildDevice:(id)arg1 toParent:(id)arg2 withConnectionMedium:(int)arg3;
- (id)debugGetConnectionMediumString:(int)arg1;
- (id)detachFromParentDevice:(id)arg1;
- (void)sortDeviceTreeChildren;
- (void)constructDeviceTreeForAllCompletedNodesDueToNode:(id)arg1;
- (void)constructDeviceTreeDueToNode:(id)arg1;
- (void)enumerateTopoFromNode:(id)arg1 withOptions:(int)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateTopoWithOptions:(int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateTopoNodeChildrenRecursive:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 stop:(char *)arg3 withOptions:(int)arg4;
- (void)wirelessScanComplete:(id)arg1;
- (void)checkForMissingUnarchivedDevices;
- (void)baseStationRemovedCore:(id)arg1;
- (void)baseStationRemovedNotification:(id)arg1;
- (void)baseStationAddOrChangeInternal:(id)arg1;
- (void)baseStationAddOrChangeNotification:(id)arg1;
- (void)attemptConnectionToNode:(id)arg1;
- (void)connectivityCheckHandler:(id)arg1 error:(int)arg2 socket:(int)arg3;
- (void)nodeConnectivityCheckFailed:(id)arg1;
- (void)nodeConnectivityCheckSucceeded:(id)arg1;
- (void)completeBaseAddOrChange:(id)arg1;
- (void)startAsyncTopoDiscoveryForBase:(id)arg1;
- (void)attachBaseStationsToCorrectParentGateway;
- (BOOL)isBaseStationAttachedDirectlyToInternet:(id)arg1;
- (void)refreshBaseStationNodesWithProductID:(unsigned int)arg1;
- (void)deviceRemovedDuringConfiguration:(id)arg1;
- (void)deviceRemovedDuringConfigurationInternal:(id)arg1;
- (void)removeDeviceFromTreeAndRebuild:(id)arg1;
- (void)removeDeviceFromTreeAndRebuildInternal:(id)arg1;
- (void)destroyCurrentTopologyWithOptions:(int)arg1;
- (id)currentNetworkInterface;
- (void)setCurrentNetworkInterface:(id)arg1;
- (void)completeDiscoveryForUnreadDevices;
- (void)completeDiscoveryForUnreadDevicesInternal;
- (void)completeDiscoveryForBaseStation:(id)arg1;
- (void)refreshCurrentTopoForNoGoodReasonBecauseIWasToldToDoThis;
- (void)forceSoftTopoRefresh;
- (void)restartDiscovery;
- (void)pauseDiscovery;
- (void)pauseDiscoveryAndCloseConnections:(BOOL)arg1;
- (void)stopDiscoveryInternal;
- (void)startDiscovery;
- (void)startDiscoveryInternal;
- (void)startDiscoveryInternalWithFlags:(int)arg1;
- (void)tryLoadTopoFromFileArchive;
- (void)stopBrowsingForAirPortBaseStations;
- (void)startBrowsingForAirPortBaseStations;
- (void)simpleCheckIfBaseIsDefaultRouter:(id)arg1;
- (BOOL)getRouterInfo;
- (void)recordBaseStationNodeAsRouter:(id)arg1 withConnectionMedium:(int)arg2;
- (void)completeInProgressDiskTasks:(id)arg1;
- (void)checkForInProgressDiskTasks:(id)arg1;
- (long long)numNodesTooBusyToCancel;
- (long long)numNodesWaitingForRemoval;
- (long long)numPausedNodes;
- (void)checkAllFirmwareUpdateAvailabilityNotification:(id)arg1;
- (void)checkAllFirmwareUpdateAvailability;
- (void)checkFirmwareUpdateAvailability:(id)arg1;
- (void)watchdogTimer;
- (void)linkChangeNotification:(id)arg1;
- (void)checkLinkChangeForCurrentInterface;
- (id)getLinkStatusDictForCurrentInterface;
- (void)checkForAndProcessNetworkLinkChangeWithLinkStatus:(id)arg1;
- (BOOL)isNetworkConfgurationChangedDueToLinkStatus:(id)arg1 forceChange:(BOOL)arg2;
- (void)writeNetworkSelectionToPrefs;
- (void)closeAllBaseConnections;
- (void)networkReachabilityChangedNotification:(id)arg1;
- (void)stopNetworkReachabilityMonitoring;
- (void)startNetworkReachabilityMonitoring;
- (void)syncInternetNodeConnectionStatus;
- (void)updateInternetNodeStats;
- (void)setInternetNodeStatsFromSelf;
- (void)setInternetNodeStatsFromBase:(id)arg1;
- (void)setConfigReadStatus:(int)arg1 forNode:(id)arg2;
- (void)setRemoveOnTaskComplete:(BOOL)arg1 forNode:(id)arg2;
- (void)invokeDelegateWithTopologyRemoteAirPortNodeWasRemoved:(id)arg1;
- (void)invokeDelegateWithTopologyRemoteAirPortNodeWasAdded:(id)arg1;
- (void)invokeDelegateWithTopologyUnconfiguredAirPortNodeWasRemoved:(id)arg1;
- (void)invokeDelegateWithTopologyUnconfiguredAirPortNodeWasAdded:(id)arg1;
- (void)invokeDelegateWithTopologyNoDevicesFoundYet;
- (void)invokeDelegateWithTopologyNetworkInterfaceRemoved:(id)arg1;
- (void)invokeDelegateWithTopologyNetworkInterfaceAdded:(id)arg1 displayName:(id)arg2;
- (void)invokeDelegateWithTopologyDestroyEntireTree;
- (void)invokeDelegateWithTopologyNodeWillBeDeleted:(id)arg1;
- (void)invokeDelegateWithTopologyNodeHasGoneMissing:(id)arg1;
- (void)invokeDelegateWithTopologyNodeWasChanged:(id)arg1;
- (void)invokeDelegateWithTopologyNodeHadReadError:(id)arg1 status:(int)arg2;
- (void)invokeDelegateWithTopologyNodeHadWriteError:(id)arg1 status:(int)arg2;
- (void)invokeDelegateWithTopologyNodeHadTaskError:(id)arg1 taskCode:(unsigned int)arg2 status:(int)arg3;
- (BOOL)invokeTopologyOkToRunDiscovery;
- (void)invokeDelegateWithTopologyNodeDiscoveryComplete:(id)arg1;
- (void)invokeDelegateWithTopologyNodeWasAdded:(id)arg1;
- (void)debugDumpEthernetPHYStatusForAirPortDevice:(id)arg1;
- (void)debugDumpSystemFlags:(unsigned int)arg1;
- (void)debugDumpDeviceTree;
- (void)debugDumpDeviceTreeInternal;
- (BOOL)loadTopoFromFileArchive;
- (BOOL)isTopoInfoValid:(id)arg1;
- (void)exportTopoToFileArchive;
- (id)getTopoFileArchivePathUsingNetworkHash:(unsigned int)arg1;
- (id)archiver:(id)arg1 willEncodeObject:(id)arg2;
- (id)internetNode;
- (id)gatewayDeviceNodes;
- (id)primaryBaseStationNodes;
- (id)baseStationNodes;
- (id)getPerInterfaceTopoDictForInterfaceByName:(id)arg1;
- (void)recordActiveInterface:(id)arg1;
- (id)getDisplayNameForInterface:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)pickDefaultInterface;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

