//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IPXPluginManagerDelegate-Protocol.h"

@class IPXPluginManager, IPXSelectedVersions, IPXSelectionLite, NSString;

@interface IPXCreateMenuController : NSObject <IPXPluginManagerDelegate>
{
    CDUnknownBlockType _selectionHandler;
    IPXSelectionLite *_selection;
    IPXSelectedVersions *_selectedVersions;
    IPXPluginManager *_pluginManager;
    unsigned long long _options;
}

+ (id)menuTitleForCategory:(id)arg1;
+ (id)projectCategoryGroupedExtensionsFromExtensions:(id)arg1;
+ (id)extensionIdentifierForUserInfo:(id)arg1 projectCategory:(out id *)arg2;
+ (id)defaultProjectCategory;
+ (id)appStoreMenuItemImage;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) IPXPluginManager *pluginManager; // @synthesize pluginManager=_pluginManager;
- (void).cxx_destruct;
- (void)pluginsDidUpdate;
- (id)_menuItemForExtension:(id)arg1 category:(id)arg2;
- (id)_extensionSystemPreferencesMenuItem;
- (id)_appStoreMenuItem;
- (void)a_createMenuItemExtensionAction:(id)arg1;
- (void)a_openExtensionSystemPreferences:(id)arg1;
- (void)a_openAppStore:(id)arg1;
- (id)_menuItemForCreateCategory:(id)arg1 groupedExtensions:(id)arg2 menuType:(long long)arg3;
- (BOOL)_canCreateSlideshowForCurrentSelection;
- (id)_createMenuWithOptions:(unsigned long long)arg1 title:(id)arg2;
- (id)_menuItemForIdentifier:(long long)arg1;
- (id)_createMenuItemWithTitle:(id)arg1 image:(id)arg2 identifier:(long long)arg3;
- (id)_menuItemWithTitleKey:(id)arg1 imageName:(id)arg2 identifier:(long long)arg3;
- (BOOL)validateMenuItem:(id)arg1;
- (void)a_createMenuItemAction:(id)arg1;
@property(readonly, nonatomic) IPXSelectedVersions *selectedVersions; // @synthesize selectedVersions=_selectedVersions;
- (id)createMenuWithOptions:(unsigned long long)arg1 selection:(id)arg2 selectionHandler:(CDUnknownBlockType)arg3;
- (void)popUpMenuForView:(id)arg1 options:(unsigned long long)arg2 title:(id)arg3 selection:(id)arg4 selectionHandler:(CDUnknownBlockType)arg5;
- (id)initWithExtensionQueryAttributes:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

