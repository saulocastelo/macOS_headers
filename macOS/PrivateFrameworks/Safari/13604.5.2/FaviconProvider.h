//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/FaviconProviderHistoryBookmarkAdapterDelegate-Protocol.h>
#import <Safari/WBSSiteMetadataProvider-Protocol.h>

@class FaviconProviderHistoryBookmarkAdapter, FaviconProviderIconControllerDatabaseStore, FaviconProviderPersistenceController, NSCache, NSCalendar, NSMutableDictionary, NSMutableSet, NSString, NSURL, NSUserDefaults;
@protocol OS_dispatch_queue, WBSSiteMetadataProviderDelegate;

__attribute__((visibility("hidden")))
@interface FaviconProvider : NSObject <FaviconProviderHistoryBookmarkAdapterDelegate, WBSSiteMetadataProvider>
{
    NSMutableDictionary *_hostsToRequestsMap;
    NSCache *_responseCache;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableSet *_knownURLsDuringMigration;
    NSMutableDictionary *_urlsToFaviconRecordsSavedDuringMigration;
    FaviconProviderPersistenceController *_persistenceController;
    FaviconProviderHistoryBookmarkAdapter *_historyAndBookmarksAdapter;
    FaviconProviderIconControllerDatabaseStore *_legacyDatabaseController;
    NSURL *_faviconCacheBaseURL;
    NSCalendar *_calendar;
    NSURL *_iconDatabaseURL;
    NSUserDefaults *_defaults;
    long long _providerState;
    id <WBSSiteMetadataProviderDelegate> _providerDelegate;
}

+ (id)new;
@property(nonatomic) __weak id <WBSSiteMetadataProviderDelegate> providerDelegate; // @synthesize providerDelegate=_providerDelegate;
- (void).cxx_destruct;
- (void)faviconProviderHistoryBookmarkAdapter:(id)arg1 didFlushURLString:(id)arg2;
- (void)faviconProviderHistoryBookmarkAdapter:(id)arg1 didEstablishKnownURLStrings:(id)arg2;
- (BOOL)_shouldCoalesceKnownURLsDuringMigration;
- (id)_defaultFaviconForSize:(struct CGSize)arg1;
- (void)_getIconForRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_prepareAndSendResponseForRequests:(id)arg1 forceDidReceiveNewData:(BOOL)arg2;
- (void)_updateOutstandingRequestsForPageURL:(id)arg1 forceDidReceiveNewData:(BOOL)arg2;
- (id)_requestsForHost:(id)arg1;
- (void)_registerRequest:(id)arg1;
- (id)_hostFromRequest:(id)arg1;
- (id)_responseCacheKeyForRequest:(id)arg1;
- (id)_responseDictionaryKeyForRequest:(id)arg1;
- (void)_removeCachedResponsesForRequest:(id)arg1;
- (void)_removeCachedResponsesForURL:(id)arg1;
- (void)_addCachedResponse:(id)arg1 forRequest:(id)arg2;
- (id)_cachedResponseForRequest:(id)arg1;
- (void)savePendingChangesBeforeTermination;
- (void)emptyCaches;
- (void)stopWatchingUpdatesForRequest:(id)arg1;
- (id)responseForRequest:(id)arg1 willProvideUpdates:(char *)arg2;
- (void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(BOOL)arg2;
- (BOOL)canHandleRequest:(id)arg1;
- (void)_finishSettingUpWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_removeIconControllerSQLiteFilesIfNeeded;
- (void)_shutDownLegacyDatabaseControllerIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_cleanUpAfterMigrationIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_openPersistenceWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_migrateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_saveImageData:(id)arg1 iconURL:(id)arg2 pageURL:(id)arg3 originalPageURL:(id)arg4;
- (void)saveFaviconImageData:(id)arg1 iconURL:(id)arg2 pageURL:(id)arg3 originalPageURL:(id)arg4;
- (void)shouldIconDataBeSavedForIconWithPageURL:(id)arg1 originalPageURL:(id)arg2 iconURL:(id)arg3 mimeType:(id)arg4 size:(struct CGSize)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)setUpWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithIconDatabasePathURL:(id)arg1 persistenceBaseURL:(id)arg2 persistenceName:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

