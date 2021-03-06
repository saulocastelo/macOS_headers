//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoard/FBApplicationProcessDelegate-Protocol.h>
#import <FrontBoard/FBUIProcessManagerInternal-Protocol.h>

@class BKSProcessAssertion, FBApplicationProcess, FBApplicationProcessWatchdogPolicy, NSHashTable, NSMapTable, NSMutableDictionary, NSMutableSet, NSString;
@protocol FBApplicationInfoProvider, OS_dispatch_queue;

@interface FBProcessManager : NSObject <FBApplicationProcessDelegate, FBUIProcessManagerInternal>
{
    NSObject<OS_dispatch_queue> *_queue;
    id <FBApplicationInfoProvider> _appInfoProvider;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    NSHashTable *_observers;
    NSMapTable *_processesByPID;
    NSMapTable *_processesByBundleID;
    NSObject<OS_dispatch_queue> *_processesQueue;
    FBApplicationProcess *_systemAppProcess;
    BKSProcessAssertion *_systemAppProcessAssertion;
    NSMutableSet *_preventIdleSleepReasons;
    FBApplicationProcess *_foregroundAppProcess;
    FBApplicationProcess *_preferredForegroundAppProcess;
    FBApplicationProcessWatchdogPolicy *_noDirectAccess_defaultWatchdogPolicy;
    NSMutableDictionary *_workspacesByClientIdentity;
}

+ (id)sharedInstance;
@property(retain) FBApplicationProcessWatchdogPolicy *defaultWatchdogPolicy; // @synthesize defaultWatchdogPolicy=_noDirectAccess_defaultWatchdogPolicy;
@property(readonly, nonatomic) FBApplicationProcess *systemApplicationProcess; // @synthesize systemApplicationProcess=_systemAppProcess;
- (void).cxx_destruct;
- (void)_queue_evaluateForegroundEventRouting;
- (void)_queue_notifyObserversUsingBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_processesQueue_processForPID:(int)arg1;
- (id)_processesQueue_processesForBundleIdentifier:(id)arg1;
- (void)_queue_removeProcess:(id)arg1 withBundleID:(id)arg2 pid:(int)arg3;
- (void)_queue_addProcess:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_queue_reallyRegisterProcessForProcessHandle:(id)arg1;
- (void)invalidateClientWorkspace:(id)arg1;
- (id)workspaceForSceneClientWithIdentity:(id)arg1;
- (id)currentProcess;
- (void)noteProcess:(id)arg1 didUpdateState:(id)arg2;
- (void)noteProcessDidExit:(id)arg1;
- (id)watchdogPolicyForProcess:(id)arg1 eventContext:(id)arg2;
- (void)_setSystemIdleSleepDisabled:(BOOL)arg1 forReason:(id)arg2;
- (id)_serviceClientAddedWithProcessHandle:(id)arg1;
- (id)registerProcessForHandle:(id)arg1;
- (id)registerProcessForAuditToken:(CDStruct_6ad76789)arg1;
@property(readonly, copy) NSString *description;
- (id)createApplicationProcessForBundleID:(id)arg1 withExecutionContext:(id)arg2;
- (id)createApplicationProcessForBundleID:(id)arg1;
- (void)_setPreferredForegroundApplicationProcess:(id)arg1;
- (id)applicationProcessForPID:(int)arg1;
- (id)processForPID:(int)arg1;
- (id)applicationProcessesForBundleIdentifier:(id)arg1;
- (id)processesForBundleIdentifier:(id)arg1;
- (id)allApplicationProcesses;
- (id)allProcesses;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (BOOL)ping;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

