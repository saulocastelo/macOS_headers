//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SampleAnalysis/SAJSONSerialization-Protocol.h>
#import <SampleAnalysis/SALibraryCache-Protocol.h>

@class NSArray, NSString, NSUUID;

@interface SAKernelCache : NSObject <SAJSONSerialization, SALibraryCache>
{
    NSUUID *_uuid;
    NSArray *_binaryLoadInfos;
    unsigned long long _textSegmentsStartAddress;
    unsigned long long _textSegmentsEndAddress;
    unsigned long long _loadAddress;
}

+ (void)clearCaches;
+ (id)kernelCacheWithUUID:(id)arg1 loadAddress:(unsigned long long)arg2;
+ (void)_doKernelCachesWork:(CDUnknownBlockType)arg1;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const CDStruct_0b74e904 *)arg1 bufferLength:(unsigned long long)arg2;
+ (id)classDictionaryKey;
@property(readonly) unsigned long long loadAddress; // @synthesize loadAddress=_loadAddress;
@property(retain) NSArray *binaryLoadInfos; // @synthesize binaryLoadInfos=_binaryLoadInfos;
@property(readonly) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long textSegmentsEndAddress; // @synthesize textSegmentsEndAddress=_textSegmentsEndAddress;
@property(readonly) unsigned long long textSegmentsStartAddress; // @synthesize textSegmentsStartAddress=_textSegmentsStartAddress;
- (BOOL)matchesUUID:(unsigned char [16])arg1 loadAddress:(unsigned long long)arg2;
- (id)initWithUUID:(id)arg1 loadAddress:(unsigned long long)arg2;
- (void)writeJSONDictionaryEntriesToStream:(id)arg1;
- (void)populateReferencesUsingBuffer:(const CDStruct_0b74e904 *)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(struct NSMutableDictionary *)arg3 andDataBufferDictionary:(struct NSMutableDictionary *)arg4;
- (void)addSelfToSerializationDictionary:(struct NSMutableDictionary *)arg1;
- (BOOL)addSelfToBuffer:(CDStruct_0b74e904 *)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary *)arg3;
- (unsigned long long)sizeInBytesForSerializedVersion;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

