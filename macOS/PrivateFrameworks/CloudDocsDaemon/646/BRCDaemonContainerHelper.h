//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRContainerHelper-Protocol.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface BRCDaemonContainerHelper : NSObject <BRContainerHelper>
{
    NSSet *_disabledBundleIDs;
    NSSet *_knownBundleIDs;
}

- (void).cxx_destruct;
- (id)sharedFolderForURL:(id)arg1 error:(id *)arg2;
- (id)itemIDForURL:(id)arg1 error:(id *)arg2;
- (unsigned short)br_capabilityToMoveFromURL:(id)arg1 toNewParent:(id)arg2 error:(id *)arg3;
- (unsigned short)br_capabilityToMoveFromLookup:(id)arg1 toNewParent:(id)arg2 session:(id)arg3 error:(id *)arg4;
- (BOOL)cloudSyncTCCDisabledForContainerMeta:(id)arg1;
- (id)fetchContainerForURL:(id)arg1;
- (id)fetchAllContainersByIDWithError:(id *)arg1;
- (BOOL)canFetchAllContainersByID;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

