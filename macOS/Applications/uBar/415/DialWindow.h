//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPanel.h"

@class BSAppDelegate, BSBar, BSPrefs, NSTimer;

@interface DialWindow : NSPanel
{
    BSAppDelegate *appDelegate;
    BSPrefs *prefs;
    struct CGPoint mOrigin;
    BOOL displayed;
    NSTimer *bphTimer;
    BSBar *bar;
}

@property(retain, nonatomic) BSBar *bar; // @synthesize bar;
- (void).cxx_destruct;
- (void)hide:(BOOL)arg1;
- (void)updateDial;
- (void)displayWithOrigin:(struct CGPoint)arg1 forBar:(id)arg2;
- (BOOL)getDisplayed;
- (void)dealloc;
- (void)awakeFromNib;

@end

