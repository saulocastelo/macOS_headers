//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UINSMenu-Protocol.h>

@class NSArray, NSString;

@interface _UIMenuBarMenu : NSObject <UINSMenu>
{
    NSArray *_items;
    BOOL _menuChangeShouldRebuildMenu;
    long long type;
    NSString *_title;
}

+ (void)showContextMenuForView:(id)arg1 locationInOwningView:(struct CGPoint)arg2 withRVItem:(id)arg3;
+ (id)_menuIdentifierForStandardItem:(id)arg1;
+ (BOOL)_isValidMenuIdentifier:(id)arg1;
+ (BOOL)menuBarBuilt;
+ (void)setMenuBarBuilt:(BOOL)arg1;
+ (id)mainMenu;
@property(nonatomic) BOOL menuChangeShouldRebuildMenu; // @synthesize menuChangeShouldRebuildMenu=_menuChangeShouldRebuildMenu;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long type; // @synthesize type;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)_validate;
- (id)initWithTitle:(id)arg1;
- (id)init;
@property(copy, nonatomic) NSArray *items;
- (void)deleteStandardItems:(id)arg1;
- (void)insertItems:(id)arg1 afterStandardItem:(id)arg2;
- (void)insertItems:(id)arg1 atBeginningOfMenu:(id)arg2;
- (void)insertMenu:(id)arg1 afterStandardMenu:(id)arg2;
- (void)_recursivelySetMenuChangeShouldRebuildMenu;
- (double)forwardingInterposableRunLoopTimeOut;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

