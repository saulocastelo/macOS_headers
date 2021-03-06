//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TSApplication/TMATextPresetsController.h>

@class TPBookmarkController, TPDocumentRoot, TPMacDocument;

@interface TPMacBookmarkStylePresetsController : TMATextPresetsController
{
    TPDocumentRoot *_documentRoot;
    TPMacDocument *_document;
    TPBookmarkController *_bookmarkController;
}

@property(nonatomic) __weak TPBookmarkController *bookmarkController; // @synthesize bookmarkController=_bookmarkController;
@property(nonatomic) __weak TPMacDocument *document; // @synthesize document=_document;
@property(nonatomic) __weak TPDocumentRoot *documentRoot; // @synthesize documentRoot=_documentRoot;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)defaultCellTextColor;
- (void)updateCellView:(id)arg1 withPreset:(id)arg2;
- (void)toggleStyleShownForParagraphStyle:(id)arg1;
- (void)applyStyleClicked:(id)arg1;
- (id)cellViewIdentifier;
- (void)loadAdditionalCellViews;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)awakeFromNib;

@end

