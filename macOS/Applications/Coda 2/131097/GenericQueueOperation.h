//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PCFSOperation.h"

@class NSConditionLock;

__attribute__((visibility("hidden")))
@interface GenericQueueOperation : PCFSOperation
{
    NSConditionLock *_waitLock;
    long long _applicationOperationType;
}

@property(nonatomic) long long applicationOperationType; // @synthesize applicationOperationType=_applicationOperationType;
@property(retain, nonatomic) NSConditionLock *waitLock; // @synthesize waitLock=_waitLock;
- (void)finish;
- (long long)operationType;
- (void)main;
- (void)dealloc;
- (id)initWithCaption:(id)arg1 type:(long long)arg2;
- (id)init;

@end

