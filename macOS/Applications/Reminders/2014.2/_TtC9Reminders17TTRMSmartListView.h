//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSBox, NSImageView, NSLayoutConstraint, NSTextField, _TtC9Reminders26TTRSingleColorGradientView;

@interface _TtC9Reminders17TTRMSmartListView : NSView
{
    // Error parsing type: , name: tintColor
    // Error parsing type: , name: isHighlighted
    // Error parsing type: , name: title
    // Error parsing type: , name: count
    // Error parsing type: , name: solidBackgroundView
    // Error parsing type: , name: glyphBackgroundView
    // Error parsing type: , name: glyphImageView
    // Error parsing type: , name: countLabel
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: labelBelowGlyphConstraint
    // Error parsing type: , name: labelNextToCountConstraint
    // Error parsing type: , name: labelStickToBottom
    // Error parsing type: , name: glyphStickToBottom
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) __weak NSLayoutConstraint *glyphStickToBottom; // @synthesize glyphStickToBottom;
@property(nonatomic) __weak NSLayoutConstraint *labelStickToBottom; // @synthesize labelStickToBottom;
@property(nonatomic) __weak NSLayoutConstraint *labelNextToCountConstraint; // @synthesize labelNextToCountConstraint;
@property(nonatomic) __weak NSLayoutConstraint *labelBelowGlyphConstraint; // @synthesize labelBelowGlyphConstraint;
@property(nonatomic, retain) NSTextField *titleLabel; // @synthesize titleLabel;
@property(nonatomic, retain) NSTextField *countLabel; // @synthesize countLabel;
@property(nonatomic, retain) NSImageView *glyphImageView; // @synthesize glyphImageView;
@property(nonatomic, retain) NSBox *glyphBackgroundView; // @synthesize glyphBackgroundView;
@property(nonatomic, retain) _TtC9Reminders26TTRSingleColorGradientView *solidBackgroundView; // @synthesize solidBackgroundView;
- (void)awakeFromNib;
- (void)updateConstraints;

@end

