//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PLURIArrayWithHashes : NSObject
{
    struct __CFArray *_uris;
    struct __CFArray *_hashes;
    NSMutableArray *_attributeValues;
    NSMutableArray *_relationshipValues;
}

@property(retain, nonatomic) NSMutableArray *relationshipValues; // @synthesize relationshipValues=_relationshipValues;
@property(retain, nonatomic) NSMutableArray *attributeValues; // @synthesize attributeValues=_attributeValues;
@property(nonatomic) struct __CFArray *hashes; // @synthesize hashes=_hashes;
@property(nonatomic) struct __CFArray *uris; // @synthesize uris=_uris;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isUpdate;
@property(readonly, nonatomic) unsigned long long count;
- (id)description;
- (id)initForUpdates:(BOOL)arg1;
- (id)init;

@end

