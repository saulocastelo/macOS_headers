//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class VCPAudioClassifier, VCPLoudnessAnalyzer, VCPVoiceDetector;

@interface VCPAudioAnalyzer : NSObject
{
    void *_inputBuffer;
    struct AudioTimeStamp _audioTimestamp;
    struct AudioBufferList _audioBufferList;
    int _sampleBatchSize;
    VCPVoiceDetector *_voiceDetector;
    VCPAudioClassifier *_audioClassifier;
    VCPLoudnessAnalyzer *_loudnessAnalyzer;
    int _bufferedSamples;
    BOOL _initialized;
}

- (void).cxx_destruct;
- (id)voiceDetections;
- (int)analyzeSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (int)analyzeAsset:(id)arg1 cancel:(CDUnknownBlockType)arg2 results:(id *)arg3;
- (int)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (int)finalizeAnalysisAtTime:(const CDStruct_1b6d18a9 *)arg1;
- (int)processAudioSamples:(struct AudioBufferList *)arg1 timestamp:(struct AudioTimeStamp)arg2;
- (int)setupWithSample:(struct opaqueCMSampleBuffer *)arg1;
- (id)audioFormatRequirements;
- (void)dealloc;
- (id)initWithAnalysisTypes:(unsigned long long)arg1 forStreaming:(BOOL)arg2;

@end

