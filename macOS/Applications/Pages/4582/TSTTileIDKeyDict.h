//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPContainedObject.h"

@interface TSTTileIDKeyDict : TSPContainedObject
{
    struct hash_map<unsigned int, SFUtility::ObjcSharedPtr<NSObject>, TSTIntHasher, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, SFUtility::ObjcSharedPtr<NSObject>>>> *mMap;
}

+ (id)p_sharedQueue;
- (long long)count;
- (void)enumerateTilesConcurrentlyUsingBlock:(CDUnknownBlockType)arg1 andWaitForAsyncBlocks:(BOOL)arg2;
- (void)enumerateTilesWithBlock:(CDUnknownBlockType)arg1;
- (void)removeAllTiles;
- (void)removeTileForID:(CDStruct_d65e47c4)arg1;
- (void)setTile:(id)arg1 forID:(CDStruct_d65e47c4)arg2;
- (id)tileForID:(CDStruct_d65e47c4)arg1;
- (void)saveToArchive:(struct TileStorage *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct TileStorage *)arg1 unarchiver:(id)arg2 owner:(id)arg3;
- (void)dealloc;
- (id)initWithOwner:(id)arg1;

@end

