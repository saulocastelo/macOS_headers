//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOSearchResultSection-Protocol.h>

@class NSString;

@interface GEOSearchResultSection : NSObject <GEOSearchResultSection>
{
    long long _cellType;
    NSString *_headerDisplayName;
    NSString *_subHeaderDisplayName;
}

@property(copy, nonatomic) NSString *subHeaderDisplayName; // @synthesize subHeaderDisplayName=_subHeaderDisplayName;
@property(copy, nonatomic) NSString *headerDisplayName; // @synthesize headerDisplayName=_headerDisplayName;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
- (void).cxx_destruct;
- (id)initWithSearchResultSection:(id)arg1;
- (id)init;

@end

