//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, PIESlice;

@interface PIESector : NSObject
{
    PIESlice *_slice;
    NSMutableArray *_subsectors;
}

@property(readonly) NSMutableArray *subsectors; // @synthesize subsectors=_subsectors;
- (id)allSlicePhotos;
- (unsigned long long)totalHoleCount;
@property(readonly) unsigned long long sliceCount;
@property(readonly) NSArray *slices;
- (void)dealloc;
- (id)initWithSlice:(id)arg1;
- (id)init;

@end

