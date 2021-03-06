//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _NSPeriodicInvoker;

@interface NSSpeechSynthesizerVars : NSObject
{
    id _delegate;
    struct SpeechChannelRecord *_speechChannel;
    _NSPeriodicInvoker *_speechFeedbackServicesInvoker;
    unsigned int _speechFeedbackServicesRef;
    NSString *_currentVoice;
    float _normalSpeakingRate;
    BOOL _usingDefaultVoice;
    BOOL _usesFeedbackWindow;
    BOOL _speakingSpeechFeedbackServices;
    BOOL _needsResyncWithDefaultVoice;
    BOOL _speechFinishedSuccessfully;
    BOOL _synthesizerIsRetained;
}

+ (id)voiceIdentifierForVoiceCreator:(unsigned int)arg1 voiceID:(unsigned int)arg2;
+ (BOOL)findVoiceByIdentifier:(id)arg1 returningCreator:(unsigned int *)arg2 returningID:(unsigned int *)arg3;
- (id)speechFeedbackServicesInvoker;
- (void)setSpeechFeedbackServicesInvoker:(id)arg1;
- (BOOL)synthesizerIsRetained;
- (void)setSynthesizerIsRetained:(BOOL)arg1;
- (BOOL)speechFinishedSuccessfully;
- (void)setSpeechFinishedSuccessfully:(BOOL)arg1;
- (BOOL)needsResyncWithDefaultVoice;
- (void)setNeedsResyncWithDefaultVoice:(BOOL)arg1;
- (BOOL)speakingSpeechFeedbackServices;
- (void)setSpeakingSpeechFeedbackServices:(BOOL)arg1;
- (BOOL)usesFeedbackWindow;
- (void)setUsesFeedbackWindow:(BOOL)arg1;
- (BOOL)usingDefaultVoice;
- (void)setUsingDefaultVoice:(BOOL)arg1;
- (float)normalSpeakingRate;
- (id)currentVoiceIdentifier;
- (void)setCurrentVoiceIdentifier:(id)arg1;
- (unsigned int)speechFeedbackServicesRef;
- (struct SpeechChannelRecord *)speechChannel;
- (short)setSpeechChannelWithVoiceCreator:(unsigned int)arg1 voiceID:(unsigned int)arg2;
- (short)setSpeechChannelWithVoiceIdentifier:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)finalize;
- (void)dealloc;

@end

