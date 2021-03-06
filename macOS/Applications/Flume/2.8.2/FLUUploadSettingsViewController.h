//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSTextViewDelegate-Protocol.h"

@class FLUHoverButton, FLULabel, FLUScrollView, FLUTextField, FLUView, NSSet, NSString;

@interface FLUUploadSettingsViewController : NSViewController <NSTextViewDelegate>
{
    NSSet *_sponsors;
    FLUScrollView *_scrollView;
    FLUTextField *_commentsLabel;
    FLUView *_commentsBorderView;
    FLUTextField *_disableCommentsLabel;
    FLUHoverButton *_disableCommentsButton;
    FLUTextField *_disableCommentsExplanationLabel;
    FLUView *_favoritesView;
    FLUTextField *_favoritesLabel;
    FLUView *_favoritesBorderView;
    FLUHoverButton *_favoritesEditButton;
    FLUView *_brandedContentView;
    FLUTextField *_brandedContentLabel;
    FLUView *_brandedContentBorderView;
    FLUTextField *_brandedContentTagPartnerLabel;
    FLUHoverButton *_brandedContentTagPartnerButton;
    FLULabel *_brandedContentTagPartnerExplanationLabel;
}

@property(nonatomic) FLULabel *brandedContentTagPartnerExplanationLabel; // @synthesize brandedContentTagPartnerExplanationLabel=_brandedContentTagPartnerExplanationLabel;
@property(nonatomic) __weak FLUHoverButton *brandedContentTagPartnerButton; // @synthesize brandedContentTagPartnerButton=_brandedContentTagPartnerButton;
@property(nonatomic) __weak FLUTextField *brandedContentTagPartnerLabel; // @synthesize brandedContentTagPartnerLabel=_brandedContentTagPartnerLabel;
@property(nonatomic) __weak FLUView *brandedContentBorderView; // @synthesize brandedContentBorderView=_brandedContentBorderView;
@property(nonatomic) __weak FLUTextField *brandedContentLabel; // @synthesize brandedContentLabel=_brandedContentLabel;
@property(nonatomic) __weak FLUView *brandedContentView; // @synthesize brandedContentView=_brandedContentView;
@property(nonatomic) __weak FLUHoverButton *favoritesEditButton; // @synthesize favoritesEditButton=_favoritesEditButton;
@property(nonatomic) __weak FLUView *favoritesBorderView; // @synthesize favoritesBorderView=_favoritesBorderView;
@property(nonatomic) __weak FLUTextField *favoritesLabel; // @synthesize favoritesLabel=_favoritesLabel;
@property(nonatomic) __weak FLUView *favoritesView; // @synthesize favoritesView=_favoritesView;
@property(nonatomic) __weak FLUTextField *disableCommentsExplanationLabel; // @synthesize disableCommentsExplanationLabel=_disableCommentsExplanationLabel;
@property(nonatomic) __weak FLUHoverButton *disableCommentsButton; // @synthesize disableCommentsButton=_disableCommentsButton;
@property(nonatomic) __weak FLUTextField *disableCommentsLabel; // @synthesize disableCommentsLabel=_disableCommentsLabel;
@property(nonatomic) __weak FLUView *commentsBorderView; // @synthesize commentsBorderView=_commentsBorderView;
@property(nonatomic) __weak FLUTextField *commentsLabel; // @synthesize commentsLabel=_commentsLabel;
@property(nonatomic) __weak FLUScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSSet *sponsors; // @synthesize sponsors=_sponsors;
- (void).cxx_destruct;
- (void)setDisableComments:(BOOL)arg1;
- (BOOL)disableComments;
- (id)explanationLinkAttributes;
- (id)explanationAttributes;
- (id)buttonAttributes;
- (void)refreshView;
- (void)didPressBrandedContentTagPartnerButton:(id)arg1;
- (void)didPressFavoritesEditButton:(id)arg1;
- (void)didPressDisableCommentsButton:(id)arg1;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)didChangeDesignModeOption:(id)arg1;
- (void)dealloc;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)setupAccessibility;
- (void)localizeUserInterface;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

