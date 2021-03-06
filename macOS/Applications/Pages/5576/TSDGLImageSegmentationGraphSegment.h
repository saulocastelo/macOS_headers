//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TSDGLImageSegmentationGraphSegment : NSObject
{
    struct list<unsigned long, std::__1::allocator<unsigned long>> *_pixels;
    unsigned int _segmentColor;
    struct __CFSet *_edgeColorsSet;
    NSMutableArray *_edges;
    CDStruct_83984b6f _imageColor;
}

@property(readonly, nonatomic) NSMutableArray *edges; // @synthesize edges=_edges;
@property(readonly, nonatomic) struct __CFSet *edgeColorsSet; // @synthesize edgeColorsSet=_edgeColorsSet;
@property(nonatomic) CDStruct_818bb265 imageColor; // @synthesize imageColor=_imageColor;
@property(nonatomic) unsigned int segmentColor; // @synthesize segmentColor=_segmentColor;
- (id)description;
- (void)addEdgeColor:(unsigned long long)arg1;
- (void)addPixelIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

@end

