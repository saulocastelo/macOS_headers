//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface _NSEventObserver : NSObject
{
    unsigned long long _mask;
    id _block;
}

- (void)invalidate;
- (void)dealloc;
- (id)initMatchingEvents:(unsigned long long)arg1 handler:(id)arg2;

@end

