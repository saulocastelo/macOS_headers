//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreBrightness/CBModule.h>

#import "CBHIDServiceProtocol.h"

@class CBColorSample, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CBColorFilter : CBModule <CBHIDServiceProtocol>
{
    NSMutableArray *_services;
    NSMutableArray *_validServices;
    unsigned long long _sensorPolicy;
    unsigned long long _mode;
    CBColorSample *_sample;
}

+ (CDStruct_6f955ef8)calculateTristimulusForChromaticity:(CDStruct_34734122)arg1 andLux:(double)arg2;
+ (double)calculateCCTForTristimulus:(CDStruct_6f955ef8)arg1;
+ (double)calculateCCTForChromaticity:(CDStruct_34734122)arg1;
@property(readonly) CBColorSample *sample; // @synthesize sample=_sample;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) unsigned long long sensorPolicy; // @synthesize sensorPolicy=_sensorPolicy;
- (BOOL)hasExtFrontSensor;
- (BOOL)hasExtRearSensor;
- (BOOL)forceSampleUpdate;
- (void)updateValidServices;
- (BOOL)ALSServiceConformsToPolicy:(id)arg1;
- (void)sendNotificationForKey:(id)arg1 withValue:(id)arg2;
- (void)unregisterNotificationBlock;
- (void)registerNotificationBlock:(CDUnknownBlockType)arg1;
- (void)reportSampleUpdate;
- (void)updateSample;
- (id)newColorSampleConditionWeighted;
- (id)newColorSampleWinnerTakesAll;
- (id)newColorSampleLogWeighted;
- (id)newColorSampleLogWeightedForSamples:(id)arg1;
- (id)newColorSampleLinearWeightedForSamples:(id)arg1;
- (id)newColorSampleLinearWeightedForServices:(id)arg1;
- (unsigned long long)evaluatedFilterMode;
- (_Bool)removeHIDServiceClient:(struct __IOHIDServiceClient *)arg1;
- (_Bool)handleHIDEvent:(struct __IOHIDEvent *)arg1 from:(struct __IOHIDServiceClient *)arg2;
- (_Bool)addHIDServiceClient:(struct __IOHIDServiceClient *)arg1;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

