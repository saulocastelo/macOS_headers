//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "CALayerDelegate-Protocol.h"

@class IPXDraggableOverlayFaceView, NSString;

@interface IPXFaceFrameOverlayDraggableView : NSView <CALayerDelegate>
{
    BOOL _passMouseEventsThroughWhenNotDraggable;
    IPXDraggableOverlayFaceView *_faceFrameView;
    long long _lastHandledMouseEventNumber;
    struct CGPoint _mouseDownLocationInWindow;
}

@property(nonatomic) BOOL passMouseEventsThroughWhenNotDraggable; // @synthesize passMouseEventsThroughWhenNotDraggable=_passMouseEventsThroughWhenNotDraggable;
@property(nonatomic) long long lastHandledMouseEventNumber; // @synthesize lastHandledMouseEventNumber=_lastHandledMouseEventNumber;
@property(nonatomic) __weak IPXDraggableOverlayFaceView *faceFrameView; // @synthesize faceFrameView=_faceFrameView;
@property(nonatomic) struct CGPoint mouseDownLocationInWindow; // @synthesize mouseDownLocationInWindow=_mouseDownLocationInWindow;
- (void).cxx_destruct;
- (void)mouseDown:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_IPX_commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

