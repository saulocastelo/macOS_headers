//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FLUView.h"

#import "NSTextFieldDelegate-Protocol.h"

@class FLUBlurView, FLUHoverButton, FLUImageView, FLULabel, FLUTabbedButton, FLUTextField, NSString, NSTimer;
@protocol FLUMediaTableFavoritesHeaderViewDelegate;

@interface FLUMediaTableFavoritesHeaderView : FLUView <NSTextFieldDelegate>
{
    id <FLUMediaTableFavoritesHeaderViewDelegate> _delegate;
    FLUBlurView *_blurView;
    FLULabel *_label;
    FLULabel *_explanationLabel;
    FLUTabbedButton *_listButton;
    FLUTabbedButton *_suggestionsButton;
    FLUTextField *_searchTextField;
    FLUImageView *_searchImageView;
    FLUHoverButton *_clearButton;
    FLUView *_borderView;
    NSTimer *_searchTimer;
}

+ (double)viewHeight;
@property(retain, nonatomic) NSTimer *searchTimer; // @synthesize searchTimer=_searchTimer;
@property(retain, nonatomic) FLUView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) FLUHoverButton *clearButton; // @synthesize clearButton=_clearButton;
@property(retain, nonatomic) FLUImageView *searchImageView; // @synthesize searchImageView=_searchImageView;
@property(retain, nonatomic) FLUTextField *searchTextField; // @synthesize searchTextField=_searchTextField;
@property(retain, nonatomic) FLUTabbedButton *suggestionsButton; // @synthesize suggestionsButton=_suggestionsButton;
@property(retain, nonatomic) FLUTabbedButton *listButton; // @synthesize listButton=_listButton;
@property(retain, nonatomic) FLULabel *explanationLabel; // @synthesize explanationLabel=_explanationLabel;
@property(retain, nonatomic) FLULabel *label; // @synthesize label=_label;
@property(retain, nonatomic) FLUBlurView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) __weak id <FLUMediaTableFavoritesHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)focusSearchField;
- (BOOL)clearSearchField;
- (id)searchTerm;
- (void)selectTabAtIndex:(unsigned long long)arg1;
- (void)selectPreviousTab;
- (void)selectNextTab;
- (id)explanationAttributes;
- (id)labelAttributes;
- (void)performSearch;
- (void)refreshView;
- (void)didPressClearButton:(id)arg1;
- (void)didPressSuggestionsButton:(id)arg1;
- (void)didPressListButton:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)controlTextDidChange:(id)arg1;
- (void)didChangeDesignModeOption:(id)arg1;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)updateFrames;
- (void)setFrame:(struct CGRect)arg1;
- (void)setupAccessibility;
- (void)dealloc;
- (void)setupWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

