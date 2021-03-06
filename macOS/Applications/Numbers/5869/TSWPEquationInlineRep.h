//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDMediaRep.h"

#import "CALayerDelegate-Protocol.h"
#import "TSDMagicMoveMatching-Protocol.h"
#import "TSKChangeSourceObserver-Protocol.h"

@class CALayer, NSString, TSWPEquationInfo, TSWPEquationLayout;

@interface TSWPEquationInlineRep : TSDMediaRep <CALayerDelegate, TSDMagicMoveMatching, TSKChangeSourceObserver>
{
    BOOL _showEquationHighlight;
    BOOL _layerContentsAreFlipped;
    CALayer *_equationLayer;
}

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 mixingTypeContext:(id)arg3;
@property(retain, nonatomic) CALayer *equationLayer; // @synthesize equationLayer=_equationLayer;
@property(nonatomic) BOOL layerContentsAreFlipped; // @synthesize layerContentsAreFlipped=_layerContentsAreFlipped;
@property(nonatomic) BOOL showEquationHighlight; // @synthesize showEquationHighlight=_showEquationHighlight;
- (void).cxx_destruct;
- (void)processChanges:(id)arg1 forChangeSource:(id)arg2;
- (void)processChangedProperty:(int)arg1;
- (void)setupForDrawingInLayer:(id)arg1 context:(struct CGContext *)arg2;
- (void)dynamicallyRotatingWithTracker:(id)arg1;
- (id)resizedGeometryForTransform:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)transformForHighlightLayer;
- (struct CGRect)boundsForHighlightLayer;
- (double)selectionHighlightWidth;
- (id)overlayLayers;
- (BOOL)handleDoubleTapAtPoint:(struct CGPoint)arg1;
- (id)repForSelecting;
- (BOOL)containsPoint:(struct CGPoint)arg1 withPrecision:(BOOL)arg2;
- (void)unhighlightImage;
- (void)highlightImage;
- (unsigned long long)enabledKnobMask;
- (id)newCommandToApplyGeometry:(id)arg1 toInfo:(id)arg2;
- (BOOL)shouldShowReflection;
- (BOOL)shouldShowShadow;
- (struct CGRect)visibleBoundsForTilingLayer:(id)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)drawInLayerContext:(struct CGContext *)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setNeedsDisplay;
- (void)didUpdateLayer:(id)arg1;
- (BOOL)directlyManagesLayerContent;
- (void)p_drawInContext:(struct CGContext *)arg1 withContent:(BOOL)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(double)arg4 withMask:(BOOL)arg5 forLayer:(BOOL)arg6 forShadow:(BOOL)arg7 forHitTest:(BOOL)arg8;
- (BOOL)p_shouldFlipShadowsInContext:(struct CGContext *)arg1 forLayer:(BOOL)arg2;
- (BOOL)canDrawInParallel;
- (id)imageOfStroke:(struct CGRect *)arg1;
- (void)drawInContextWithoutEffects:(struct CGContext *)arg1 withContent:(BOOL)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(BOOL)arg4 forAlphaOnly:(BOOL)arg5 drawChildren:(BOOL)arg6 keepingChildrenPassingTest:(CDUnknownBlockType)arg7;
- (struct CGRect)clipRect;
- (BOOL)canPasteDataFromPhysicalKeyboard:(id)arg1;
- (BOOL)shouldAllowReplacementFromPaste;
- (struct CGRect)targetRectForEditMenu;
- (void)willBeRemoved;
- (BOOL)isPlaceholder;
@property(readonly, nonatomic) TSWPEquationLayout *equationLayout;
@property(readonly, nonatomic) TSWPEquationInfo *equationInfo;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

