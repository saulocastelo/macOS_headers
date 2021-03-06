//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSSplitViewController.h>

#import "PadViewControllerDelegate-Protocol.h"

@class ICMMainSplitViewController, ICMNoteEditorController, ICMNoteListController, ICMPadContainerViewController, NSString, NSTabViewController, PadViewController;

@interface ICMNoteSplitViewController : NSSplitViewController <PadViewControllerDelegate>
{
    NSTabViewController *_noteListTabViewController;
    NSTabViewController *_noteEditorTabViewController;
    ICMNoteListController *_noteListController;
    ICMNoteEditorController *_noteEditorController;
    ICMPadContainerViewController *_padContainerViewController;
    ICMMainSplitViewController *_mainSplitViewController;
    double _splitViewMinimumWidth;
}

+ (id)keyPathsForValuesAffectingIsShowingHTMLNoteEditor;
+ (id)keyPathsForValuesAffectingPadViewController;
@property(nonatomic) double splitViewMinimumWidth; // @synthesize splitViewMinimumWidth=_splitViewMinimumWidth;
@property(nonatomic) __weak ICMMainSplitViewController *mainSplitViewController; // @synthesize mainSplitViewController=_mainSplitViewController;
@property(retain, nonatomic) ICMPadContainerViewController *padContainerViewController; // @synthesize padContainerViewController=_padContainerViewController;
@property(retain, nonatomic) ICMNoteListController *noteListController; // @synthesize noteListController=_noteListController;
- (void).cxx_destruct;
- (void)refreshNoteListSplitView;
@property(readonly, nonatomic) BOOL isShowingHTMLNoteEditor;
- (void)setSelectedNoteEditorViewController:(unsigned long long)arg1;
- (struct CGRect)splitView:(id)arg1 effectiveRect:(struct CGRect)arg2 forDrawnRect:(struct CGRect)arg3 ofDividerAtIndex:(long long)arg4;
@property(readonly, nonatomic) NSTabViewController *noteEditorTabViewController; // @synthesize noteEditorTabViewController=_noteEditorTabViewController;
- (BOOL)noteListIsShowingEmptyHTMLFolder;
- (BOOL)noteListContainsSingleSelectedHTMLObject;
@property(readonly, nonatomic) PadViewController *padViewController;
- (void)discardPadContainerViewController;
- (void)createPadContainerViewControllerIfNecessary;
@property(readonly, nonatomic) ICMNoteEditorController *noteEditorController; // @synthesize noteEditorController=_noteEditorController;
@property(readonly, nonatomic) NSTabViewController *noteListTabViewController; // @synthesize noteListTabViewController=_noteListTabViewController;
- (void)setupSplitViewConstraints;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

