//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FPath, NSNumber, NSString;

@interface FTupleTransaction : NSObject
{
    BOOL _applyLocally;
    int _retryCount;
    FPath *_path;
    CDUnknownBlockType _update;
    CDUnknownBlockType _onComplete;
    long long _status;
    NSNumber *_order;
    CDUnknownBlockType _unwatcher;
    NSString *_abortStatus;
    NSString *_abortReason;
    NSNumber *_currentWriteId;
    id <FNode> _currentInputSnapshot;
    id <FNode> _currentOutputSnapshotRaw;
    id <FNode> _currentOutputSnapshotResolved;
}

@property(retain, nonatomic) id <FNode> currentOutputSnapshotResolved; // @synthesize currentOutputSnapshotResolved=_currentOutputSnapshotResolved;
@property(retain, nonatomic) id <FNode> currentOutputSnapshotRaw; // @synthesize currentOutputSnapshotRaw=_currentOutputSnapshotRaw;
@property(retain, nonatomic) id <FNode> currentInputSnapshot; // @synthesize currentInputSnapshot=_currentInputSnapshot;
@property(retain, nonatomic) NSNumber *currentWriteId; // @synthesize currentWriteId=_currentWriteId;
@property(retain, nonatomic) NSString *abortReason; // @synthesize abortReason=_abortReason;
@property(retain, nonatomic) NSString *abortStatus; // @synthesize abortStatus=_abortStatus;
@property(copy, nonatomic) CDUnknownBlockType unwatcher; // @synthesize unwatcher=_unwatcher;
@property(nonatomic) int retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) BOOL applyLocally; // @synthesize applyLocally=_applyLocally;
@property(retain, nonatomic) NSNumber *order; // @synthesize order=_order;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) CDUnknownBlockType onComplete; // @synthesize onComplete=_onComplete;
@property(copy, nonatomic) CDUnknownBlockType update; // @synthesize update=_update;
@property(retain, nonatomic) FPath *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)abortError;
- (void)setAbortStatus:(id)arg1 reason:(id)arg2;

@end

