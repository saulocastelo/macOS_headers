//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextField.h"

#import "TRUnderlineFocusView.h"

@class NSColor, NSString, NSTrackingArea;

__attribute__((visibility("hidden")))
@interface TRUnderlineTextField : NSTextField <TRUnderlineFocusView>
{
    BOOL _drawDefaultUnderline;
    BOOL _shouldAutocomplete;
    BOOL _rolloverHighlighted;
    NSColor *_underlineRolloverColor;
    NSColor *_underlineColor;
    NSTextField *_accessibilityLabelField;
    NSTrackingArea *_rolloverTrackingArea;
}

+ (void)initialize;
@property NSTrackingArea *rolloverTrackingArea; // @synthesize rolloverTrackingArea=_rolloverTrackingArea;
@property(nonatomic) BOOL rolloverHighlighted; // @synthesize rolloverHighlighted=_rolloverHighlighted;
@property(retain) NSTextField *accessibilityLabelField; // @synthesize accessibilityLabelField=_accessibilityLabelField;
@property BOOL shouldAutocomplete; // @synthesize shouldAutocomplete=_shouldAutocomplete;
@property BOOL drawDefaultUnderline; // @synthesize drawDefaultUnderline=_drawDefaultUnderline;
@property(retain) NSColor *underlineColor; // @synthesize underlineColor=_underlineColor;
@property(retain) NSColor *underlineRolloverColor; // @synthesize underlineRolloverColor=_underlineRolloverColor;
- (void)updateTrackingAreas;
- (id)textView:(id)arg1 completions:(id)arg2 forPartialWordRange:(struct _NSRange)arg3 indexOfSelectedItem:(long long *)arg4;
- (void)pc_setupFieldEditorAttributes:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

