//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MXMProbe, MXMSampleData;

@protocol MXMProbeDelegate <NSObject>

@optional
- (void)probeDidStop:(MXMProbe *)arg1 reason:(unsigned long long)arg2;
- (void)probeDidUpdate:(MXMProbe *)arg1 data:(MXMSampleData *)arg2 stop:(char *)arg3;
- (void)probeDidStartUpdating:(MXMProbe *)arg1;
@end

