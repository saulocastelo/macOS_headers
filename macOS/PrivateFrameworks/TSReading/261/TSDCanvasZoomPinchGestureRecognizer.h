//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIPinchGestureRecognizer.h>

@interface TSDCanvasZoomPinchGestureRecognizer : UIPinchGestureRecognizer
{
    BOOL mZoomTimedOut;
}

- (void)p_cancelAfterDelay;
- (void)p_stopCancellationTimer;
- (void)p_startCancellationTimer;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reset;

@end

