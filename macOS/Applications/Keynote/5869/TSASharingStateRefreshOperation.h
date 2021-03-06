//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSDate, NSError, NSObject, NSOperationQueue, TSADocumentInfo, TSKSharingState;
@protocol OS_dispatch_queue, TSULogContext;

@interface TSASharingStateRefreshOperation : NSOperation
{
    NSOperationQueue *_accessQueue;
    NSObject<OS_dispatch_queue> *_completionQueue;
    CDUnknownBlockType _completion;
    BOOL _isExecuting;
    BOOL _isFinished;
    NSDate *_startDate;
    BOOL _isUserInitiated;
    BOOL _canCoalesce;
    TSADocumentInfo *_documentInfo;
    unsigned long long _flags;
    TSKSharingState *_knownSharingState;
    id <TSULogContext> _logContext;
    TSKSharingState *_updatedSharingState;
    TSASharingStateRefreshOperation *_equivalentOperation;
    NSError *_error;
}

@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) TSASharingStateRefreshOperation *equivalentOperation; // @synthesize equivalentOperation=_equivalentOperation;
@property(copy, nonatomic) TSKSharingState *updatedSharingState; // @synthesize updatedSharingState=_updatedSharingState;
@property(readonly, nonatomic) id <TSULogContext> logContext; // @synthesize logContext=_logContext;
@property(readonly, nonatomic) TSKSharingState *knownSharingState; // @synthesize knownSharingState=_knownSharingState;
@property(readonly, nonatomic) BOOL canCoalesce; // @synthesize canCoalesce=_canCoalesce;
@property(readonly, nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property(nonatomic) BOOL isUserInitiated; // @synthesize isUserInitiated=_isUserInitiated;
@property(readonly, nonatomic) TSADocumentInfo *documentInfo; // @synthesize documentInfo=_documentInfo;
- (void).cxx_destruct;
- (id)description;
- (void)start;
- (void)setPossiblyEquivalentOperation:(id)arg1;
- (BOOL)isEquivalentTo:(id)arg1;
- (void)p_didFinishOperation;
- (void)p_didStartOperation;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isAsynchronous;
- (id)initWithDocumentInfo:(id)arg1 flags:(unsigned long long)arg2 isUserInitiated:(BOOL)arg3 canCoalesce:(BOOL)arg4 knownSharingState:(id)arg5 changedSharingState:(id)arg6 reason:(id)arg7 logContext:(id)arg8 queue:(id)arg9 completion:(CDUnknownBlockType)arg10;

@end

