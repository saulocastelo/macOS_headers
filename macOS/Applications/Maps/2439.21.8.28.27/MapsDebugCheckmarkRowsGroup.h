//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface MapsDebugCheckmarkRowsGroup : NSObject
{
    NSMutableArray *_heldRows;
    NSMutableArray *_weakRows;
    CDUnknownBlockType _selectionChanged;
}

+ (id)rowsGroupContainingRows:(out id *)arg1 withContent:(CDUnknownBlockType)arg2 get:(CDUnknownBlockType)arg3 set:(CDUnknownBlockType)arg4;
@property(copy, nonatomic) CDUnknownBlockType selectionChanged; // @synthesize selectionChanged=_selectionChanged;
- (void).cxx_destruct;
- (void)update;
@property(readonly, nonatomic) NSArray *rows;
- (void)checkmarkRowWillInvalidate:(id)arg1;
- (void)checkmarkRowDidChangeChecked:(id)arg1;
- (void)addRow:(id)arg1;
- (id)addRowWithTitle:(id)arg1 value:(id)arg2;
- (id)_initWithHeldRows;
- (id)init;
- (id)_relinquishOwnershipOfHeldRows;

@end

