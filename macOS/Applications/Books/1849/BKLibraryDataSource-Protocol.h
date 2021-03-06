//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BKLibrary, NSArray, NSDictionary, NSManagedObjectContext, NSObject, NSString, NSURL;
@protocol BKLibraryAsset;

@protocol BKLibraryDataSource <NSObject>
@property(readonly) long long coverSourceRank;
@property(readonly) BOOL isEnabled;
@property long long rank;
@property(readonly) NSString *identifier;
@property __weak BKLibrary *library;
- (BOOL)canMakeAssetsLocal;
- (BOOL)canRedownloadAssets;
- (BOOL)prioritizeImport:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)assetForLibraryAsset:(NSObject<BKLibraryAsset> *)arg1 completion:(void (^)(id <BKAsset>, NSError *))arg2;
- (BOOL)resolveLibraryAsset:(NSObject<BKLibraryAsset> *)arg1 completion:(void (^)(id <BKAsset>, NSError *))arg2;
- (BOOL)examineURL:(NSURL *)arg1 completion:(void (^)(id <BKAsset>, NSError *))arg2;
- (BOOL)updateURL:(NSURL *)arg1 completion:(void (^)(id <BKAsset>, NSError *))arg2;
- (BOOL)importURL:(NSURL *)arg1 openInPlace:(BOOL)arg2 options:(NSDictionary *)arg3 completion:(void (^)(id <BKAsset>, NSError *))arg4;
- (BOOL)canImportURL:(NSURL *)arg1 openInPlace:(BOOL)arg2 options:(NSDictionary *)arg3;
- (void)deleteAssets:(NSArray *)arg1 exhaustive:(BOOL)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)bookCoverForLibraryAssetProperties:(NSDictionary *)arg1 size:(struct CGSize)arg2 completion:(void (^)(NSImage *, BKBook *, NSError *))arg3;

@optional
@property(readonly) BOOL processingAuthentication;
@property(readonly) BOOL propagateNilAssetID;
@property(readonly) unsigned long long propagateDataProperties;
- (void)assetPartsForLibraryAsset:(NSObject<BKLibraryAsset> *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)refreshFamily;
- (void)finalizeAuthentication:(NSString *)arg1;
- (void)beginAuthentication:(NSString *)arg1;
- (void)buildRootFolderShorthandMapCompletion:(void (^)(NSDictionary *))arg1;
- (void)migrateWithMoc:(NSManagedObjectContext *)arg1;
- (void)fetchAssetsWithIDs:(NSArray *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchAssetIDsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)fetchAssetsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)assetAccountIdentifiersForAsset:(id <BKLibraryAsset>)arg1 completion:(void (^)(id <BKAssetAccountIdentifiers>, NSError *))arg2;
- (void)updateAsset:(NSObject<BKLibraryAsset> *)arg1 isEphemeral:(BOOL)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)updateAsset:(NSObject<BKLibraryAsset> *)arg1 userEditedTitle:(NSString *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (BOOL)updateAsset:(NSObject<BKLibraryAsset> *)arg1 coverArt:(NSObject *)arg2 completion:(void (^)(id <BKAsset>, NSObject *, NSError *))arg3;
@end

