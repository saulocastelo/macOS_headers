//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, NSString;

@interface _TtC4Dock20ScreenTimeController : NSObject
{
    // Error parsing type: , name: applications
    // Error parsing type: , name: isEnabled
    // Error parsing type: , name: policyChangedCompletion
    // Error parsing type: , name: stateChangedCompletion
    // Error parsing type: , name: policyMonitor
    // Error parsing type: , name: policiesByApplication
    // Error parsing type: , name: assignmentTimer
}

+ (id)queue;
+ (struct CGImage *)restrictedImageFor:(float)arg1;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *debugDescription;
- (BOOL)isApplicationRestrictedWithBundleID:(id)arg1;
- (id)initWithPolicyChangedCompletion:(CDUnknownBlockType)arg1 stateChangedCompletion:(CDUnknownBlockType)arg2;
@property(nonatomic) BOOL isEnabled; // @synthesize isEnabled;
@property(nonatomic, readonly) NSSet *restrictedApplications;
@property(nonatomic, copy) NSArray *applications;

@end

