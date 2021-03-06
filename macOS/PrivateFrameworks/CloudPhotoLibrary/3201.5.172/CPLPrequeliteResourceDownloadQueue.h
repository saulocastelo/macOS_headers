//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLPrequeliteStorage.h>

#import <CloudPhotoLibrary/CPLEngineResourceDownloadQueueImplementation-Protocol.h>

@class CPLPrequeliteVariable, NSString;

@interface CPLPrequeliteResourceDownloadQueue : CPLPrequeliteStorage <CPLEngineResourceDownloadQueueImplementation>
{
    CPLPrequeliteVariable *_nextTaskIdentifier;
    CPLPrequeliteVariable *_nextPosition;
}

- (void).cxx_destruct;
- (id)status;
- (id)recordsDesignation;
- (BOOL)hasActiveOrQueuedBackgroundDownloadOperations;
- (unsigned long long)countOfQueuedDownloadTasks;
- (unsigned long long)_countOfRecordsWithStatus:(int)arg1;
- (id)enumeratorForDownloadedResources;
- (BOOL)removeAllBackgroundDownloadTasksForItemWithIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)resetWithError:(id *)arg1;
- (BOOL)resetDequeuedBackgroundDownloadTasksWithError:(id *)arg1;
- (id)dequeueNextBackgroundDownloadTasksForResourceType:(unsigned long long)arg1 maximumSize:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)removeBackgroundDownloadTaskForResource:(id)arg1 taskIdentifier:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)markBackgroundDownloadTaskForResourceAsSuceeded:(id)arg1 taskIdentifier:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)reenqueueBackgroundDownloadTaskForResource:(id)arg1 taskIdentifier:(unsigned long long)arg2 bumpRetryCount:(BOOL)arg3 didDiscard:(char *)arg4 error:(id *)arg5;
- (BOOL)enqueueBackgroundDownloadTaskForResource:(id)arg1 downloading:(BOOL)arg2 error:(id *)arg3;
- (id)_enqueuedResourceForResource:(id)arg1;
- (BOOL)_deleteEnqueuedResource:(id)arg1 error:(id *)arg2;
- (BOOL)_getNextPosition:(unsigned long long *)arg1 andBumpWithError:(id *)arg2;
- (unsigned long long)newTaskIdentifier;
- (BOOL)openWithError:(id *)arg1;
- (BOOL)upgradeStorageToVersion:(long long)arg1;
- (BOOL)initializeStorage;
- (id)initWithAbstractObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

