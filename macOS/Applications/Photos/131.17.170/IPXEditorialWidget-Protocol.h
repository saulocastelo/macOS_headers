//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IPXAssetTransitionItem, IPXDetailsContext, MOMediaItem, NSArray, NSEvent, NSImage, NSIndexSet, NSMenu, NSString, NSView, PFDispatchQueue, PXSectionedDataSource, PXSectionedDataSourceManager, UXView;
@protocol IPXEditorialWidgetDelegate;

@protocol IPXEditorialWidget <NSObject>
@property(readonly, nonatomic) PFDispatchQueue *workQueue;
@property(readonly, nonatomic) IPXDetailsContext *context;
- (id)initWithContext:(IPXDetailsContext *)arg1 workQueue:(PFDispatchQueue *)arg2;

@optional
@property(nonatomic, getter=isSelected) BOOL selected;
@property(readonly, nonatomic) NSArray *transitionItems;
@property(readonly, nonatomic) BOOL showsSelectionIndicator;
@property(readonly, nonatomic) double cornerRadius;
@property(readonly, nonatomic) double horizontalInset;
@property(readonly, nonatomic) UXView *contentView;
@property(readonly, nonatomic) unsigned long long layoutStyle;
@property(readonly, nonatomic) PXSectionedDataSourceManager *dataSourceManager;
@property(readonly, nonatomic) NSString *localizedAccessibilityLabel;
@property(readonly, nonatomic) NSString *localizedDisclosureToolTip;
@property(readonly, nonatomic) NSString *localizedDisclosureTitle;
@property(readonly, nonatomic) NSString *localizedCaptionToolTip;
@property(readonly, nonatomic) NSString *localizedCaption;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) BOOL supportsDragging;
@property(readonly, nonatomic) BOOL providesAssetSelection;
@property(readonly, nonatomic) BOOL hasLoadedContentData;
@property(readonly, nonatomic) BOOL supportsLassoSelection;
@property(readonly, nonatomic) BOOL hasContentForCurrentInput;
@property(nonatomic) __weak id <IPXEditorialWidgetDelegate> widgetDelegate;
- (void)didChangeBackingProperties;
- (void)didAddContentView;
- (void)didEndLiveResize;
- (void)willStartLiveResize;
- (void)updateForSize:(struct CGSize)arg1;
- (void)unloadContentData;
- (void)loadContentData;
- (void)prepareForPopTransition;
- (void)prepareForViewDidDisappear;
- (void)prepareForViewWillAppear;
- (void)didTransitionWithItems:(NSArray *)arg1;
- (void)willTransitionWithItems:(NSArray *)arg1;
- (unsigned long long)indexForTransitionItem:(IPXAssetTransitionItem *)arg1 inDataSource:(PXSectionedDataSource *)arg2;
- (NSImage *)targetOverlayImageForTransitionItem:(IPXAssetTransitionItem *)arg1;
- (struct CGRect)targetFrameForTransitionItem:(IPXAssetTransitionItem *)arg1 inView:(NSView *)arg2 imageRect:(struct CGRect *)arg3 cornerRadius:(double *)arg4;
- (void)setContentSize:(struct CGSize)arg1;
- (double)preferredContentHeightForWidth:(double)arg1;
- (BOOL)wantsPlaceholderViewForDataSource:(PXSectionedDataSource *)arg1;
- (NSView *)hitTest:(struct CGPoint)arg1;
- (BOOL)itemChangeRequiresReloadAtBeforeIndex:(unsigned long long)arg1 beforeDataSource:(PXSectionedDataSource *)arg2 afterIndex:(unsigned long long)arg3 afterDataSource:(PXSectionedDataSource *)arg4;
- (NSMenu *)rightClickMenuForIndexes:(NSIndexSet *)arg1 inDataSource:(PXSectionedDataSource *)arg2;
- (void)openObjectsAtIndexes:(NSIndexSet *)arg1 inDataSource:(PXSectionedDataSource *)arg2 withEvent:(NSEvent *)arg3 forEditing:(BOOL)arg4;
- (BOOL)canOpenObjectsAtIndexes:(NSIndexSet *)arg1 inDataSource:(PXSectionedDataSource *)arg2;
- (BOOL)shouldSelectObjectAtIndex:(unsigned long long)arg1 inDataSource:(PXSectionedDataSource *)arg2;
- (void)updateMediaItem:(MOMediaItem *)arg1 atIndexPath:(struct PXSimpleIndexPath)arg2 dataSource:(PXSectionedDataSource *)arg3;
- (MOMediaItem *)mediaItemForItemAtIndexPath:(struct PXSimpleIndexPath)arg1 dataSource:(PXSectionedDataSource *)arg2;
- (void)userDidSelectCaptionControl;
- (void)userDidSelectDisclosureControl;
- (void)preheatContent;
@end

