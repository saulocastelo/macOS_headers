//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ASDObject;

@protocol ASDDeviceConfigurationChangeDelegate <NSObject>
- (BOOL)requestConfigurationChangeForDevice:(ASDObject *)arg1 withBlock:(void (^)(void))arg2;
@end

