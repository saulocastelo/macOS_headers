//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableRowView.h>

@class LPBuildStep, NSColor;

__attribute__((visibility("hidden")))
@interface LPBuildTableRowView : NSTableRowView
{
    NSColor *_triangleFillColor;
    NSColor *_borderColor;
    double _intercellSpacing;
    LPBuildStep *_objectValue;
}

@property(retain, nonatomic) LPBuildStep *objectValue; // @synthesize objectValue=_objectValue;
@property(nonatomic) double intercellSpacing; // @synthesize intercellSpacing=_intercellSpacing;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

