//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface _PLExpirableSet : NSObject
{
    NSMutableSet *_set;
    NSMutableDictionary *_recentTouches;
    double _secondsToExpire;
}

- (void).cxx_destruct;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (BOOL)containsObject:(id)arg1;
- (BOOL)_didExpireObject:(id)arg1;
- (void)_touch:(id)arg1;
- (id)initWithSecondsToExpire:(double)arg1;
- (void)dealloc;

@end

