//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _PFPersistentHistoryModel : NSObject
{
}

+ (void)createModelsWithTombstoneCount:(int)arg1 includeIndexes:(BOOL)arg2;
+ (void)createModelsWithTombstoneCount:(int)arg1;
+ (id)_tombstonesColumnsForEntity:(id)arg1;
+ (id)_tombstonesForEntity:(id)arg1;
+ (BOOL)_hasTombstonesInUserInfo:(id)arg1;
+ (int)_maxCountOfTombstonesInModel:(id)arg1;
+ (void)resetCaches;
+ (id)newPersistentHistorySQLModelForSQLModel:(id)arg1 options:(id)arg2;
+ (id)newPersistentHistoryManagedObjectModelForSQLModel:(id)arg1 options:(id)arg2;

@end

