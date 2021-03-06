//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "StylesBase.h"

@class ButtonPdfImageStyles, CollapsibleStringPresenterStyles, FocusStyles, IXButtonStyles, ItemTableItemStyles, NSColor, NSImage, RunningStringPresenterStyles;

@interface CommonStyles : StylesBase
{
    NSColor *_backgroundColor;
    NSColor *_adminBackgroundColor;
    NSColor *_scrollBarFillColor;
    double _scrollBarHotAlpha;
    double _scrollBarMargin;
    double _scrollBarNormalAlpha;
    double _scrollBarRadius;
    double _scrollBarWidth;
    double _tableItemHeight;
    NSImage *_titlebarLogo;
    double _titlebarLogoOffsetY;
}

@property(nonatomic) double titlebarLogoOffsetY; // @synthesize titlebarLogoOffsetY=_titlebarLogoOffsetY;
@property(retain, nonatomic) NSImage *titlebarLogo; // @synthesize titlebarLogo=_titlebarLogo;
@property(nonatomic) double tableItemHeight; // @synthesize tableItemHeight=_tableItemHeight;
@property(nonatomic) double scrollBarWidth; // @synthesize scrollBarWidth=_scrollBarWidth;
@property(nonatomic) double scrollBarRadius; // @synthesize scrollBarRadius=_scrollBarRadius;
@property(nonatomic) double scrollBarNormalAlpha; // @synthesize scrollBarNormalAlpha=_scrollBarNormalAlpha;
@property(nonatomic) double scrollBarMargin; // @synthesize scrollBarMargin=_scrollBarMargin;
@property(nonatomic) double scrollBarHotAlpha; // @synthesize scrollBarHotAlpha=_scrollBarHotAlpha;
@property(retain, nonatomic) NSColor *scrollBarFillColor; // @synthesize scrollBarFillColor=_scrollBarFillColor;
@property(retain, nonatomic) NSColor *adminBackgroundColor; // @synthesize adminBackgroundColor=_adminBackgroundColor;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;

// Remaining properties
@property(copy, nonatomic) IXButtonStyles *buttonBlueRound; // @dynamic buttonBlueRound;
@property(copy, nonatomic) IXButtonStyles *buttonBlueSquare; // @dynamic buttonBlueSquare;
@property(copy, nonatomic) IXButtonStyles *buttonGrayRound; // @dynamic buttonGrayRound;
@property(copy, nonatomic) IXButtonStyles *buttonGraySquare; // @dynamic buttonGraySquare;
@property(copy, nonatomic) IXButtonStyles *buttonGreenRound; // @dynamic buttonGreenRound;
@property(copy, nonatomic) IXButtonStyles *buttonGreenSquare; // @dynamic buttonGreenSquare;
@property(copy, nonatomic) IXButtonStyles *buttonLilacRound; // @dynamic buttonLilacRound;
@property(copy, nonatomic) IXButtonStyles *buttonLilacSquare; // @dynamic buttonLilacSquare;
@property(copy, nonatomic) IXButtonStyles *buttonLink; // @dynamic buttonLink;
@property(copy, nonatomic) IXButtonStyles *buttonRedRound; // @dynamic buttonRedRound;
@property(copy, nonatomic) IXButtonStyles *buttonRedSquare; // @dynamic buttonRedSquare;
@property(copy, nonatomic) IXButtonStyles *buttonWhiteRound; // @dynamic buttonWhiteRound;
@property(copy, nonatomic) IXButtonStyles *buttonWhiteSquare; // @dynamic buttonWhiteSquare;
@property(copy, nonatomic) IXButtonStyles *buttonYellowRound; // @dynamic buttonYellowRound;
@property(copy, nonatomic) IXButtonStyles *buttonYellowSquare; // @dynamic buttonYellowSquare;
@property(copy, nonatomic) CollapsibleStringPresenterStyles *collapsibleText; // @dynamic collapsibleText;
@property(copy, nonatomic) FocusStyles *focus; // @dynamic focus;
@property(copy, nonatomic) ButtonPdfImageStyles *iconDropDownBlack; // @dynamic iconDropDownBlack;
@property(copy, nonatomic) ButtonPdfImageStyles *iconDropDownGray; // @dynamic iconDropDownGray;
@property(copy, nonatomic) ButtonPdfImageStyles *iconDropDownWhite; // @dynamic iconDropDownWhite;
@property(copy, nonatomic) RunningStringPresenterStyles *runningText; // @dynamic runningText;
@property(copy, nonatomic) ItemTableItemStyles *tableItem; // @dynamic tableItem;

@end

