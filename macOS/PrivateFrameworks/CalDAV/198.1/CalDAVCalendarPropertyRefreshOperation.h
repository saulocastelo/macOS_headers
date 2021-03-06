//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalDAV/CalDAVOperation.h>

#import <CalDAV/CoreDAVContainerInfoSyncProvider-Protocol.h>
#import <CalDAV/CoreDAVContainerInfoTaskGroupDelegate-Protocol.h>
#import <CalDAV/CoreDAVPropPatchTaskDelegate-Protocol.h>
#import <CalDAV/CoreDAVTaskGroupDelegate-Protocol.h>

@class NSError, NSMutableDictionary, NSMutableSet, NSString;
@protocol CalDAVCalendarPropertyRefreshDelegate;

@interface CalDAVCalendarPropertyRefreshOperation : CalDAVOperation <CoreDAVContainerInfoTaskGroupDelegate, CoreDAVContainerInfoSyncProvider, CoreDAVPropPatchTaskDelegate, CoreDAVTaskGroupDelegate>
{
    NSError *_savedError;
    NSMutableDictionary *_ctags;
    NSMutableDictionary *_syncTokens;
    BOOL _forceClearCalendarHomeSyncToken;
    NSString *_calendarHomeSyncToken;
    BOOL _useCalendarHomeSyncReport;
    NSMutableDictionary *_pathToLocalCalendar;
    NSMutableSet *_localCalendarsWithNoPath;
    NSMutableSet *_updatedCalendars;
    BOOL _didFinish;
    BOOL _didMakeCalendars;
    BOOL _isSecondRefresh;
    int _nextCalendarOrder;
    struct dispatch_group_s *_outstandingTasksGroup;
}

@property(nonatomic) BOOL useCalendarHomeSyncReport; // @synthesize useCalendarHomeSyncReport=_useCalendarHomeSyncReport;
@property(retain, nonatomic) NSString *calendarHomeSyncToken; // @synthesize calendarHomeSyncToken=_calendarHomeSyncToken;
- (void)containerInfoSyncTask:(id)arg1 completedWithNewSyncToken:(id)arg2 error:(id)arg3;
- (void)containerInfoSyncTask:(id)arg1 retrievedAddedOrModifiedContainers:(id)arg2 removedContainerURLs:(id)arg3;
- (void)containerInfoTask:(id)arg1 completedWithContainers:(id)arg2 error:(id)arg3;
- (void)_getDefaultCalendarsTasksIfNeededForPrincipal:(id)arg1;
- (id)_getDefaultMkCalendarForPrincipalTaskGroup:(id)arg1 isEventCalendar:(BOOL)arg2;
- (void)_continueHandleContainerInfoTask:(id)arg1 completedWithContainers:(id)arg2 error:(id)arg3;
- (BOOL)_handleUpdateForCalendar:(id)arg1;
- (void)_initializePrincipalCalendarCache;
- (id)_getMkcalendarTaskGroupForCalendar:(id)arg1;
- (id)_generateTimeZoneString:(id)arg1;
- (id)_getSetPropertyStringTask:(id)arg1 forName:(id)arg2 andNamespace:(id)arg3 atURL:(id)arg4;
- (int)_sharingStatusForContainer:(id)arg1;
- (void)refreshCalendarProperties;
- (void)_sendShareActionTasks;
- (void)_prepareCalendarsBeforeRefresh;
- (void)_handleCalendarPublish;
- (void)_sendAddsForCalendars;
- (void)_sendDeletesForCalendars;
- (void)_reallyRefreshCalendarProperties;
- (void)_finishRefresh;
- (void)dealloc;
- (id)initWithPrincipal:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <CalDAVCalendarPropertyRefreshDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

