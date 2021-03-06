//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CALDate.h>

@interface CALDateTime : CALDate
{
}

+ (id)dateWithYear:(long long)arg1 month:(unsigned long long)arg2 day:(unsigned long long)arg3 hour:(unsigned long long)arg4 minute:(unsigned long long)arg5 second:(unsigned long long)arg6 timeZone:(id)arg7;
+ (id)date;
+ (id)timeOnlyWithHour:(unsigned long long)arg1 minute:(unsigned long long)arg2 second:(unsigned long long)arg3 timeZone:(id)arg4;
- (BOOL)isEqualAsDateOnly:(id)arg1;
- (void)setYear:(long long)arg1 month:(unsigned long long)arg2 day:(unsigned long long)arg3 hour:(unsigned long long)arg4 minute:(unsigned long long)arg5 second:(unsigned long long)arg6 timeZone:(id)arg7;
- (void)takeValueFrom:(id)arg1;
- (void)addYears:(long long)arg1 months:(long long)arg2 days:(long long)arg3 hours:(long long)arg4 minutes:(long long)arg5 seconds:(long long)arg6;
- (void)addSecondsInGMT:(long long)arg1;
- (void)setTimeZone:(id)arg1 keepingLocalDate:(BOOL)arg2;
- (void)setTimeZone:(id)arg1;
- (void)roundToDay;
- (void)years:(long long *)arg1 months:(long long *)arg2 days:(long long *)arg3 hours:(long long *)arg4 minutes:(long long *)arg5 seconds:(long long *)arg6 sinceDate:(id)arg7;
- (id)description;
- (BOOL)meetComparisonCondition:(unsigned char)arg1 withDate:(id)arg2;
- (long long)compare:(id)arg1;
- (long long)offsetFromGMTForTimeZone:(id)arg1;
- (long long)offsetFromGMT;
- (double)timeIntervalSinceNow;
- (id)initAsTimeOnlyWithHour:(unsigned long long)arg1 minute:(unsigned long long)arg2 second:(unsigned long long)arg3 timeZone:(id)arg4;
- (id)initWithYear:(long long)arg1 month:(unsigned long long)arg2 day:(unsigned long long)arg3 hour:(unsigned long long)arg4 minute:(unsigned long long)arg5 second:(unsigned long long)arg6 timeZone:(id)arg7;
- (id)initWithTimeInterval:(double)arg1 sinceDate:(id)arg2;
- (unsigned long long)hash;
- (id)initWithvCalDateString:(const char *)arg1 withGlobalTZ:(id)arg2 withCheck:(BOOL)arg3;
- (id)initWithvCalDateString:(const char *)arg1 withGlobalTZ:(id)arg2;
- (id)representationID;
- (id)NSCalendarDateForISync;

@end

