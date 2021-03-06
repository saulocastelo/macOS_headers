//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAudioPlayerNode, AVAudioUnitTimePitch;

@interface AXMActiveSound : NSObject
{
    AVAudioPlayerNode *_player;
    AVAudioUnitTimePitch *_timePitch;
}

@property(retain, nonatomic) AVAudioUnitTimePitch *timePitch; // @synthesize timePitch=_timePitch;
@property(retain, nonatomic) AVAudioPlayerNode *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (BOOL)beginPlayback:(id)arg1 withError:(id *)arg2;
- (void)disconnectFromEngine:(id)arg1;
- (void)connectToEngine:(id)arg1;
- (id)init;

@end

