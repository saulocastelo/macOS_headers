//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface PFBackgroundServiceManagerCategory : NSObject
{
    unsigned long long _runningContexts;
    unsigned long long _totalContexts;
    unsigned long long _concurrency;
    int _controlState;
    NSMutableArray *_contexts;
    id _uuid;
    NSString *_name;
}

+ (id)categoryWithName:(id)arg1;
@property(retain) NSString *name; // @synthesize name=_name;
@property(readonly) id uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (void)runNextWorkContext;
- (void)removeWorkContext:(id)arg1;
- (void)addWorkContext:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)description;

@end

