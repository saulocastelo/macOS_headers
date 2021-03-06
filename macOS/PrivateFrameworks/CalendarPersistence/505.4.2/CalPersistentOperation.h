//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarPersistence/CalOperation.h>

#import <CalendarPersistence/NSSecureCoding-Protocol.h>

@class NSManagedObjectID;

@interface CalPersistentOperation : CalOperation <NSSecureCoding>
{
    NSManagedObjectID *_managedObjectID;
    long long _sequenceNumber;
}

+ (id)managedObjectIDsForURIRepresentations:(id)arg1;
+ (id)managedObjectIDForURIRepresentation:(id)arg1;
+ (id)dearchive:(id)arg1;
+ (id)archive:(id)arg1 inContext:(id)arg2;
+ (BOOL)supportsSecureCoding;
@property long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(retain) NSManagedObjectID *managedObjectID; // @synthesize managedObjectID=_managedObjectID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

