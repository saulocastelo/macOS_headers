//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LPFileInspectorChildController.h"

#import "LPInspectorViewDataSource.h"

@class LPInspectorBottomBarView, LPInspectorPaneSectionView, NSButton, NSMutableArray, NSPopUpButton, NSString;

__attribute__((visibility("hidden")))
@interface LPHamlInspectorController : LPFileInspectorChildController <LPInspectorViewDataSource>
{
    BOOL _isSetup;
    NSMutableArray *_sectionPanesForFileOptions;
    LPInspectorBottomBarView *_bottomBarView;
    NSButton *_compileAllButton;
    LPInspectorPaneSectionView *_fileOptionsSectionView;
    NSPopUpButton *_outputStylePopUpButton;
    NSPopUpButton *_outputFormatPopUpButton;
    NSButton *_useUnixNewlinesCheckbox;
    NSButton *_useDoubleQuotesCheckbox;
    NSButton *_escapeHTMLCharactersCheckbox;
    NSButton *_noEscapeInAttributesCheckbox;
    NSButton *_useCDATACheckbox;
    NSButton *_cacheBusterCheckbox;
}

- (void)compileButtonAction:(id)arg1;
- (void)checkboxesAction:(id)arg1;
- (void)outputFormatPopUpButtonAction:(id)arg1;
- (void)outputStylePopUpButtonAction:(id)arg1;
- (void)refreshPaneAtIndex:(unsigned long long)arg1;
- (id)viewForBottomBarOfPaneAtIndex:(unsigned long long)arg1;
- (id)sectionViewsForPaneAtIndex:(unsigned long long)arg1;
- (long long)typeOfPaneAtIndex:(unsigned long long)arg1;
- (id)orderedTitlesForInspectorToolbarButtons;
- (unsigned long long)numberOfPanes;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithRootController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

