//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RDLibrarySearchManager : NSObject
{
}

+ (void)notifyIndexingComplete:(CDUnknownBlockType)arg1;
+ (void)invalidateSearchIndexInAllVersionsForLocaleChange:(id)arg1;
+ (void)invalidateSearchIndexInAllVersions:(id)arg1;
+ (void)invalidateSceneClassifiersOnAllVersions:(id)arg1;
+ (void)invalidateTokenTypeInAllVersions:(int)arg1 inDatabase:(id)arg2;
+ (void)invalidateTokenTypesInAllVersions:(id)arg1 inDatabase:(id)arg2;
+ (void)invalidateGeoSearchIndexInVersion:(id)arg1;
+ (void)invalidateTokenType:(int)arg1 inVersions:(id)arg2;
+ (void)invalidateSearchIndexInVersions:(id)arg1;
+ (void)invalidateTokenTypes:(id)arg1 inVersions:(id)arg2;
+ (void)updateSearchIndex:(id)arg1;
+ (void)eraseSearchIndex:(id)arg1;
+ (void)prepareForUpgrade:(id)arg1;
+ (id)tokensForString:(id)arg1 inDatabase:(id)arg2 ignoreSubTokens:(BOOL)arg3;
+ (unsigned long long)estimatedVersionsRemainingToIndex;
+ (void)setSearchIndexDataVersion:(long long)arg1 database:(id)arg2;
+ (long long)searchIndexDataVersion:(id)arg1;
- (id)startSearch:(id)arg1 inDatabase:(id)arg2;
- (Class)searchResultClassForMemoryWithMatchTypes:(id)arg1;
- (Class)searchResultClassForAlbumWithMatchTypes:(id)arg1;
- (Class)searchResultClassForVersionsWithMatchTypes:(id)arg1;

@end

