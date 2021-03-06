//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IEFileSystemItem.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface IEFSIPhotosRoot : IEFileSystemItem
{
    NSMutableArray *navbarPhotoAlbums;
}

- (void).cxx_destruct;
- (BOOL)isMountable;
- (id)mountRelativePath;
- (id)mountableChildren;
- (id)navbarIcon;
- (BOOL)isCachedFileLoaded;
- (BOOL)isDirectory;
- (BOOL)childrenAreLoaded;
- (void)refreshChildren;
- (int)controlViewType;
- (BOOL)hasNavbarChildren;
- (void)reloadDatabase;
- (id)children;
- (id)navbarChildren;
- (void)updateAfterDatabaseLoad;
- (void)loadPhotosDatabaseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithParent:(id)arg1;

@end

