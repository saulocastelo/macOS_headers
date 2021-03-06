//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PCBaseSegmentedCell.h"

@class PCTemplateInteriorCell;

__attribute__((visibility("hidden")))
@interface PCTemplateSegmentedCell : PCBaseSegmentedCell
{
    PCTemplateInteriorCell *iDrawingCell;
}

@property(retain) PCTemplateInteriorCell *drawingCell; // @synthesize drawingCell=iDrawingCell;
- (void)dealloc;
- (void)drawSegmentInterior:(long long)arg1 inFrame:(struct CGRect)arg2 withView:(id)arg3;
- (void)drawSegment:(long long)arg1 inFrame:(struct CGRect)arg2 withView:(id)arg3;
- (void)setImagePosition:(unsigned long long)arg1;
- (unsigned long long)imagePosition;
- (void)setDrawingCellBackgroundStyle:(long long)arg1;
- (unsigned long long)drawingBezelStyle;
- (void)setDrawingBezelStyle:(unsigned long long)arg1;
- (void)configure;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

