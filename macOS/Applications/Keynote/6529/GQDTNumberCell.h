//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GQDTCell.h"

#import "ICExportable.h"

@class GQDTComputedFormatSpec, NSString;

@interface GQDTNumberCell : GQDTCell <ICExportable>
{
    double mValue;
    GQDTComputedFormatSpec *mComputedFormat;
}

+ (unsigned char)defaultFlags;
- (int)readAttributesForNCell:(struct _xmlTextReader *)arg1;
- (int)readAttributesForNumberCell:(struct _xmlTextReader *)arg1;
- (id)color;
- (BOOL)isEqualToNumberCell:(id)arg1;
- (struct __CFString *)copyStringValue;
- (id)numberFormat;
- (id)computedFormat;
- (double)value;
- (void)dealloc;
- (void)setComputedFormat:(id)arg1;
- (void)setValue:(double)arg1;
- (BOOL)encodeWithExporter:(id)arg1;
- (void)encodeAttributesWithExporter:(id)arg1;
- (char *)elementName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

