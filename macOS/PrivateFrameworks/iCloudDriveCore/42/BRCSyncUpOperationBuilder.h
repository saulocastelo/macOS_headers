//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCAccountSession, BRCSyncUpOperation, BRCUserDefaults, NSMutableSet;

__attribute__((visibility("hidden")))
@interface BRCSyncUpOperationBuilder : NSObject
{
    NSMutableSet *_fullyChainedParentIDWhitelist;
    NSMutableSet *_halfChainedParentIDWhitelist;
    BRCAccountSession *_session;
    BRCSyncUpOperation *_op;
    BRCUserDefaults *_defaults;
}

@property(retain, nonatomic) BRCUserDefaults *defaults; // @synthesize defaults=_defaults;
@property(retain, nonatomic) BRCSyncUpOperation *op; // @synthesize op=_op;
@property(retain, nonatomic) BRCAccountSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (float)addItem:(id)arg1;
- (float)addEditOfSymlink:(id)arg1;
- (float)addDeletionOfFinderBookmark:(id)arg1;
- (float)addEditOfFinderBookmark:(id)arg1;
- (float)addEditOfDocument:(id)arg1;
- (float)addDeletionOfDocument:(id)arg1;
- (float)addDeletionOfDirectory:(id)arg1;
- (float)addEditOfDirectory:(id)arg1;
- (void)handleEditOfSharedItem:(id)arg1;
- (void)handleDeletionOfSharedItem:(id)arg1;
- (float)fakeSyncForItem:(id)arg1 inZone:(id)arg2;
- (void)prepareAppLibraryRootSyncUpForItem:(id)arg1;
- (float)addDeletionOfSharedTopLevelItem:(id)arg1;
- (float)addEditOfSharedTopLevelItem:(id)arg1;
- (float)addDeletionOfRecordID:(id)arg1 ckInfo:(id)arg2;
- (float)addDeletionOfItem:(id)arg1;
- (BOOL)checkIfSyncAllowedInSharedZoneForItem:(id)arg1;
- (unsigned char)shouldPCSChainStatusForItem:(id)arg1;
- (id)init;

@end

