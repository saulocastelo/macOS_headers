//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexPath;

__attribute__((visibility("hidden")))
@interface UIMultiSelectInteractionState : NSObject
{
    unsigned long long _ignoringSelectionChangedNotificationsCounter;
    BOOL _selecting;
    NSIndexPath *_startIndexPath;
    NSIndexPath *_endIndexPath;
    NSArray *_originallySelectedIndexPaths;
    NSArray *_allSelectedIndexPaths;
    struct CGPoint _startPoint;
}

@property(copy, nonatomic) NSArray *allSelectedIndexPaths; // @synthesize allSelectedIndexPaths=_allSelectedIndexPaths;
@property(copy, nonatomic) NSArray *originallySelectedIndexPaths; // @synthesize originallySelectedIndexPaths=_originallySelectedIndexPaths;
@property(nonatomic, getter=isSelecting) BOOL selecting; // @synthesize selecting=_selecting;
@property(retain, nonatomic) NSIndexPath *endIndexPath; // @synthesize endIndexPath=_endIndexPath;
@property(retain, nonatomic) NSIndexPath *startIndexPath; // @synthesize startIndexPath=_startIndexPath;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
- (void).cxx_destruct;
- (id)pathsToDeselectForInterpolatedIndexPaths:(id)arg1 currentlySelectedIndexPaths:(id)arg2;
- (id)pathsToSelectForInterpolatedIndexPaths:(id)arg1;
- (void)updateStateWithStartingIndexPath:(id)arg1 otherSelectedIndexPaths:(id)arg2;
- (void)updateStateWithDifferenceFromCurrentSelection:(id)arg1;
- (BOOL)stillValidForSelectedIndexPaths:(id)arg1;
@property(readonly, nonatomic) BOOL ignoringSelectionChangedNotifications;
- (void)ignoreSelectionChangedNotificationsWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithCurrentSelection:(id)arg1;

@end

