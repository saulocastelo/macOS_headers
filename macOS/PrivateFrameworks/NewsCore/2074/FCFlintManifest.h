//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCAssetHandle, NSArray, NSString;

@interface FCFlintManifest : NSObject
{
    NSString *_identifier;
    FCAssetHandle *_mainDocumentAssetHandle;
    NSArray *_fontResourceIDs;
}

@property(readonly, nonatomic) NSArray *fontResourceIDs; // @synthesize fontResourceIDs=_fontResourceIDs;
@property(readonly, nonatomic) FCAssetHandle *mainDocumentAssetHandle; // @synthesize mainDocumentAssetHandle=_mainDocumentAssetHandle;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1 mainDocumentAssetHandle:(id)arg2 fontResourceIDs:(id)arg3;

@end

