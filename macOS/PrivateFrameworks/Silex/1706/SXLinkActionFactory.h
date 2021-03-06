//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXActionFactory-Protocol.h>

@class NSString;
@protocol SXURLActionFactory;

@interface SXLinkActionFactory : NSObject <SXActionFactory>
{
    id <SXURLActionFactory> _URLActionFactory;
}

@property(readonly, nonatomic) id <SXURLActionFactory> URLActionFactory; // @synthesize URLActionFactory=_URLActionFactory;
- (void).cxx_destruct;
- (id)actionForURL:(id)arg1;
- (id)actionForAddition:(id)arg1;
- (id)initWithURLActionFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

