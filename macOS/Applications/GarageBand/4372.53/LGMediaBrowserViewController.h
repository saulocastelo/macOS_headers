//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSPathControlDelegate-Protocol.h"
#import "NSTabViewDelegate-Protocol.h"

@class EcTimer, LFBButton_Prelisten, LGAdvancedSearchViewController, LGAlternativesChooserWindowController, LGFileBrowserData, LGImageButton, MAButton, MAKitSearchField, MANinePartImageView, MAPopUpButton, MASegmentedControl, MyMAKitSlider, NSArray, NSButton, NSFont, NSMutableArray, NSPopUpButton, NSProgressIndicator, NSString, NSTabView, NSTextField, NSView;
@protocol hasTableViewMethod;

@interface LGMediaBrowserViewController : NSObject <NSTabViewDelegate, NSPathControlDelegate>
{
    id m_View;
    MASegmentedControl *m_backForwardSegmentedControl;
    NSPopUpButton *m_pathPopUpButton;
    MASegmentedControl *m_computerHomeProjectSegmentedControl;
    MASegmentedControl *m_listAndBrowserSegmentedControl;
    MAKitSearchField *m_searchTextField;
    NSProgressIndicator *m_progressIndicator;
    LGImageButton *m_advancedButton;
    NSTabView *m_tabView;
    id m_fileTableView;
    id m_fileBrowserView;
    id m_searchTableView;
    NSView *m_advancedSearchView;
    MAPopUpButton *m_advancedSearchAnyAllPopUpButton;
    MAPopUpButton *m_actionPopUpButton;
    MyMAKitSlider *m_volumeSlider;
    LFBButton_Prelisten *m_playButton;
    MAButton *m_importButton;
    MAButton *m_openButton;
    NSTextField *m_informativeText;
    id m_pathControl;
    id m_borderView;
    MANinePartImageView *m_volumeMinBackgroundView;
    MANinePartImageView *m_volumeMaxBackgroundView;
    id m_newFolderWindow;
    NSTextField *m_newFolderNameTextField;
    NSButton *m_newFolderCancelButton;
    NSButton *m_newFolderOkButton;
    EcTimer *m_updateTimer;
    EcTimer *m_reActivateSearchTimer;
    BOOL m_blockSearchActivation;
    LGFileBrowserData *_fileBrowserData;
    struct __MDQuery *m_query;
    NSArray *m_searchScope;
    BOOL m_queryRunning;
    NSString *m_queryString;
    NSMutableArray *m_selectedPaths;
    NSString *m_preListenAudioFile;
    BOOL m_logicIsPlaying;
    BOOL m_newPrelisten;
    int m_playState;
    NSArray *m_iconArray;
    LGAdvancedSearchViewController *m_advancedSearch;
    NSView *m_invisibleViewForQuickHelpTrackingArea;
    NSString *m_newFolderPath;
    NSView<hasTableViewMethod> *m_importTracksView;
    LGAlternativesChooserWindowController *alternativesChooserWindowController;
    NSFont *font;
}

+ (void)setLogicFunctions:(CDStruct_0df1d01a)arg1;
+ (id)createLGMediaBrowserViewController:(CDStruct_0df1d01a)arg1;
@property(retain, nonatomic) NSFont *font; // @synthesize font;
- (void)setupProjectAlternativesPopupButtonWithPath:(id)arg1;
- (void)openButtonAction:(id)arg1;
- (void)importButtonAction:(id)arg1;
- (BOOL)gotoLogicProjectPath:(id)arg1 showProjectImport:(BOOL)arg2;
- (BOOL)importProject:(id)arg1;
- (void)closeImportView;
- (void)hideGUICoveredByImportView:(BOOL)arg1;
- (void)playButtonAction:(id)arg1;
- (void)volumeSliderAction:(id)arg1;
- (void)newFolderTextFieldAction:(id)arg1;
- (void)newFolderOkButtonAction:(id)arg1;
- (void)newFolderCancelButtonAction:(id)arg1;
- (void)newFolderButtonAction:(id)arg1;
- (void)actionPopUpButtonAction:(id)arg1;
- (void)runTerminalCommand:(id)arg1 arguments:(id)arg2;
- (void)setUpActionButton;
- (void)searchTableViewDoubleClickAction:(id)arg1;
- (void)searchTableViewAction:(id)arg1;
- (void)fileBrowserViewDoubleClickAction:(id)arg1;
- (void)fileBrowserViewAction:(id)arg1;
- (void)fileBrowserClickInEmptyRowsOfColumn:(int)arg1 clickCount:(int)arg2;
- (void)fileTableViewDoubleClickAction:(id)arg1;
- (void)fileTableViewAction:(id)arg1;
- (void)advancedSearchAnyAllPopUpButtonAction:(id)arg1;
- (void)resizeSearchArea;
- (void)advancedSearchViewSizeChanged;
- (void)advancedButtonAction:(id)arg1;
- (void)setAdvancedSearchButtonPlusImage:(BOOL)arg1;
- (void)searchTextFieldAction:(id)arg1;
- (id)queryCurrentFolderPath;
- (id)queryRawQuery;
- (id)queryCompatibleVersion;
- (id)querySearchScope;
- (void)reActivateSearch:(id)arg1;
- (void)reActivateSearchNow:(id)arg1;
- (BOOL)blockSearchActivation;
- (void)activateSearch;
- (void)activateSavedSearchWithQuery:(id)arg1 searchScopes:(id)arg2 currentFolderPath:(id)arg3;
- (void)stopRunningQuery;
- (void)listAndBrowserSegmentedControlAction:(id)arg1;
- (void)browserButtonAction;
- (void)listButtonAction;
- (void)setSelectedRow:(int)arg1;
- (void)exitSearchModeIfActive;
- (void)addMDQueryNotifications;
- (void)removeMDQueryNotifications;
- (void)pathControlAction:(id)arg1;
- (void)pathPopUpButtonAction:(id)arg1;
- (void)populatePathPopUpButtonAtPath:(id)arg1;
- (void)homeButtonContextMenuAction:(id)arg1;
- (void)computerHomeProjectSegmentedControlAction:(id)arg1;
- (void)projectButtonAction;
- (void)homeButtonAction;
- (void)computerButtonAction;
- (void)gotoPath:(id)arg1;
- (void)backForwardButtonAction:(id)arg1;
- (void)forwardButtonAction;
- (void)backButtonAction;
- (void)tableView:(id)arg1 didClickTableColumn:(id)arg2;
- (void)setSortDescriptorTableView:(id)arg1 identifier:(id)arg2 sortHow:(int)arg3;
- (void)tableView:(id)arg1 sortDescriptorsDidChange:(id)arg2;
- (BOOL)browser:(id)arg1 acceptDrop:(id)arg2 atRow:(long long)arg3 column:(long long)arg4 dropOperation:(unsigned long long)arg5;
- (unsigned long long)browser:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long *)arg3 column:(long long *)arg4 dropOperation:(unsigned long long *)arg5;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)browser:(id)arg1 willDisplayCell:(id)arg2 atRow:(long long)arg3 column:(long long)arg4;
- (long long)browser:(id)arg1 numberOfRowsInColumn:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)tabView:(id)arg1 willSelectTabViewItem:(id)arg2;
- (id)selectedPaths;
- (BOOL)pathControl:(id)arg1 acceptDrop:(id)arg2;
- (unsigned long long)pathControl:(id)arg1 validateDrop:(id)arg2;
- (void)queryDone:(id)arg1;
- (void)logicDidChangeTransportStatus;
- (void)logicDidStartStopPrelistening;
- (void)logicDidStopPrelistening;
- (BOOL)isLogicPlaying;
- (void)openInLogicFullPaths:(id)arg1 doubleClicked:(BOOL)arg2;
- (BOOL)isAliasFolderAndOpenAliasFolder:(id)arg1;
- (BOOL)openAliasFolder:(id)arg1;
- (void)updateGUIWithSelectedPaths:(id)arg1;
- (BOOL)selectedPathsContainOnlyAudioFiles:(id)arg1;
- (id)actionTypesForFiles:(id)arg1;
- (void)setradialMenuItemsEnabledStates:(id)arg1;
- (BOOL)writepermissionAtPath:(id)arg1;
- (void)overviewWindowForFile:(id)arg1;
- (id)overviewImagePathForProjectPath:(id)arg1;
- (BOOL)isOneLogic5or6Project:(id)arg1;
- (BOOL)isOneLogicProject:(id)arg1;
- (BOOL)isOneLogic7or8or9Project:(id)arg1;
- (BOOL)isOneLogic10Project:(id)arg1;
- (id)smallIconForFile:(id)arg1;
- (id)iconForFile:(id)arg1;
- (BOOL)isSDIRfile:(id)arg1;
- (BOOL)isEXSfile:(id)arg1;
- (void)updateGUIWithSelectedPaths:(id)arg1 showPath:(BOOL)arg2;
- (void)setOpenButtonTitle:(int)arg1;
- (void)updateSearchData:(id)arg1;
- (id)view;
- (void)updateMediaBrowserDictionaryAtPath:(id)arg1;
- (id)fileSizeString:(unsigned long long)arg1;
- (void)updateMediaBrowserDictionary;
- (int)sortHow;
- (int)sortBy;
- (int)fileIsVisibleAtPath:(id)arg1;
- (void)clearMediaBrowserDictionary;
- (id)currentLogicDocumentFullPath;
- (void)fileBrowserData:(id)arg1 currentLogicDocumentFullPath:(id)arg2;
- (id)audioInfoStringFromLogicFullPath:(id)arg1;
- (void)deactivateTimer;
- (void)activateTimer;
- (void)checkForDirectoryUpdate:(id)arg1;
- (void)checkForDirectoryUpdate;
- (void)keyCommand:(id)arg1;
- (void)directoryUpdate:(id)arg1;
- (void)closeTrackImport:(id)arg1;
- (void)screenSetWillChange:(id)arg1;
- (void)removeNotificationObservers;
- (void)addNotificationObservers;
- (id)computerName;
- (void)revealInFinder;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;
- (void)setPlayAndVolumeControlsHidden:(BOOL)arg1;
- (void)fileTableViewHeaderMenuAction:(id)arg1;
- (void)setFileTableViewFinderLabelsColumnVisible:(BOOL)arg1;
- (id)trackImportView;
@property(readonly, retain, nonatomic) NSView *fileBrowserView;
- (int)playState;
- (void)updatePlayButton:(int)arg1;
- (void)updateVolumeSlider;
- (void)stopAndStartNewPrelisten;
- (void)stopPrelisten;
- (id)appendInformativeText:(id)arg1;
- (BOOL)setTrackImportInstanceExists:(BOOL)arg1;
- (BOOL)anotherTrackImportInstanceExists;
- (int)currentDocumentAlternativeIndex;
- (void)viewVisibilityChange:(BOOL)arg1;
@property(nonatomic) id nibwUserData;
- (void)viewDidMoveToSuperview;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

