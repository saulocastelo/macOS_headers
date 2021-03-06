//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, NSArray, NSString;
@protocol MKSearchCompleterDelegate;

@interface MKSearchCompleter : NSObject
{
    NSString *_fragment;
    CDStruct_feeb6407 _boundingRegion;
    id <MKSearchCompleterDelegate> _delegate;
    id _context;
    NSString *_identifier;
    long long _entriesType;
    long long _listType;
    double _timeSinceLastInBoundingRegion;
    CLLocation *_deviceLocation;
}

+ (id)alloc;
@property(retain, nonatomic) CLLocation *deviceLocation; // @synthesize deviceLocation=_deviceLocation;
@property(nonatomic) double timeSinceLastInBoundingRegion; // @synthesize timeSinceLastInBoundingRegion=_timeSinceLastInBoundingRegion;
@property(nonatomic) long long listType; // @synthesize listType=_listType;
@property(nonatomic) long long entriesType; // @synthesize entriesType=_entriesType;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id context; // @synthesize context=_context;
@property(nonatomic) __weak id <MKSearchCompleterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) CDStruct_90e2a262 boundingRegion; // @synthesize boundingRegion=_boundingRegion;
@property(copy, nonatomic) NSString *fragment; // @synthesize fragment=_fragment;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *results;
- (void)retry;
- (void)cancel;
- (BOOL)isSearching;
- (BOOL)resultsAreCurrent;
- (id)init;

@end

