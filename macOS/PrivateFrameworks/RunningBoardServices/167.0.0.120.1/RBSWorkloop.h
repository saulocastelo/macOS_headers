//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_workloop;

@interface RBSWorkloop : NSObject
{
    NSObject<OS_dispatch_workloop> *_backgroundWorkloop;
}

+ (void)performBackgroundWorkWithServiceClass:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
+ (void)performBackgroundWork:(CDUnknownBlockType)arg1;
+ (id)createBackgroundQueue:(id)arg1;
+ (id)sharedBackgroundWorkloop;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_init;

@end

