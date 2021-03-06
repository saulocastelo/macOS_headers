//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ABTask.h"

@class NSObject;
@protocol OS_dispatch_source;

@interface ABPeriodicTask : ABTask
{
    CDUnknownBlockType _task;
    NSObject<OS_dispatch_source> *_source;
    double _interval;
}

+ (id)targetQueue;
+ (id)taskWithInterval:(double)arg1 block:(CDUnknownBlockType)arg2;
- (BOOL)cancel;
- (id)run:(id *)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 interval:(double)arg2 task:(CDUnknownBlockType)arg3;

@end

