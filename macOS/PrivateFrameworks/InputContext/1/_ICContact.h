//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface _ICContact : NSObject
{
    NSString *_firstName;
    NSString *_phoneticFirstName;
    NSString *_middleName;
    NSString *_phoneticMiddleName;
    NSString *_lastName;
    NSString *_phoneticLastName;
    NSString *_organizationName;
    NSString *_jobTitle;
    NSString *_nickname;
    NSArray *_relations;
    NSArray *_streets;
    NSArray *_cities;
    double _score;
}

@property(readonly, nonatomic) double score; // @synthesize score=_score;
@property(readonly, nonatomic) NSArray *cities; // @synthesize cities=_cities;
@property(readonly, nonatomic) NSArray *streets; // @synthesize streets=_streets;
@property(readonly, nonatomic) NSArray *relations; // @synthesize relations=_relations;
@property(readonly, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(readonly, nonatomic) NSString *jobTitle; // @synthesize jobTitle=_jobTitle;
@property(readonly, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(readonly, nonatomic) NSString *phoneticLastName; // @synthesize phoneticLastName=_phoneticLastName;
@property(readonly, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly, nonatomic) NSString *phoneticMiddleName; // @synthesize phoneticMiddleName=_phoneticMiddleName;
@property(readonly, nonatomic) NSString *middleName; // @synthesize middleName=_middleName;
@property(readonly, nonatomic) NSString *phoneticFirstName; // @synthesize phoneticFirstName=_phoneticFirstName;
@property(readonly, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
- (void).cxx_destruct;
- (id)flatten;
- (id)initWithFirstName:(id)arg1 phoneticFirstName:(id)arg2 middleName:(id)arg3 phoneticMiddleName:(id)arg4 lastName:(id)arg5 phoneticLastName:(id)arg6 organizationName:(id)arg7 jobTitle:(id)arg8 nickname:(id)arg9 relations:(id)arg10 streets:(id)arg11 cities:(id)arg12 score:(double)arg13;

@end

