//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPSectionedIdentifierListEnumerationResult-Protocol.h>

@class NSString;

@interface _MPSectionedIdentifierListProxyEntry : NSObject <MPSectionedIdentifierListEnumerationResult>
{
    long long _entryType;
}

+ (id)endEntry;
+ (id)startEntry;
@property(readonly, nonatomic) long long entryType; // @synthesize entryType=_entryType;
@property(readonly, nonatomic) long long branchDepth;
- (id)trackingEntryResult;
- (id)itemResult;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

