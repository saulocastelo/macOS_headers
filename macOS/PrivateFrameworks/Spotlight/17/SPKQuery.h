//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSObject<SPKQueryDelegate>, NSString, PRSRankingItemRanker;

@interface SPKQuery : NSObject
{
    NSMutableArray *_childQueries;
    double _startTime;
    BOOL _extensionQuery;
    int _queryState;
    unsigned long long _queryOptions;
    unsigned long long _queryId;
    unsigned long long _queryGroupId;
    NSString *_userQueryString;
    NSObject<SPKQueryDelegate> *_delegate;
    PRSRankingItemRanker *_ranker;
    SPKQuery *_parentQuery;
    double _queryStartTime;
    NSString *_keyboardLanguage;
    CDUnknownBlockType _clientResponseHandler;
    NSString *_internalUnmodifiedUserQueryString;
}

+ (BOOL)isQuerySupported:(unsigned long long)arg1;
+ (void)initialize;
@property(retain) NSString *internalUnmodifiedUserQueryString; // @synthesize internalUnmodifiedUserQueryString=_internalUnmodifiedUserQueryString;
@property(copy) CDUnknownBlockType clientResponseHandler; // @synthesize clientResponseHandler=_clientResponseHandler;
@property(readonly, getter=isExtensionQuery) BOOL extensionQuery; // @synthesize extensionQuery=_extensionQuery;
@property int queryState; // @synthesize queryState=_queryState;
@property(retain) NSString *keyboardLanguage; // @synthesize keyboardLanguage=_keyboardLanguage;
@property double queryStartTime; // @synthesize queryStartTime=_queryStartTime;
@property __weak SPKQuery *parentQuery; // @synthesize parentQuery=_parentQuery;
@property(readonly) PRSRankingItemRanker *ranker; // @synthesize ranker=_ranker;
@property(nonatomic) __weak NSObject<SPKQueryDelegate> *delegate; // @synthesize delegate=_delegate;
@property(readonly) NSString *userQueryString; // @synthesize userQueryString=_userQueryString;
@property(readonly) unsigned long long queryGroupId; // @synthesize queryGroupId=_queryGroupId;
@property(readonly) unsigned long long queryId; // @synthesize queryId=_queryId;
@property unsigned long long queryOptions; // @synthesize queryOptions=_queryOptions;
- (void).cxx_destruct;
@property(readonly, getter=isDictionaryQuery) BOOL dictionaryQuery;
@property(readonly) BOOL supportsRefinement;
@property(readonly, getter=isCalculatorQuery) BOOL calculatorQuery;
@property(readonly, getter=isApplicationQuery) BOOL applicationQuery;
@property(readonly, getter=isCoreSpotlightQuery) BOOL coreSpotlightQuery;
@property(readonly, getter=isDocumentQuery) BOOL documentQuery;
@property(readonly, getter=isURLQuery) BOOL urlQuery;
@property(readonly, getter=isParsecQuery) BOOL parsecQuery;
- (void)_queryDidComplete;
- (void)_queryWillStart;
- (double)startTime;
- (void)cancel;
- (void)start;
- (BOOL)completedGather;
- (BOOL)isFinished;
- (BOOL)isCanceled;
- (BOOL)isCompleted;
- (BOOL)isStarted;
- (id)getQueryRankingConfigurationWithRanker:(id)arg1 spotlightQuery:(id)arg2;
- (void)addChildQuery:(id)arg1;
@property(readonly) NSArray *childQueries;
@property(readonly) CDUnknownBlockType responseHandler;
@property(retain) NSString *unmodifiedUserQueryString;
- (id)description;
- (id)initWithUserQuery:(id)arg1 queryGroupId:(unsigned long long)arg2 options:(unsigned long long)arg3 keyboardLanguage:(id)arg4;
- (id)initWithUserQuery:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithUserQuery:(id)arg1;
- (id)initWithUserQuery:(id)arg1 queryGroupId:(unsigned long long)arg2;
- (BOOL)needsIO;
- (void)setRankingQueries:(id)arg1;

@end

