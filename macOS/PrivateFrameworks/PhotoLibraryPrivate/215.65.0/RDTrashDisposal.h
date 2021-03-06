//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LiRidList, NSArray, NSDate, RDDatabase;

@interface RDTrashDisposal : NSObject
{
    NSDate *_epoch;
    unsigned char _option;
    RDDatabase *_database;
    NSArray *_modelIdsToDeleteImmediately;
    CDUnknownBlockType _completionHandler;
    NSDate *_deletionDate;
    LiRidList *_masterIdsToDelete;
    LiRidList *_versionIdsToDelete;
    LiRidList *_folderIdsToDelete;
    LiRidList *_albumIdsToDelete;
    LiRidList *_attachmentIdsToDelete;
}

+ (void)emptyTrashForDatabase:(id)arg1 withReason:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)emptyTrashItemsImmediatelyForModelIds:(id)arg1 option:(unsigned char)arg2 withReason:(unsigned int)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (unsigned long long)trashDisposalPolicyDays;
+ (void)emptyTrashForDatabase:(id)arg1 andModelIds:(id)arg2 option:(unsigned char)arg3 withReason:(unsigned int)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)serviceEmptyTrashForDatabase:(id)arg1 withReason:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)serviceEmptyTrashItemsImmediatelyForDatabase:(id)arg1 andModelIds:(id)arg2 option:(unsigned char)arg3 withReason:(unsigned int)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (id)inflightMasterIdsToDelete;
+ (id)workQueue;
+ (id)processingQueue;
+ (double)trashDisposalPolicyTimeInterval;
@property(retain, nonatomic) LiRidList *attachmentIdsToDelete; // @synthesize attachmentIdsToDelete=_attachmentIdsToDelete;
@property(retain, nonatomic) LiRidList *albumIdsToDelete; // @synthesize albumIdsToDelete=_albumIdsToDelete;
@property(retain, nonatomic) LiRidList *folderIdsToDelete; // @synthesize folderIdsToDelete=_folderIdsToDelete;
@property(retain, nonatomic) LiRidList *versionIdsToDelete; // @synthesize versionIdsToDelete=_versionIdsToDelete;
@property(retain, nonatomic) LiRidList *masterIdsToDelete; // @synthesize masterIdsToDelete=_masterIdsToDelete;
@property(retain, nonatomic) NSDate *deletionDate; // @synthesize deletionDate=_deletionDate;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) unsigned char option; // @synthesize option=_option;
@property(retain, nonatomic) NSArray *modelIdsToDeleteImmediately; // @synthesize modelIdsToDeleteImmediately=_modelIdsToDeleteImmediately;
@property(retain, nonatomic) RDDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (id)init;
- (void)putModelIdsInTrash:(id)arg1 table:(id)arg2 isInTrashKeyPath:(id)arg3 inTrashDateKeyPath:(id)arg4 withReason:(unsigned int)arg5;
- (void)finishWithReason:(unsigned int)arg1;
- (void)executeWithReason:(unsigned int)arg1;
- (void)prepareWithReason:(unsigned int)arg1;
- (BOOL)isOption:(unsigned char)arg1;

@end

