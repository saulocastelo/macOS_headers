//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IIConflictVersionListController;

@interface LgUbiquityImportController : NSObject
{
    IIConflictVersionListController *_cvlc;
}

+ (void)showiCloudPreferences;
+ (BOOL)windowIsOpen;
+ (id)sharedController;
- (void)_performImportFromURL:(id)arg1;
- (int)showResolveWindowForURL:(id)arg1;
- (void)showConflictImportWindowForICloudDriveImport:(id)arg1;
- (void)dealloc;

@end

