//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TimeMachine/TMMonoStructure.h>

@class NSURL, TMMessageSerializer;

@interface TMNodeCache : TMMonoStructure
{
    vector_55152583 _uncommittedEntries;
    NSURL *_updatingStableCacheURL;
    NSURL *_updatingCloneCacheURL;
    TMMessageSerializer *_serializer;
}

+ (BOOL)isTemporaryCacheFileAtURL:(id)arg1;
+ (id)tempCacheFileURLForSourceUUID:(id)arg1 backupStartDate:(id)arg2 underURL:(id)arg3;
+ (id)cacheFileURLForSourceUUID:(id)arg1 backupStartDate:(id)arg2 underURL:(id)arg3;
+ (id)immemorialFileURLUnderURL:(id)arg1;
+ (id)annotatedStateAtURL:(id)arg1;
+ (id)URLForBuildUnderURL:(id)arg1 error:(id *)arg2;
+ (id)structureType;
+ (id)nearestFutureDateForDate:(id)arg1 inDates:(id)arg2;
+ (BOOL)_appendEntries:(vector_55152583)arg1 toURL:(id)arg2 error:(id *)arg3;
@property(readonly, retain) TMMessageSerializer *serializer; // @synthesize serializer=_serializer;
@property(retain) NSURL *updatingCloneCacheURL; // @synthesize updatingCloneCacheURL=_updatingCloneCacheURL;
@property(retain) NSURL *updatingStableCacheURL; // @synthesize updatingStableCacheURL=_updatingStableCacheURL;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)immemorialCacheURL;
- (BOOL)buildAtURL:(id)arg1 parentURL:(id)arg2 error:(id *)arg3;
- (BOOL)flushCache:(id *)arg1;
- (BOOL)purgeEntriesForAllBackupCompletionDatesExcept:(id)arg1 error:(id *)arg2;
- (BOOL)storeBackupCompletionDate:(id)arg1 forBackupStartDate:(id)arg2 error:(id *)arg3;
- (BOOL)WIP_storeBackupCompletionDate:(id)arg1 forBackupStartDate:(id)arg2 error:(id *)arg3;
- (id)_mostRecentCompletionDate;
- (id)_allSourceUUIDs;
- (id)_mergeCacheFilesBetweenStartDate:(id)arg1 endDate:(id)arg2 sourceUUID:(id)arg3 intoDate:(id)arg4 error:(id *)arg5;
- (BOOL)cleanCache:(id *)arg1;
- (BOOL)_enumerateEntriesInFile:(id)arg1 error:(id *)arg2 enumerator:(CDUnknownBlockType)arg3;
- (BOOL)_enumerateAllFilesStartedBetweenDate:(id)arg1 endDate:(id)arg2 sourceUUID:(id)arg3 error:(id *)arg4 enumerator:(CDUnknownBlockType)arg5;
- (BOOL)_enumerateEntriesStartedBetweenDate:(id)arg1 endDate:(id)arg2 sourceUUID:(id)arg3 error:(id *)arg4 enumerator:(CDUnknownBlockType)arg5;
- (BOOL)_enumerateFilesForBackupStartDate:(id)arg1 sourceUUID:(id)arg2 backupCompletionDate:(id)arg3 error:(id *)arg4 enumerator:(CDUnknownBlockType)arg5;
- (BOOL)_enumerateEntriesForBackupStartDate:(id)arg1 sourceUUID:(id)arg2 error:(id *)arg3 enumerator:(CDUnknownBlockType)arg4;
- (void)_addEntry:(struct NodeCacheEntry)arg1;
- (void)recordUnlinkOfFile:(unsigned long long)arg1 wasLastUnlink:(BOOL)arg2;
- (void)recordBackupAction:(unsigned long long)arg1 sourceFileID:(unsigned long long)arg2 destinationFileID:(unsigned long long)arg3;
- (BOOL)finishUpdatingCurrentCache:(id *)arg1;
- (BOOL)startUpdatingCacheForSourceUUID:(id)arg1 backupStartDate:(id)arg2 error:(id *)arg3;
- (id)destinationDeletedFileIDsSetForBackupStartDate:(id)arg1 error:(id *)arg2;
- (id)destinationFileIDsDeletedForBackupStartDate:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithUUID:(id)arg1 url:(id)arg2;
- (BOOL)collectFileIDsToBeDeletedUnderURL:(id)arg1 sourceUUID:(id)arg2 backupStartDate:(id)arg3 error:(id *)arg4;

@end

