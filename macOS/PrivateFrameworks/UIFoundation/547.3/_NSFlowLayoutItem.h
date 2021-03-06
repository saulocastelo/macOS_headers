//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _NSFlowLayoutRow, _NSFlowLayoutSection;

@interface _NSFlowLayoutItem : NSObject
{
    _NSFlowLayoutSection *_section;
    _NSFlowLayoutRow *_rowObject;
    struct CGRect _itemFrame;
    struct {
        unsigned int sizeEstimated:1;
        unsigned int positionEstimated:1;
        unsigned int sizeHasBeenSet:1;
    } _itemFlags;
}

@property(nonatomic) __weak _NSFlowLayoutRow *rowObject; // @synthesize rowObject=_rowObject;
@property(nonatomic) __weak _NSFlowLayoutSection *section; // @synthesize section=_section;
@property(nonatomic) struct CGRect itemFrame; // @synthesize itemFrame=_itemFrame;
- (void).cxx_destruct;
@property(nonatomic) BOOL sizeHasBeenSet;
@property(nonatomic, getter=isPositionEstimated) BOOL positionEstimated;
@property(nonatomic, getter=isSizeEstimated) BOOL sizeEstimated;
- (id)copy;

@end

