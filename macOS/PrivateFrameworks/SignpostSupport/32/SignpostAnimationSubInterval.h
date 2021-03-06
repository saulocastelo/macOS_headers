//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SignpostSupport/SignpostSupportTimeInterval-Protocol.h>

@class NSString;

@interface SignpostAnimationSubInterval : NSObject <SignpostSupportTimeInterval>
{
    unsigned long long _startMachContinuousTime;
    unsigned long long _endMachContinuousTime;
    double _timebaseRatio;
}

@property(readonly, nonatomic) double timebaseRatio; // @synthesize timebaseRatio=_timebaseRatio;
@property(readonly, nonatomic) unsigned long long endMachContinuousTime; // @synthesize endMachContinuousTime=_endMachContinuousTime;
@property(readonly, nonatomic) unsigned long long startMachContinuousTime; // @synthesize startMachContinuousTime=_startMachContinuousTime;
- (double)durationMs;
- (double)endMs;
- (double)startMs;
- (unsigned long long)startNanoseconds;
- (unsigned long long)endNanoseconds;
- (unsigned long long)durationNanoseconds;
- (float)durationSeconds;
- (double)endSeconds;
- (double)startSeconds;
- (unsigned long long)durationMachContinuousTime;
- (id)initWithInterval:(id)arg1;
- (id)initWithStartMCT:(unsigned long long)arg1 endMCT:(unsigned long long)arg2 timebaseRatio:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

