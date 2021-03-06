//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString, SMCustomizeTreeNode_Client, SMSystem_Client;

@interface SMCustomizeTree_Client : NSObject
{
    BOOL _disableFileVaultUsersMigration;
    BOOL _migratableState;
    BOOL _rebootRequired;
    SMCustomizeTreeNode_Client *_root;
    SMCustomizeTreeNode_Client *_appropriateUserNode;
    NSNumber *_totalSize;
    NSNumber *_freeSpace;
    NSNumber *_filesProcessed;
    SMSystem_Client *_sourceSystem;
    SMSystem_Client *_targetSystem;
    NSString *_migratableStateDescription;
    id <SMSizingDelegate> _sizingBridge;
}

@property(retain) id <SMSizingDelegate> sizingBridge; // @synthesize sizingBridge=_sizingBridge;
@property(readonly) BOOL rebootRequired; // @synthesize rebootRequired=_rebootRequired;
@property(readonly) NSString *migratableStateDescription; // @synthesize migratableStateDescription=_migratableStateDescription;
@property(readonly) BOOL migratableState; // @synthesize migratableState=_migratableState;
@property(retain) SMSystem_Client *targetSystem; // @synthesize targetSystem=_targetSystem;
@property(retain) SMSystem_Client *sourceSystem; // @synthesize sourceSystem=_sourceSystem;
@property BOOL disableFileVaultUsersMigration; // @synthesize disableFileVaultUsersMigration=_disableFileVaultUsersMigration;
@property(readonly, copy) NSNumber *filesProcessed; // @synthesize filesProcessed=_filesProcessed;
@property(copy) NSNumber *freeSpace; // @synthesize freeSpace=_freeSpace;
@property(readonly, copy) NSNumber *totalSize; // @synthesize totalSize=_totalSize;
@property(readonly) __weak SMCustomizeTreeNode_Client *appropriateUserNode; // @synthesize appropriateUserNode=_appropriateUserNode;
@property(retain) SMCustomizeTreeNode_Client *root; // @synthesize root=_root;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)migrationRequest;
- (Class)requestClass;
- (void)sizingCompletedForComponent:(id)arg1 withSize:(unsigned long long)arg2;
- (void)preliminarySize:(unsigned long long)arg1 forComponent:(id)arg2;
- (void)sizingCompletedForCustomPathType:(unsigned long long)arg1 user:(id)arg2 withSize:(unsigned long long)arg3;
- (void)preliminarySizeForCustomPaths:(unsigned long long)arg1 type:(unsigned long long)arg2 user:(id)arg3;
- (void)sizingCompletedForPathGroup:(unsigned long long)arg1 withSize:(unsigned long long)arg2;
- (void)preliminarySize:(unsigned long long)arg1 andCount:(unsigned long long)arg2 forPathGroup:(unsigned long long)arg3;
- (void)sizingCompletedForUserWithUUID:(id)arg1 excludablePaths:(id)arg2;
- (void)preliminarySize:(unsigned long long)arg1 forUserWithUUID:(id)arg2;
- (void)addUsers:(id)arg1;
- (void)beginAsynchronousSizing;
- (void)updateAllUserConflicts;
- (void)tearDown;
- (void)generateTree;
- (void)dealloc;
- (id)init;

@end

