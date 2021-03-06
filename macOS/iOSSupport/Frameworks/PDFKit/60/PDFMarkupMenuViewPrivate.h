//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, UIImageView, _UIBackdropView;
@protocol PDFMarkupMenuViewDelegate;

__attribute__((visibility("hidden")))
@interface PDFMarkupMenuViewPrivate : NSObject
{
    unsigned long long markupStyle;
    unsigned long long markupNoteStyle;
    id <PDFMarkupMenuViewDelegate> delegate;
    NSDictionary *menuControls;
    NSArray *activeControlKeys;
    double calloutArrowX;
    BOOL calloutArrowPointsUp;
    _UIBackdropView *backgroundView;
    _UIBackdropView *separatorBackgroundView;
    UIImageView *blurMaskView;
    UIImageView *tintMaskView;
    UIImageView *separatorMaskView;
}

- (void).cxx_destruct;

@end

