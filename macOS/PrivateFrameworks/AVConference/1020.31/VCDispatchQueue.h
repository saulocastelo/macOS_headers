//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCDispatchQueue : NSObject
{
    struct _opaque_pthread_mutex_t _lock;
    NSMutableArray *_rootQueues;
}

+ (id)defaultManager;
- (id)getCustomRootQueueWithPriority:(int)arg1 isFixedPriority:(BOOL)arg2;
- (void)dealloc;
- (id)init;

@end

