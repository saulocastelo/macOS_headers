//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOAlmanacRiseTransitSet, NSDate;

@interface GEOAlmanac : NSObject
{
    GEOAlmanacRiseTransitSet *_previousRiseTransitSet;
    GEOAlmanacRiseTransitSet *_currentRiseTransitSet;
    GEOAlmanacRiseTransitSet *_nextRiseTransitSet;
}

- (void).cxx_destruct;
- (BOOL)isDayLightForDate:(id)arg1;
- (BOOL)isDayLightForTime:(double)arg1;
@property(readonly, nonatomic) BOOL isDayLight;
- (id)sortedTimesForDate:(id)arg1;
@property(readonly, nonatomic) NSDate *nextSunset;
@property(readonly, nonatomic) NSDate *nextTransit;
@property(readonly, nonatomic) NSDate *nextSunrise;
@property(readonly, nonatomic) NSDate *sunset;
@property(readonly, nonatomic) NSDate *transit;
@property(readonly, nonatomic) NSDate *sunrise;
@property(readonly, nonatomic) NSDate *previousSunset;
@property(readonly, nonatomic) NSDate *previousTransit;
@property(readonly, nonatomic) NSDate *previousSunrise;
- (void)calculateGeocentricDirectionForSunX:(double *)arg1 Y:(double *)arg2 Z:(double *)arg3 date:(id)arg4;
- (void)calculateGeocentricDirectionForSunX:(double *)arg1 Y:(double *)arg2 Z:(double *)arg3;
- (void)calculateAstronomicalTimeForLocation:(CDStruct_c3b9c2ee)arg1 date:(id)arg2 altitudeInDegrees:(double)arg3;
- (id)_newRiseTransitSetForLocation:(CDStruct_c3b9c2ee)arg1 julianDay:(double)arg2 altitude:(double)arg3;
- (void)calculateAstronomicalTimeForLocation:(CDStruct_c3b9c2ee)arg1 time:(double)arg2 altitudeInDegrees:(double)arg3;
- (void)calculateAstronomicalTimeForLocation:(CDStruct_c3b9c2ee)arg1 time:(double)arg2;
- (void)calculateAstronomicalTimeForLocation:(CDStruct_c3b9c2ee)arg1 altitudeInDegrees:(double)arg2;
- (void)calculateAstronomicalTimeForLocation:(CDStruct_c3b9c2ee)arg1;

@end

