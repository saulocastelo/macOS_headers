//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GQDNameMappable-Protocol.h"
#import "ICExportable-Protocol.h"

@class NSString;

@interface GQDColor : NSObject <ICExportable, GQDNameMappable>
{
    struct CGColor *mColorRef;
}

+ (id)colorWithCalibratedRed:(double)arg1 green:(double)arg2 blue:(double)arg3;
+ (id)colorWithDeviceWhite:(double)arg1 alpha:(double)arg2;
+ (id)blackColor;
+ (const struct StateSpec *)stateForReading;
+ (id)newCMYKColorFromReader:(struct _xmlTextReader *)arg1;
+ (id)newWhiteColorFromReader:(struct _xmlTextReader *)arg1 calibrated:(BOOL)arg2;
+ (id)newRGBColorFromReader:(struct _xmlTextReader *)arg1 calibrated:(BOOL)arg2;
+ (void)readColorFromProcessor:(id)arg1 reader:(struct _xmlTextReader *)arg2;
- (BOOL)isBlackColor;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (struct CGColor *)colorRef;
- (id)initWithColorRef:(struct CGColor *)arg1;
- (id)initWithCalibratedRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithCalibratedWhite:(double)arg1 alpha:(double)arg2;
- (id)initWithDeviceWhite:(double)arg1 alpha:(double)arg2;
- (void)dealloc;
- (BOOL)encodeWithExporter:(id)arg1;
- (void)encodeAttributesWithExporter:(id)arg1;
- (char *)elementName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

