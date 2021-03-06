//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ArchiveFile.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSBundle, NSDictionary, NSImage, NSURL;

@interface Package : ArchiveFile <NSCoding, NSCopying>
{
    NSURL *_privatePackagePayloadURL;
}

+ (BOOL)isOldStylePackageAtURL:(id)arg1;
+ (Class)archiveClassForURL:(id)arg1;
@property(copy, nonatomic) NSURL *privatePackagePayloadURL; // @synthesize privatePackagePayloadURL=_privatePackagePayloadURL;
- (void).cxx_destruct;
- (void)loadPropertiesFromArchive:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)loadPropertiesFromCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)itemBelongsToPackageContents:(id)arg1 belongsToResources:(char *)arg2;
- (id)rootItemFromPayloadWithIncorrectChecksum:(char *)arg1 error:(id *)arg2;
- (BOOL)setFileSizesFromArchiveFileWithError:(id *)arg1;
- (BOOL)setFileAttributesWithError:(id *)arg1;
- (BOOL)askForPackageDiskAndReturnError:(id *)arg1;
- (BOOL)doUnpackItems:(id)arg1 toDirectoryAtURL:(id)arg2 privilegedOpsHandler:(id)arg3 threadingHandler:(id)arg4 error:(id *)arg5;
@property(readonly, nonatomic) BOOL filesAreCompressedSeparately;
@property(readonly, nonatomic) BOOL supportsChecksums;
@property(readonly, nonatomic) BOOL supportsHardLinks;
@property(readonly, copy, nonatomic) NSImage *icon;
@property(readonly, copy, nonatomic) NSDictionary *bundleDictionary;
- (id)infoDictionary;
@property(readonly, copy, nonatomic) NSBundle *bundle;
@property(readonly, copy, nonatomic) NSURL *payloadURL;
- (id)unpackBomFileAndValidateChecksum:(char *)arg1 error:(id *)arg2;
- (BOOL)subclassIsReceipt;
- (BOOL)subclassSupportsInstall;
- (BOOL)loadArchiveInfoAndReturnIncorrectChecksum:(char *)arg1 error:(id *)arg2;
- (BOOL)loadArchiveContentsAndReturnIncorrectChecksum:(char *)arg1 error:(id *)arg2;
- (BOOL)loadArchiveResourcesAndReturnIncorrectChecksum:(char *)arg1 error:(id *)arg2;
- (id)initWithURL:(id)arg1 incorrectChecksums:(id *)arg2 error:(id *)arg3;

@end

