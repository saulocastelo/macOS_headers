//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

#import "CALayerDelegate.h"

@class CAShapeLayer, NSString;

@interface FreeRecordingTempoEventLayer : CALayer <CALayerDelegate>
{
    CALayer *_upperDot;
    CALayer *_lowerDot;
    CALayer *_connectionLine;
    CAShapeLayer *_lineToPreviousLayer;
    int tempo;
    int _beat;
    struct TAbsPureClock clock;
    FreeRecordingTempoEventLayer *previousLayer;
}

+ (void)setLastAddedLineTime;
@property(nonatomic) int beat; // @synthesize beat=_beat;
@property(nonatomic) FreeRecordingTempoEventLayer *previousLayer; // @synthesize previousLayer;
@property(nonatomic) struct TAbsPureClock clock; // @synthesize clock;
@property(nonatomic) int tempo; // @synthesize tempo;
- (id).cxx_construct;
- (BOOL)checkDrawLineToPreviousDot;
- (BOOL)hasLineToPreviousDot;
- (double)alpha;
- (void)updateGeometryAnimated:(BOOL)arg1;
- (BOOL)allowAddingLine;
- (struct CGPath *)quartzPathFromPath:(id)arg1;
- (BOOL)hasAnimations;
- (void)jiggle;
- (void)blink;
- (void)highlight;
- (void)jiggleLayer:(id)arg1 toY:(double)arg2 withBaseY:(double)arg3 HeightDiff:(int)arg4;
- (void)resizeLayer:(id)arg1 toY:(double)arg2 height:(double)arg3;
- (struct CGRect)connectionLineRect;
- (BOOL)tempoIsKnown;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

