//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSNumber, NSString;

@interface Event : NSObject
{
    NSString *_eventKey;
    NSMutableDictionary *_eventDictionary;
}

+ (id)plistKeyForPropertyName:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *eventDictionary; // @synthesize eventDictionary=_eventDictionary;
@property(copy, nonatomic) NSString *eventKey; // @synthesize eventKey=_eventKey;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL enableVisualNotification;
@property(nonatomic) BOOL displayVisualNotification;
@property(nonatomic) BOOL repeatBouncingInDock;
@property(nonatomic) BOOL bounceInDock;
@property(retain, nonatomic) NSString *localizedTextToSpeak;
@property(retain, nonatomic) NSString *textToSpeak;
@property(nonatomic) BOOL speakText;
@property(retain, nonatomic) NSString *soundName;
@property(retain, nonatomic) NSString *localizedSoundName;
@property(readonly, nonatomic) BOOL isAlertSound;
@property(nonatomic) BOOL repeatSound;
@property(readonly, nonatomic) BOOL canRepeatSound;
@property(nonatomic) BOOL playSound;
@property(readonly, nonatomic) NSNumber *sortIndex;
@property(readonly, nonatomic) NSNumber *category;
@property(readonly, nonatomic) NSString *localizedName;
- (id)initWithEventKey:(id)arg1 userInfo:(id)arg2;

@end

