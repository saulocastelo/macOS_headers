//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MusicLibrary/ML3DatabaseImport.h>

@class NSData, NSFileHandle, NSString;

@interface ML3MutableDatabaseImport : ML3DatabaseImport
{
}

@property(nonatomic, getter=isSuspendable) BOOL suspendable; // @dynamic suspendable;
@property(copy, nonatomic) NSString *syncLibraryID; // @dynamic syncLibraryID;
@property(nonatomic) BOOL isServerImport; // @dynamic isServerImport;
@property(nonatomic, getter=isPendingMatch) BOOL pendingMatch; // @dynamic pendingMatch;
@property(nonatomic) BOOL playlistsAreLibraryOwnedContent; // @dynamic playlistsAreLibraryOwnedContent;
@property(nonatomic) BOOL tracksAreLibraryOwnedContent; // @dynamic tracksAreLibraryOwnedContent;
@property(nonatomic) unsigned int homeSharingBasePlaylistID; // @dynamic homeSharingBasePlaylistID;
@property(nonatomic) long long preferredVideoQuality; // @dynamic preferredVideoQuality;
@property(nonatomic) long long storeAccountID; // @dynamic storeAccountID;
@property(nonatomic, getter=isSagaEnabled) BOOL sagaEnabled; // @dynamic sagaEnabled;
@property(nonatomic, getter=isResetSync) BOOL resetSync; // @dynamic resetSync;
@property(copy, nonatomic) NSString *syncAnchor; // @dynamic syncAnchor;
@property(retain, nonatomic) NSFileHandle *fileHandle; // @dynamic fileHandle;
@property(copy, nonatomic) NSData *playlistData; // @dynamic playlistData;
@property(copy, nonatomic) NSData *trackData; // @dynamic trackData;
@property(copy, nonatomic) NSString *libraryPath; // @dynamic libraryPath;

@end

