//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOCompanionRouteContext;

@interface MKURLContext : NSObject
{
    BOOL _originatedFromWatch;
    GEOCompanionRouteContext *_companionRouteContext;
}

@property(readonly, nonatomic) BOOL originatedFromWatch; // @synthesize originatedFromWatch=_originatedFromWatch;
@property(readonly, copy, nonatomic) GEOCompanionRouteContext *companionRouteContext; // @synthesize companionRouteContext=_companionRouteContext;
- (void).cxx_destruct;
- (id)initWithOriginatedFromWatch:(BOOL)arg1 companionRouteContext:(id)arg2;

@end

