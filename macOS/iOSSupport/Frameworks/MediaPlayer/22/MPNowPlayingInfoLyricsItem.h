//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPNowPlayingInfoLyricsItemToken, NSString;

@interface MPNowPlayingInfoLyricsItem : NSObject
{
    void *_mediaRemoteLyricsItem;
}

@property(readonly, nonatomic) void *mediaRemoteLyricsItem; // @synthesize mediaRemoteLyricsItem=_mediaRemoteLyricsItem;
@property(readonly, nonatomic) MPNowPlayingInfoLyricsItemToken *token;
@property(readonly, nonatomic) BOOL userProvided;
@property(readonly, nonatomic) NSString *lyrics;
- (void)dealloc;
- (id)initWithMediaRemoteLyricsItem:(void *)arg1;
- (id)initWithLyrics:(id)arg1 userProvided:(BOOL)arg2 token:(id)arg3;
- (id)initWithLyrics:(id)arg1 userProvided:(BOOL)arg2;

@end

