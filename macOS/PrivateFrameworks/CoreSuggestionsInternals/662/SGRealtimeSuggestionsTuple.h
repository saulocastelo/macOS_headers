//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SGRealtimeSuggestionsTuple : NSObject
{
    NSArray *_contacts;
    NSArray *_events;
    NSArray *_invalidatedIdentifiers;
}

@property(retain) NSArray *invalidatedIdentifiers; // @synthesize invalidatedIdentifiers=_invalidatedIdentifiers;
@property(retain) NSArray *events; // @synthesize events=_events;
@property(retain) NSArray *contacts; // @synthesize contacts=_contacts;
- (void).cxx_destruct;
- (id)combinedSuggestions;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)suggestionsCount;

@end

