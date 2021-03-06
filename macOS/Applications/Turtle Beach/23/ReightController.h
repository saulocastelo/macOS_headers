//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ParentProductController.h"

@class AppContentPanel, CurrentContentTableAdapter, HelpController, NSScrollView, NSTableView, NSView, ParentTableView, TBTabButton;

@interface ReightController : ParentProductController
{
    NSView *leftColumnContainer;
    AppContentPanel *rightColumnContainer;
    NSTableView *currentContentList;
    NSScrollView *leftColumnScrollView;
    NSView *rightView;
    TBTabButton *helpButton;
    TBTabButton *customizeButton;
    NSView *helpView;
    CurrentContentTableAdapter *currentAdapter;
    HelpController *helpController;
    ParentTableView *parentTable;
}

- (void).cxx_destruct;
- (void)helpButton:(id)arg1;
- (void)customizeButton:(id)arg1;
- (void)configUIView;
- (void)setMessage:(id)arg1;
- (void)viewWillAppear;
- (void)loadView;

@end

