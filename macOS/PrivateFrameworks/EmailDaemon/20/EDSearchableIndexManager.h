//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EDMessageChangeHookResponder.h"
#import "EFLoggable.h"

@class EDPersistenceDatabase, EDSearchableIndex, EDSearchableIndexPersistence, EDSearchableIndexScheduler, NSString;

@interface EDSearchableIndexManager : NSObject <EFLoggable, EDMessageChangeHookResponder>
{
    BOOL _needsReindex;
    BOOL _needsToScheduleRecurringActivity;
    EDPersistenceDatabase *_database;
}

+ (id)log;
@property(readonly, nonatomic) EDPersistenceDatabase *database; // @synthesize database=_database;
@property(nonatomic) BOOL needsToScheduleRecurringActivity; // @synthesize needsToScheduleRecurringActivity=_needsToScheduleRecurringActivity;
@property(nonatomic) BOOL needsReindex; // @synthesize needsReindex=_needsReindex;
- (void).cxx_destruct;
- (id)_filterInMessagesWithValidPersistentIDsFromMessages:(id)arg1;
- (void)_removeItemsForIndexableMessages:(id)arg1;
- (void)persistenceDidAddLabels:(id)arg1 removeLabels:(id)arg2 messages:(id)arg3 generationWindow:(id)arg4;
- (void)persistenceDidChangeFlags:(id)arg1 messages:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceDidDeleteMessages:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceDidUpdateData:(id)arg1 message:(id)arg2;
- (void)persistenceDidAddMessages:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceDidFinishUpdates;
- (void)persistenceWillBeginUpdates;
- (void)setNeedsReindex;
- (void)removeAllItemsFromIndexAndWait:(BOOL)arg1 skipInvalidation:(BOOL)arg2;
- (void)_removeAllItemsFromIndexAndWait:(BOOL)arg1 options:(unsigned long long)arg2;
- (void)enableIndexingAndBeginScheduling:(BOOL)arg1 budgetConfiguration:(id)arg2;
- (void)enableIndexingAndBeginScheduling:(BOOL)arg1;
@property(readonly, nonatomic) EDSearchableIndexScheduler *scheduler;
@property(readonly, nonatomic) EDSearchableIndexPersistence *persistence;
@property(readonly, nonatomic) EDSearchableIndex *index;
- (void)scheduleRecurringActivity;
- (id)initWithDatabase:(id)arg1 hookResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

