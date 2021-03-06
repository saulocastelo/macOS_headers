//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HMSettingGroup;
@protocol HMSettingsDelegate, HMSettingsOwner;

@interface HMSettings : NSObject
{
    id <HMSettingsOwner> _owner;
}

@property(readonly) __weak id <HMSettingsOwner> owner; // @synthesize owner=_owner;
- (void).cxx_destruct;
@property __weak id <HMSettingsDelegate> delegate;
@property(readonly, getter=isControllable) BOOL controllable;
@property(readonly) HMSettingGroup *rootGroup;
- (id)initWithSettingsOwner:(id)arg1;

@end

