//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DBTEAMLOGTeamAuthRoutes, DBTEAMTeamAuthRoutes;

@interface DBTeamBaseClient : NSObject
{
    id <DBTransportClient> _transportClient;
    DBTEAMTeamAuthRoutes *_teamRoutes;
    DBTEAMLOGTeamAuthRoutes *_teamLogRoutes;
}

@property(readonly, nonatomic) DBTEAMLOGTeamAuthRoutes *teamLogRoutes; // @synthesize teamLogRoutes=_teamLogRoutes;
@property(readonly, nonatomic) DBTEAMTeamAuthRoutes *teamRoutes; // @synthesize teamRoutes=_teamRoutes;
- (void).cxx_destruct;
- (id)initWithTransportClient:(id)arg1;

@end

