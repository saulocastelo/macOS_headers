//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSSecureCoding-Protocol.h>

@class CMMotionAlarmManager, NSString;

@interface CMMotionAlarm : NSObject <NSSecureCoding>
{
    BOOL _repeats;
    unsigned int _duration;
    unsigned int _type;
    int _state;
    NSString *_name;
    unsigned long long _alarmId;
    NSString *_bundleId;
    CMMotionAlarmManager *_manager;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) CMMotionAlarmManager *manager; // @synthesize manager=_manager;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(nonatomic) unsigned long long alarmId; // @synthesize alarmId=_alarmId;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
@property(readonly, nonatomic) BOOL repeats; // @synthesize repeats=_repeats;
@property(readonly, nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(readonly, retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (void)copyPropertiesFromAlarm:(id)arg1;
- (BOOL)unregisterWithError:(id *)arg1;
- (BOOL)acknowledgeWithError:(id *)arg1;
- (BOOL)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 type:(unsigned int)arg2 duration:(unsigned int)arg3 repeats:(BOOL)arg4 alarmId:(unsigned long long)arg5 bundleId:(id)arg6 state:(int)arg7;
- (id)initWithName:(id)arg1 type:(unsigned int)arg2 duration:(unsigned int)arg3 repeats:(BOOL)arg4;

@end

