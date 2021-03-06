//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalPersistenceMonitor.h>

@interface CalAlertChangeMonitor : CalPersistenceMonitor
{
}

+ (void)completelyDisableAlertsInThisProcess;
+ (id)blackListedProperties;
+ (id)defaultMonitor;
- (void)performStartRemindersNotificationCenterWidget;
- (void)performDeleteMessages:(id)arg1;
- (void)performDeleteAlarms:(id)arg1;
- (void)performBookmarkResolution:(id)arg1;
- (void)performScheduleAlarms:(id)arg1;
- (void)performFindAndScheduleAlarms:(id)arg1;
- (BOOL)_managedTask:(id)arg1 matchesWidgetPredicateForDate:(id)arg2;
- (void)_messageTraceReminderTypeCreated:(id)arg1 inContext:(id)arg2 changedValues:(id)arg3;
- (BOOL)_areChangedValuesTrackedForReminderCreation:(id)arg1;
- (void)_messageTraceReminderModified:(id)arg1;
- (void)managedObjectContextDidSave:(id)arg1;
- (void)managedObjectContextWillSave:(id)arg1;
- (BOOL)isInterestedInContext:(id)arg1;

@end

