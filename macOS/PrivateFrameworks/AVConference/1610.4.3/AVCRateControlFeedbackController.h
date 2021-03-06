//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCStatisticsCollector;

__attribute__((visibility("hidden")))
@interface AVCRateControlFeedbackController : NSObject
{
    unsigned int _mode;
    AVCStatisticsCollector *_statisticsCollector;
    unsigned int _feedbackMessageCount;
    unsigned int _remoteTotalPacketReceivedCount;
    BOOL _isFeedbackReceived;
    BOOL _didRegisterPacketReceivedHandler;
    unsigned int _maxVideoBurstyLossCache;
    unsigned int _maxAudioConsecutiveLossCache;
}

@property(nonatomic) unsigned int maxAudioConsecutiveLossCache; // @synthesize maxAudioConsecutiveLossCache=_maxAudioConsecutiveLossCache;
@property(nonatomic) unsigned int maxVideoBurstyLossCache; // @synthesize maxVideoBurstyLossCache=_maxVideoBurstyLossCache;
@property(nonatomic) unsigned int mode; // @synthesize mode=_mode;
- (void)setPacketReceivedStatistics:(CDStruct_cbf42801)arg1;
- (_Bool)detectOutOfOrderFeedbackMessage:(CDStruct_0ee80423)arg1;
- (BOOL)translateMediaControlInfo:(void *)arg1 feedbackMessage:(CDStruct_0ee80423 *)arg2;
- (CDStruct_0ee80423)translateAFRCFeedbackMessage:(struct tagAFRCFB)arg1;
- (CDStruct_0ee80423)translateRateControlFeedbackMessageFromData:(id)arg1;
- (id)translateRateControlDataWithFeedbackMessage:(CDStruct_0ee80423)arg1;
- (BOOL)processRateControlProbingMessage:(CDStruct_4c345eff)arg1 type:(unsigned int)arg2 error:(id *)arg3;
- (BOOL)processRateControlFeedbackMessage:(CDStruct_0ee80423)arg1 type:(unsigned int)arg2 error:(id *)arg3;
- (BOOL)getVCStatisticsFeedbackMessage:(CDStruct_b21f1e06 *)arg1 time:(double)arg2;
- (BOOL)getRateControlFeedbackMessage:(id *)arg1 type:(unsigned int)arg2 metaData:(id *)arg3 error:(id *)arg4;
- (BOOL)processFeedbackMessage:(id)arg1 type:(unsigned int)arg2 metaData:(id)arg3 error:(id *)arg4;
- (BOOL)getFeedbackMessage:(id *)arg1 type:(unsigned int)arg2 metaData:(id *)arg3 error:(id *)arg4;
- (id)initWithStatisticsCollector:(id)arg1;

@end

