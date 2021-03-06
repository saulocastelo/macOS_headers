//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PMLNoiseStrategy.h"

@class NSString;

@interface PMLSeparatedDPNoiseStrategy : NSObject <PMLNoiseStrategy>
{
    const char *_pflIdentifier;
}

+ (id)getPFLIdentifier:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;
- (BOOL)scaleAndAddNoiseToDenseVector:(id)arg1 usingNorm:(BOOL)arg2 scaleFactor:(float *)arg3;
- (void)addNoiseToSparseVector:(id)arg1;
- (void)addNoiseToSparseMatrix:(id)arg1;
- (id)initWithPFLIdentifier:(const char *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

