//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SearchFoundation/SFMoreResults.h>

@class NSURL, NSXPCListenerEndpoint, PARSessionConfiguration;

@interface PARAsyncMoreResults : SFMoreResults
{
    NSXPCListenerEndpoint *_endpoint;
    PARSessionConfiguration *_configuration;
    double _scale;
    NSURL *_moreResultsURL;
    unsigned long long _queryId;
    unsigned long long _clientQueryId;
}

+ (BOOL)supportsSecureCoding;
+ (id)moreResults:(id)arg1 label:(id)arg2 session:(id)arg3 scale:(double)arg4 queryId:(unsigned long long)arg5 clientQueryId:(unsigned long long)arg6;
+ (id)moreResults:(id)arg1 label:(id)arg2 session:(id)arg3 scale:(double)arg4 queryId:(unsigned long long)arg5;
@property(readonly, nonatomic) unsigned long long clientQueryId; // @synthesize clientQueryId=_clientQueryId;
@property(readonly, nonatomic) unsigned long long queryId; // @synthesize queryId=_queryId;
@property(readonly, copy, nonatomic) NSURL *moreResultsURL; // @synthesize moreResultsURL=_moreResultsURL;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) PARSessionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) NSXPCListenerEndpoint *endpoint; // @synthesize endpoint=_endpoint;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

