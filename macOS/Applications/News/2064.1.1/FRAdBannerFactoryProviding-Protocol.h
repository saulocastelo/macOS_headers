//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ADLayoutOptions, FRBannerView, NSSet, NSString;
@protocol ADBannerViewDelegate, FRFeedAdInventoryDelegate;

@protocol FRAdBannerFactoryProviding <NSObject>
@property(readonly, nonatomic) NSSet *context;
@property(readonly, copy, nonatomic) NSString *tileIdentifier;
@property(readonly, copy, nonatomic) NSString *uniqueRequestIdentifier;
@property(readonly, nonatomic) id <FRFeedAdInventoryDelegate> adInventoryDelegate;
- (FRBannerView *)buildBannerViewWithDelegate:(id <ADBannerViewDelegate>)arg1 layoutOptions:(ADLayoutOptions *)arg2;
@end

