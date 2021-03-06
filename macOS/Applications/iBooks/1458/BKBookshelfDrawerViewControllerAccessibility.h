//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "__BKBookshelfDrawerViewControllerAccessibility_super.h"

#import "BKIMCollectionViewAccessibilityDelegate-Protocol.h"

@class BKBookshelfDrawerViewAccessibility, BKIMCollectionViewAccessibility, NSString;

@interface BKBookshelfDrawerViewControllerAccessibility : __BKBookshelfDrawerViewControllerAccessibility_super <BKIMCollectionViewAccessibilityDelegate>
{
}

+ (Class)bkaxBaseSafeCategoryClass;
+ (id)bkaxTargetClassName;
- (BOOL)bkaxIsDrawerOpenAtIndexPath:(id)arg1;
- (void)bkaxToggleDrawerAtIndexPath:(id)arg1;
@property(copy, nonatomic, setter=bkaxSetDrawerDescription:) NSString *bkaxDrawerDescription;
- (void)setView:(id)arg1;
- (void)_bkaxConfigureViews;
- (void)bkaxLoadAccessibilityInformation;
- (void)awakeFromNib;
@property(readonly, nonatomic) id bkaxCloseButton;
@property(readonly, nonatomic) BKIMCollectionViewAccessibility *bkaxCollectionView;
@property(readonly, nonatomic) BKBookshelfDrawerViewAccessibility *bkaxView;
- (void)_bkaxSetDrawerDescription:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

