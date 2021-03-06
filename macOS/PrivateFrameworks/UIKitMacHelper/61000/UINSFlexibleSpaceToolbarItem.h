//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitMacHelper/UINSToolbarItem.h>

#import <UIKitMacHelper/UINSFlexibleSpaceToolbarItem-Protocol.h>

@class NSString, NSView;
@protocol UINSAccessibilityInfo;

__attribute__((visibility("hidden")))
@interface UINSFlexibleSpaceToolbarItem : UINSToolbarItem <UINSFlexibleSpaceToolbarItem>
{
    NSView *_customSpace;
}

- (void).cxx_destruct;
- (struct CGSize)maxSize;
- (struct CGSize)minSize;
- (BOOL)isSpace;
- (BOOL)isSeparatorItem;
- (void)prepareItem;

// Remaining properties
@property(copy, nonatomic) id <UINSAccessibilityInfo> accessibilityInfo;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(copy, nonatomic) NSString *label;

@end

