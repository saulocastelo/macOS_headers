//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSData, NSDate, NSNumber, NSString;

@protocol MQTTFlow
@property(retain, nonatomic) NSDate *deadline;
@property(retain, nonatomic) NSData *data;
@property(retain, nonatomic) NSString *topic;
@property(retain, nonatomic) NSNumber *messageId;
@property(retain, nonatomic) NSNumber *qosLevel;
@property(retain, nonatomic) NSNumber *commandType;
@property(retain, nonatomic) NSNumber *retainedFlag;
@property(retain, nonatomic) NSNumber *incomingFlag;
@property(retain, nonatomic) NSString *clientId;
@end

