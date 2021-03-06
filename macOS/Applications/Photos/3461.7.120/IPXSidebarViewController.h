//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXViewController.h"

#import "IPXPasteboardActionContext-Protocol.h"
#import "IPXShareiCloudCreateViewControllerDelegate-Protocol.h"
#import "IPXSidebarModelChangeReceiver-Protocol.h"
#import "IPXSidebarOutlineViewDelegate-Protocol.h"
#import "NSMenuDelegate-Protocol.h"
#import "NSOutlineViewDataSource-Protocol.h"
#import "NSTextFieldDelegate-Protocol.h"
#import "PFResourceAccessClient-Protocol.h"
#import "UXSourceList-Protocol.h"

@class IPXFilePromiseHelper, IPXSidebarCellView, IPXSidebarItem, IPXSidebarModelController, IPXSidebarOutlineView, IPXWorkspaceController, NSArray, NSMenu, NSMutableArray, NSMutableDictionary, NSObject, NSPopover, NSString, NSView, PFLimitedConcurrencyQueue, RDFolder;
@protocol OS_dispatch_group, PFDispatchQueueClearing;

@interface IPXSidebarViewController : IPXViewController <IPXSidebarModelChangeReceiver, IPXShareiCloudCreateViewControllerDelegate, IPXPasteboardActionContext, NSMenuDelegate, NSOutlineViewDataSource, IPXSidebarOutlineViewDelegate, NSTextFieldDelegate, PFResourceAccessClient, UXSourceList>
{
    NSMenu *_sortingMenu;
    BOOL _viewIsReloading;
    BOOL _monitoringDataSources;
    BOOL _collapsed;
    BOOL _adjustingVisibilityFromPrefs;
    unsigned long long _rootSequence;
    NSArray *_rootCollectionObjects;
    NSMutableDictionary *_collectionsByContainerIdentifier;
    NSMutableDictionary *_itemsByIdentifier;
    NSArray *_shortcutMenuItems;
    NSMutableArray *_shortcutSubmenus;
    IPXSidebarItem *_recentlyRelocatedSelectedAlbum;
    NSPopover *_createStreamPopover;
    IPXSidebarCellView *_createStreamSenderCellView;
    NSString *_createdModelUUID;
    RDFolder *_createdModelParentFolder;
    BOOL _shouldUnregisterDatabaseResource;
    BOOL _databaseWasClosed;
    NSMutableDictionary *_albumUuidToPreviewMap;
    PFLimitedConcurrencyQueue<PFDispatchQueueClearing> *_albumPreviewDispatchQueue;
    NSObject<OS_dispatch_group> *_albumPreviewQueueWorkGroup;
    long long _draggingSequenceNumber;
    IPXFilePromiseHelper *_filePromiseHelper;
    IPXSidebarModelController *_modelController;
    IPXWorkspaceController *_workspaceController;
    IPXSidebarOutlineView *_outlineView;
    IPXSidebarItem *_importHistoryItem;
}

+ (id)localizedTitleForSectionWithID:(id)arg1;
@property(readonly) IPXSidebarItem *importHistoryItem; // @synthesize importHistoryItem=_importHistoryItem;
@property(retain) IPXSidebarOutlineView *outlineView; // @synthesize outlineView=_outlineView;
@property __weak IPXWorkspaceController *workspaceController; // @synthesize workspaceController=_workspaceController;
@property(retain, nonatomic) IPXSidebarModelController *modelController; // @synthesize modelController=_modelController;
- (void).cxx_destruct;
- (void)resourceWillShutdown:(id)arg1;
- (void)pasteboardActionDidSucceedWithCreatedFolder:(id)arg1;
- (void)performPasteboardActionWithFilePromiseReceivers:(id)arg1 targetAlbum:(id)arg2;
- (void)performPasteboardActionWithImageURLs:(id)arg1 targetAlbum:(id)arg2;
@property(readonly, nonatomic) NSView *pasteboardActionView;
- (void)recursiveSelectedVersionsInContainer:(id)arg1 addingToOrderedSet:(id)arg2;
- (void)sb_createProject:(id)arg1;
- (void)sb_pinItem:(id)arg1;
- (void)sb_playButton:(id)arg1;
- (void)iCloudCreationAborted:(id)arg1;
- (void)iCloudCreationCompleted:(id)arg1;
@property(readonly) double maxSourceListWidth;
@property(readonly) double minSourceListWidth;
- (void)selectNavigationDestination:(id)arg1 allowingScrolling:(BOOL)arg2;
- (void)selectNavigationDestination:(id)arg1;
@property BOOL collapsed;
- (void)a_toggleShowHiddenPhotosAlbum:(id)arg1;
- (void)sb_renameItem:(id)arg1;
- (void)sb_sortByItem:(id)arg1;
- (void)a_setContainerSortOrder:(id)arg1;
- (void)a_sortAlbums:(id)arg1;
- (void)a_setContainerSort:(id)arg1;
- (void)sb_editSmartAlbum:(id)arg1;
- (void)sb_newSmartAlbum:(id)arg1;
- (void)a_duplicateItem:(id)arg1;
- (void)sb_duplicateItem:(id)arg1;
- (void)sb_trashItem:(id)arg1;
- (void)_trashItem:(id)arg1 skipWarning:(BOOL)arg2;
- (void)_duplicateAlbum:(id)arg1;
- (id)_executeCreateNamedModelAction:(id)arg1;
- (void)sb_newFolder:(id)arg1;
- (void)sb_newAlbum:(id)arg1;
- (void)sb_addToProjects:(id)arg1;
- (void)sb_addToMyAlbums:(id)arg1;
- (void)sb_addToShared:(id)arg1;
- (id)albumForAction:(id)arg1;
- (id)baseFolderForAction:(id)arg1;
- (id)baseObjectForAction:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)_updateContextualMenu:(id)arg1 withEvent:(id)arg2 withFlags:(unsigned long long)arg3;
- (void)a_shortcutMenuAction:(id)arg1;
- (void)_updateShortcutMenu:(id)arg1 withEvent:(id)arg2 withFlags:(unsigned long long)arg3;
- (BOOL)updateMenu:(id)arg1 withEvent:(id)arg2 withFlags:(unsigned long long)arg3;
- (id)clickedModel;
- (void)emptyPhotosHasContent:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (id)filePromiseHelper;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (void)outlineView:(id)arg1 draggingSession:(id)arg2 endedAtPoint:(struct CGPoint)arg3 operation:(unsigned long long)arg4;
- (void)outlineView:(id)arg1 updateDraggingItemsForDrag:(id)arg2;
- (void)outlineView:(id)arg1 draggingSession:(id)arg2 willBeginAtPoint:(struct CGPoint)arg3 forItems:(id)arg4;
- (struct IPXSidebarCurrentDraggingFlags)_collectFlagsFromDraggingInfo:(id)arg1 pasteboardController:(id)arg2;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)outlineView:(id)arg1 didAddRowView:(id)arg2 forRow:(long long)arg3;
- (id)outlineView:(id)arg1 addToTargetItemForItem:(id)arg2;
- (BOOL)isReloading;
- (void)outlineView:(id)arg1 didClickAlreadySelectedRow:(long long)arg2;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (id)navigationDestinationForModel:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldTrackCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (struct CGImage *)newPosterImageForAlbum:(id)arg1 longestEdge:(long long)arg2;
- (id)modelForItem:(id)arg1;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (void)updateContentsOfView:(id)arg1 withItem:(id)arg2;
- (id)multiResImageFromBaseImage:(struct CGImage *)arg1;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)metadataDidChangeForImportSource:(id)arg1;
- (void)metadataDidChangeForProject:(id)arg1;
- (void)metadataDidChangeForSharedStream:(id)arg1;
- (void)_processChangeItem:(id)arg1 newModel:(id)arg2;
- (void)metadataDidChangeForAlbumOrFolder:(id)arg1;
- (void)contentsDidChangeForDevicesSection;
- (void)contentsDidChangeForProjectsSection;
- (void)contentsDidChangeForAlbumsSection;
- (void)contentsDidChangeForSharedStreams;
- (void)contentsDidChangeForSharedSection;
- (void)contentsDidChangeForSharedActivity;
- (void)contentsDidChangeForArrangedSectionIdentifiers;
- (void)contentsDidChangeForFolder:(id)arg1;
- (void)contentsDidChangeForLibrarySection;
- (void)_navigateToModel:(id)arg1 updateSelection:(BOOL)arg2;
- (void)processChangeForParentItem:(id)arg1 newCollection:(id)arg2 comparator:(CDUnknownBlockType)arg3;
- (void)updateContentsFromCollection:(id)arg1 toCollection:(id)arg2 comparator:(CDUnknownBlockType)arg3 parentItem:(id)arg4 attemptSelectionChange:(BOOL)arg5 completion:(CDUnknownBlockType)arg6;
@property(readonly) IPXSidebarItem *memoriesItem;
@property(readonly) IPXSidebarItem *photosItem;
- (id)itemForCollectionsObject:(id)arg1 makeIfNecessary:(BOOL)arg2;
- (id)itemForModelUuid:(id)arg1;
- (id)itemForUuid:(id)arg1;
- (BOOL)isProjectsFolder:(id)arg1;
- (BOOL)isMyAlbumsFolder:(id)arg1;
- (BOOL)isMediaTypesFolder:(id)arg1;
- (BOOL)isSectionIdentifier:(id)arg1;
- (void)flashDestinationAlbum:(id)arg1;
- (void)updateSelectionAndScroll:(BOOL)arg1;
- (void)updateSelection;
- (void)moveVisibleOutlineRootItemAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (unsigned long long)numberOfShortcutMenuItems;
- (void)_updateShortcutSubmenus;
- (void)_updateRootSections;
- (void)_updateExpansionStateforItem:(id)arg1;
- (void)_setChildCollection:(id)arg1 forItem:(id)arg2;
- (id)_childCollectionForItem:(id)arg1;
- (void)_setupSectionCollections;
- (void)unregisterDatabaseResource;
- (void)registerDatabaseResource;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

