//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSKeyValueDependencyContext;

__attribute__((visibility("hidden")))
@interface NSKeyValueDependency : NSObject
{
    NSKeyValueDependencyContext *_context;
    unsigned long long _invalidationCount;
}

@property unsigned long long invalidationCount; // @synthesize invalidationCount=_invalidationCount;
@property(retain) NSKeyValueDependencyContext *context; // @synthesize context=_context;
- (void)invalidate;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (id)initWithContext:(id)arg1 invalidationCount:(unsigned long long)arg2;
- (id)initWithContext:(id)arg1;
@property(readonly, getter=isValid) BOOL valid;

@end

