//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MTLDebugInstrumentationData, NSString;

__attribute__((visibility("hidden")))
@interface MTLDebugSubProgram : NSObject
{
    MTLDebugInstrumentationData *_data;
    struct DebugSubProgram *_debugSubProgram;
}

- (oneway void)releaseInternal;
- (oneway void)release;
- (id)retain;
@property(readonly, nonatomic) unsigned int line;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *filename;

@end

