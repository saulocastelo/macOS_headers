//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSDCanvasDelegate-Protocol.h"

@class KNOffscreenController, KNPlaybackThumbnailGeneratorAsyncThumbnailRequest, KNShow, KNSlideNode, NSMutableOrderedSet, NSString, TSKDocumentRoot;

@interface KNPlaybackThumbnailGenerator : NSObject <TSDCanvasDelegate>
{
    KNShow *_show;
    TSKDocumentRoot *_documentRoot;
    KNOffscreenController *_syncOffscreenController;
    KNOffscreenController *_asyncOffscreenController;
    KNPlaybackThumbnailGeneratorAsyncThumbnailRequest *_currentAsyncThumbnailRequest;
    NSMutableOrderedSet *_pendingAsyncThumbnailRequests;
    struct CGImage *_currentRequestedThumbnail;
    KNSlideNode *_currentRequestedThumbnailSlideNode;
    unsigned long long _currentRequestedThumbnailEventIndex;
    struct CGImage *_lastRequestedThumbnail;
    KNSlideNode *_lastRequestedThumbnailSlideNode;
    unsigned long long _lastRequestedThumbnailEventIndex;
    unsigned long long _thumbnailCacheSeed;
}

- (id)documentRoot;
- (void)didReceiveMemoryWarning;
- (void)p_clearCachedThumbnails;
- (void)p_cancelAsyncThumbnailRequest:(id)arg1;
- (void)cancelAsyncThumbnailRequest:(id)arg1;
- (void)p_finishCurrentAsyncThumbnailRequestWithImage:(struct CGImage *)arg1;
- (void)p_beginCurrentAsyncThumbnailRequest;
- (id)requestThumbnailWithSize:(struct CGSize)arg1 forSlideNode:(id)arg2 eventIndex:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (struct CGImage *)copyThumbnailWithPreferredSize:(struct CGSize)arg1 placeholderSize:(struct CGSize)arg2 forSlideNode:(id)arg3 eventIndex:(unsigned long long)arg4 didReturnThumbnailWithPreferredSize:(char *)arg5;
- (struct CGImage *)copyThumbnailWithSize:(struct CGSize)arg1 forSlideNode:(id)arg2 eventIndex:(unsigned long long)arg3;
- (struct CGImage *)p_copyThumbnailWithSize:(struct CGSize)arg1 forSlideNode:(id)arg2 eventIndex:(unsigned long long)arg3;
- (struct CGImage *)p_copyCachedThumbnailWithSize:(struct CGSize)arg1 forSlideNode:(id)arg2 eventIndex:(unsigned long long)arg3;
- (void)p_removeOldestThumbnailFromCache;
- (void)p_cacheThumbnail:(struct CGImage *)arg1 forSlideNode:(id)arg2 eventIndex:(unsigned long long)arg3 forCacheSeed:(unsigned long long)arg4;
- (void)p_cacheThumbnail:(struct CGImage *)arg1 forSlideNode:(id)arg2 eventIndex:(unsigned long long)arg3;
- (void)dealloc;
- (id)init;
- (id)initWithShow:(id)arg1 documentRoot:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

