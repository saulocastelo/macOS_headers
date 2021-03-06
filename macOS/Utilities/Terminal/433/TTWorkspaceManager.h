//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, TTWorkspace;

@interface TTWorkspaceManager : NSObject
{
    NSMutableArray *_workspaces;
    TTWorkspace *_startupWorkspace;
    BOOL _isLoadingFromDefaults;
}

+ (id)sharedWorkspaceManager;
- (id)workspaceSavePanel;
- (void)setStartupWorkspace:(id)arg1;
- (id)startupWorkspace;
- (id)uniqueWorkspaceNameWithBase:(id)arg1;
- (void)setWorkspace:(id)arg1 forName:(id)arg2;
- (id)workspaceWithName:(id)arg1;
- (void)replaceObjectInWorkspacesAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectFromWorkspacesAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inWorkspacesAtIndex:(unsigned long long)arg2;
- (unsigned long long)countOfWorkspaces;
- (void)setWorkspaces:(id)arg1;
- (id)workspaces;
- (void)synchronize;
- (void)dealloc;
- (id)init;
- (void)loadFromDefaults:(id)arg1;
- (void)saveToDefaults:(id)arg1;

@end

