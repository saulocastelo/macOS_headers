//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNChangeHistoryEventVisitor.h"

@class NSMutableArray, NSString;

@interface CalChangeHistoryCollector : NSObject <CNChangeHistoryEventVisitor>
{
    BOOL _didReset;
    BOOL _hasChanges;
    NSMutableArray *_insertedContacts;
    NSMutableArray *_updatedContacts;
    NSMutableArray *_deletedContactIdentifiers;
}

@property(retain) NSMutableArray *deletedContactIdentifiers; // @synthesize deletedContactIdentifiers=_deletedContactIdentifiers;
@property(retain) NSMutableArray *updatedContacts; // @synthesize updatedContacts=_updatedContacts;
@property(retain) NSMutableArray *insertedContacts; // @synthesize insertedContacts=_insertedContacts;
@property BOOL hasChanges; // @synthesize hasChanges=_hasChanges;
@property BOOL didReset; // @synthesize didReset=_didReset;
- (void).cxx_destruct;
- (void)visitDeleteContactEvent:(id)arg1;
- (void)visitUpdateContactEvent:(id)arg1;
- (void)visitAddContactEvent:(id)arg1;
- (void)visitDropEverythingEvent:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

