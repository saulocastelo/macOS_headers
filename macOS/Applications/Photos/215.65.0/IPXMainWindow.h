//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

@class NSView;

@interface IPXMainWindow : NSWindow
{
    NSView *_defaultFirstResponder;
}

@property(retain, nonatomic) NSView *defaultFirstResponder; // @synthesize defaultFirstResponder=_defaultFirstResponder;
- (void).cxx_destruct;
- (BOOL)usesProMenuTreatmentForView:(id)arg1;
- (BOOL)showsFullScreenButton;
- (struct CGRect)startRectForSheet:(id)arg1;
- (BOOL)makeFirstResponder:(id)arg1;
- (struct CGRect)frameRectForContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2;
- (struct CGRect)contentRectForFrameRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2;
- (void)setContentView:(id)arg1;
- (BOOL)canBecomeMainWindow;
- (BOOL)canBecomeKeyWindow;
- (id)initWithContentRect:(struct CGRect)arg1;

@end

