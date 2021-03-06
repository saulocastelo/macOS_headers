//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DGOperationCoding.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"

@class DGBrushStroke, DGMutableBrushStroke, NSArray, NSString;

@interface RKRetouchBrushStroke : NSObject <DGOperationCoding, NSCopying, NSMutableCopying>
{
    DGMutableBrushStroke *m_brushStroke;
    struct CGPoint m_sourceOffset;
    int m_mode;
    BOOL m_repairEdges;
    BOOL m_edgeDetectionPerformed;
    NSArray *m_detectedEdges;
    BOOL m_closed;
    BOOL m_hasSource;
}

@property(readonly, nonatomic) DGBrushStroke *brushStroke; // @synthesize brushStroke=m_brushStroke;
@property(readonly, nonatomic) BOOL closed; // @synthesize closed=m_closed;
@property(readonly, nonatomic) NSArray *detectedEdges; // @synthesize detectedEdges=m_detectedEdges;
@property(readonly, nonatomic) BOOL edgeDetectionPerformed; // @synthesize edgeDetectionPerformed=m_edgeDetectionPerformed;
@property(readonly, nonatomic) BOOL repairEdges; // @synthesize repairEdges=m_repairEdges;
@property(readonly, nonatomic) struct CGPoint sourceOffset; // @synthesize sourceOffset=m_sourceOffset;
@property(readonly, nonatomic) BOOL hasSource; // @synthesize hasSource=m_hasSource;
@property(readonly, nonatomic) int mode; // @synthesize mode=m_mode;
- (void)_offsetPoints:(struct CGPoint)arg1;
- (void)_appendPoint:(CDStruct_cd524421)arg1;
- (void)setDetectedEdges:(id)arg1;
- (void)setEdgeDetectionPerformed:(BOOL)arg1;
- (void)setOpacity:(float)arg1;
- (void)setSourceOffset:(struct CGPoint)arg1;
- (void)setClosed:(BOOL)arg1;
- (void)setHasSource:(BOOL)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
- (unsigned long long)_detectedEdgeCount;
- (BOOL)isEqual:(id)arg1;
- (BOOL)strokeIsEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)ciImageOfScale:(double)arg1 tile:(BOOL)arg2;
- (id)_copyDataFromPointArray:(id)arg1;
- (void)rasterizeToMaskWithProcessor:(id)arg1 ROI:(struct PFIntRect_st)arg2 maskPtr:(char *)arg3 maskPtrRowBytes:(long long)arg4 close:(BOOL)arg5 startIndex:(long long)arg6 lastStampedIndex:(long long *)arg7;
- (void)rasterizeToMask:(struct PFIntRect_st)arg1 maskPtr:(char *)arg2 maskPtrRowBytes:(long long)arg3 close:(BOOL)arg4 startIndex:(long long)arg5 lastStampedIndex:(long long *)arg6;
- (CDStruct_cd524421)pointAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) struct PFIntRect_st extent;
- (void)setExtent:(struct PFIntRect_st)arg1;
@property(readonly, nonatomic) unsigned long long pointCount;
@property(readonly, nonatomic) float opacity;
@property(readonly, nonatomic) float softness;
@property(readonly, nonatomic) float radius;
- (id)initWithMode:(int)arg1 hasSource:(BOOL)arg2 sourceOffset:(struct CGPoint)arg3 repairEdges:(BOOL)arg4 radius:(float)arg5 softness:(float)arg6 opacity:(float)arg7;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

