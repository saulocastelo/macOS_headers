//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "PopUpMenuButtonCell.h"

@class NSAttributedString, NSDate, NSImage, NSShadow, NSString, NSTimer;

@interface ParticipantPillCell : PopUpMenuButtonCell
{
    struct CGRect _imageRect;
    struct CGRect _titleRect;
    struct CGRect _statusRect;
    struct CGRect _dropdownArrowRect;
    BOOL _showActivitySpinner;
    BOOL _useGVCFullBleed;
    float _soundLevel;
    NSShadow *_textShadow;
    NSImage *_statusImage;
    NSString *_statusMessage;
    NSDate *_activityStartDate;
    NSTimer *_activityUpdateTimer;
    double _arrowFontSize;
    struct CGSize _textSize;
    struct CGPoint _arrowOffset;
}

@property(nonatomic) BOOL useGVCFullBleed; // @synthesize useGVCFullBleed=_useGVCFullBleed;
@property(nonatomic) struct CGPoint arrowOffset; // @synthesize arrowOffset=_arrowOffset;
@property(nonatomic) double arrowFontSize; // @synthesize arrowFontSize=_arrowFontSize;
@property(retain, nonatomic) NSTimer *activityUpdateTimer; // @synthesize activityUpdateTimer=_activityUpdateTimer;
@property(copy, nonatomic) NSDate *activityStartDate; // @synthesize activityStartDate=_activityStartDate;
@property(nonatomic) struct CGSize textSize; // @synthesize textSize=_textSize;
@property(copy, nonatomic) NSString *statusMessage; // @synthesize statusMessage=_statusMessage;
@property(retain, nonatomic) NSImage *statusImage; // @synthesize statusImage=_statusImage;
@property(copy, nonatomic) NSShadow *textShadow; // @synthesize textShadow=_textShadow;
@property(nonatomic) BOOL showActivitySpinner; // @synthesize showActivitySpinner=_showActivitySpinner;
@property(nonatomic) float soundLevel; // @synthesize soundLevel=_soundLevel;
- (void).cxx_destruct;
- (void)drawBezelWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawSmallInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_drawImage:(id)arg1 inRect:(struct CGRect)arg2 cellFrame:(struct CGRect)arg3 controlView:(id)arg4;
@property(readonly, nonatomic) struct CGSize popupArrowSize;
@property(readonly, nonatomic) __weak NSAttributedString *popupArrowString;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (struct CGSize)cellSize;
- (struct CGSize)smallCellSize;
- (double)participantPillHeight;
- (void)calcDrawInfo:(struct CGRect)arg1;
- (void)calcSmallDrawInfo:(struct CGRect)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)imageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)proposedImageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)statusRectForBounds:(struct CGRect)arg1;
- (struct CGRect)proposedStatusRectForBounds:(struct CGRect)arg1;
- (struct CGRect)dropdownArrowRectForBounds:(struct CGRect)arg1;
- (struct CGRect)proposedDropdownArrowRectForBounds:(struct CGRect)arg1;
@property(readonly, nonatomic) double rightSpacing;
@property(readonly, nonatomic) double leftSpacing;
@property(readonly, nonatomic) double rightBorder;
@property(readonly, nonatomic) double leftBorder;
- (void)setTitle:(id)arg1;
- (void)setAttributedTitle:(id)arg1;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
@property(readonly, nonatomic) BOOL showStatus;
- (void)_updateActivityTimerForWindow:(id)arg1;
- (void)updateActivity:(id)arg1;
- (id)speakingTintColor;
- (id)textColor;
- (id)backgroundColor;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initTextCell:(id)arg1;
- (void)_commonInit;

@end

