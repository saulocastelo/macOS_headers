//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class FadingOverlay;

@interface FadingOverlayView : NSView
{
    FadingOverlay *_fadingOverlay;
    float _fractionFadedIn;
}

+ (double)maximumOverlayAlpha;
- (void)targetWindowWillStartLiveResize;
- (void)targetWindowDidEndLiveResize;
- (void)setHolesNeedUpdateInRect:(struct CGRect)arg1;
- (void)setFractionFadedIn:(float)arg1;
- (id)fadingOverlay;
- (id)initWithOverlay:(id)arg1;
- (float)fractionFadedIn;
- (void)drawRect:(struct CGRect)arg1;
- (void)detachFromOverlay;
- (void)dealloc;
- (id)_holes;

@end

