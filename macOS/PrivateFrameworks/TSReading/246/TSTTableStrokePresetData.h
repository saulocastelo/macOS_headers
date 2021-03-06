//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TSDStroke;

@interface TSTTableStrokePresetData : NSObject
{
    TSDStroke *mHorizontalStroke;
    TSDStroke *mVerticalStroke;
    TSDStroke *mExteriorStroke;
    unsigned int mVisibleMask;
}

@property(nonatomic) unsigned int mask; // @synthesize mask=mVisibleMask;
@property(retain, nonatomic) TSDStroke *exteriorStroke; // @synthesize exteriorStroke=mExteriorStroke;
@property(retain, nonatomic) TSDStroke *verticalStroke; // @synthesize verticalStroke=mVerticalStroke;
@property(retain, nonatomic) TSDStroke *horizontalStroke; // @synthesize horizontalStroke=mHorizontalStroke;
- (BOOL)isEqual:(id)arg1;
- (id)initWithMask:(unsigned int)arg1 horizontalStroke:(id)arg2 verticalStroke:(id)arg3 exteriorStroke:(id)arg4;
- (void)dealloc;
- (id)init;

@end

