//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABPersonListControllerProtocol.h"
#import "CNContactListCellViewControllerDelegate.h"
#import "NSOutlineViewDataSource.h"
#import "NSOutlineViewDelegate.h"

@class ABAccount, ABAddressBook, ABGroup, ABPersonEntriesList, CNContactListCellView, CNContactListHelperFactory, CNContactListView, CNContactStore, NSArray, NSDictionary, NSString;

@interface CNContactListController : NSObject <CNContactListCellViewControllerDelegate, NSOutlineViewDelegate, NSOutlineViewDataSource, ABPersonListControllerProtocol>
{
    BOOL _shouldUnifyPeople;
    ABAccount *_account;
    ABAddressBook *_addressBook;
    ABAddressBook *_suggestionAddressBook;
    ABGroup *_displayedGroup;
    NSDictionary *_cachedFetchedEntriesByUID;
    NSArray *_displayedKeys;
    CNContactListView *_contactListView;
    CNContactStore *_contactStore;
    CNContactListHelperFactory *_helperFactory;
    id <CNContactListControllerDelegate> _delegate;
    ABPersonEntriesList *_personEntriesList;
    CNContactListCellView *_cellView;
    unsigned long long _selectionStyle;
    unsigned long long _selectionLimit;
    unsigned long long _countOfContactsSelected;
    NSArray *_selectedEntries;
}

@property(retain, nonatomic) NSArray *selectedEntries; // @synthesize selectedEntries=_selectedEntries;
@property(nonatomic) unsigned long long countOfContactsSelected; // @synthesize countOfContactsSelected=_countOfContactsSelected;
@property(nonatomic) unsigned long long selectionLimit; // @synthesize selectionLimit=_selectionLimit;
@property(nonatomic) unsigned long long selectionStyle; // @synthesize selectionStyle=_selectionStyle;
@property(nonatomic) BOOL shouldUnifyPeople; // @synthesize shouldUnifyPeople=_shouldUnifyPeople;
@property(retain, nonatomic) CNContactListCellView *cellView; // @synthesize cellView=_cellView;
@property(retain, nonatomic) ABPersonEntriesList *personEntriesList; // @synthesize personEntriesList=_personEntriesList;
@property __weak id <CNContactListControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CNContactListHelperFactory *helperFactory; // @synthesize helperFactory=_helperFactory;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) CNContactListView *contactListView; // @synthesize contactListView=_contactListView;
@property(copy, nonatomic) NSArray *displayedKeys; // @synthesize displayedKeys=_displayedKeys;
@property(copy, nonatomic) NSDictionary *cachedFetchedEntriesByUID; // @synthesize cachedFetchedEntriesByUID=_cachedFetchedEntriesByUID;
@property(retain) ABGroup *displayedGroup; // @synthesize displayedGroup=_displayedGroup;
@property(retain, nonatomic) ABAddressBook *suggestionAddressBook; // @synthesize suggestionAddressBook=_suggestionAddressBook;
@property(retain, nonatomic) ABAddressBook *addressBook; // @synthesize addressBook=_addressBook;
@property(retain) ABAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)accessibilityPressRowWithView:(id)arg1;
- (void)cellViewController:(id)arg1 selectValueWithScope:(id)arg2;
- (BOOL)shouldIncludeSuggestions;
- (id)fetchSuggestedEntriesByUID;
- (void)updateSuggestedContacts;
- (unsigned long long)countOfEntries;
- (void)scrollVisibleToSelectedRow;
@property(copy, nonatomic) NSString *filterTerms;
@property(readonly) BOOL shouldIncludeGroups;
@property(readonly) NSArray *personEntries;
@property(readonly) NSArray *entries;
- (void)fetchContacts;
- (void)rearrangeObjects;
- (void)expandPersonEntriesCacheWithEntry:(id)arg1;
- (void)clearExtraUniqueIdsInSearchResults;
- (void)selectPrevious:(id)arg1;
- (void)selectNext:(id)arg1;
- (void)reflectChangesInUIForNotificationUserInfo:(id)arg1;
- (void)resetCountOfContactsExpanded;
@property(readonly, nonatomic) unsigned long long countOfContactsExpanded;
- (void)reloadAndRestoreSelection;
- (void)personEntriesDidChange:(id)arg1;
- (id)fetchPredicate;
- (id)affectedStores;
- (void)reloadPersonEntriesList;
- (void)refreshContactList;
- (id)viewControllerAtRow:(long long)arg1;
- (id)contactAtRow:(long long)arg1;
- (void)resizeRowsAtIndexes:(id)arg1;
- (void)expandSelectedRowsIfNecessary;
- (void)collapseDeselectedRowsIfNecessary;
- (void)updateVisualApperanceOfRowsGivenNewlySelectedRows;
- (id)selectionScopeForSelectedRow:(unsigned long long)arg1;
- (void)performActionForRowAtIndex:(long long)arg1;
- (void)performAppropriateUserInteraction;
- (void)updateOverallCountOfSelectedContacts;
- (void)saveSnapshotOfSelectedEntries;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)selectRow:(long long)arg1;
- (BOOL)isValidRow:(long long)arg1;
- (BOOL)isHeaderRow:(unsigned long long)arg1;
- (id)outlineView:(id)arg1 rowViewForItem:(id)arg2;
- (double)heightOfExpandedEntry:(id)arg1;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (BOOL)shouldSelectContacts;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineViewNeedsIndentation:(id)arg1;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldCollapseItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (void)performInitialSelection;
@property(readonly, nonatomic) NSArray *identifiersOfSelectedContacts;
- (void)setupCellView;
- (void)registerNibWithName:(id)arg1 forIdentifier:(id)arg2;
- (void)setupListView;
- (void)performDoubleAction:(id)arg1;
- (void)setHeadliner:(id)arg1;
- (void)dealloc;
- (id)initWithPersonEntriesList:(id)arg1 selectionStyle:(unsigned long long)arg2 selectionLimit:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

