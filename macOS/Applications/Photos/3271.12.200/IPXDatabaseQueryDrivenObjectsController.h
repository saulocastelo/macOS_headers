//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXDatabaseObjectsController.h"

#import "IPXDatabaseContainerQueryDelegate-Protocol.h"
#import "PAPreviewStateReceiver-Protocol.h"
#import "RDLibraryMessagesReceiver-Protocol.h"

@class NSSet, NSString;
@protocol IPXDatabaseContainerQuery;

@interface IPXDatabaseQueryDrivenObjectsController : IPXDatabaseObjectsController <PAPreviewStateReceiver, IPXDatabaseContainerQueryDelegate, RDLibraryMessagesReceiver>
{
    BOOL _disconnectFromGlobalPAPreviewStateMulticaster;
    id <IPXDatabaseContainerQuery> _databaseContainerQuery;
    NSSet *_filteredModelIds;
    NSSet *_locked_filteredModelIds;
}

+ (id)sharedImageProxyStateQueue;
@property(retain, nonatomic, setter=locked_setFilteredModelIds:) NSSet *locked_filteredModelIds; // @synthesize locked_filteredModelIds=_locked_filteredModelIds;
- (void).cxx_destruct;
- (void)databaseContainerQuery:(id)arg1 didUpdateVersionQueryResult:(id)arg2;
- (void)smallPAPreviewImagesUpdatedFromLiveEditForVersionAddress:(id)arg1;
- (void)smallPAPreviewImagesUpdatedForVersionAddress:(id)arg1;
- (void)locked_disconnectObjectsSourceWithCompletion:(CDUnknownBlockType)arg1;
- (void)uninstallObjectsSourceMonitor;
- (void)installObjectsSourceMonitor;
- (id)newCollectionWithUUID:(id)arg1 name:(id)arg2 lifetimeSequence:(unsigned long long)arg3 objects:(id)arg4 userInfo:(id)arg5;
- (CDUnknownBlockType)assignedObjectsComparator;
- (void)applyQueryResultChange:(id)arg1;
- (void)updateDatabaseContainerQuery:(id)arg1;
- (void)prepareVersions:(BOOL)arg1;
@property(readonly, nonatomic) BOOL isLibraryMessageReceiver;
@property(readonly, nonatomic) BOOL monitorsPAPreviewImageUpdates;
@property(readonly, nonatomic) id <IPXDatabaseContainerQuery> databaseContainerQuery;
- (void)locked_setDatabaseContainerQuery:(id)arg1;
- (id)initWithDatabaseContainerQuery:(id)arg1 uuid:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

