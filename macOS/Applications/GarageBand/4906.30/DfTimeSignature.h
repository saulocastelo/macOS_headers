//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DfDocument;

@interface DfTimeSignature : NSObject
{
    DfDocument *_document;
    CDStruct_e28e794b _signature;
    long long _clock;
    long long _barNumber;
    long long _barLength;
    BOOL _selected;
}

- (BOOL)selected;
- (id)displayString;
- (id)description;
- (long long)barLength;
- (long long)barNumber;
- (long long)clock;
- (CDStruct_e28e794b)signature;
- (void)dealloc;
- (id)initWithDocument:(id)arg1 signature:(CDStruct_e28e794b)arg2 clock:(long long)arg3 barNumber:(long long)arg4 barLength:(long long)arg5;

@end

