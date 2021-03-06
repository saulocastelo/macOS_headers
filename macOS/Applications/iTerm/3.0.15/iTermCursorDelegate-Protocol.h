//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSColor;

@protocol iTermCursorDelegate <NSObject>
- (NSColor *)cursorColorByDimmingSmartColor:(NSColor *)arg1;
- (NSColor *)cursorBlackColor;
- (NSColor *)cursorWhiteColor;
- (NSColor *)cursorColorForCharacter:(struct screen_char_t)arg1 wantBackground:(BOOL)arg2 muted:(BOOL)arg3;
- (void)cursorDrawCharacter:(struct screen_char_t)arg1 row:(int)arg2 point:(struct CGPoint)arg3 doubleWidth:(BOOL)arg4 overrideColor:(NSColor *)arg5 context:(struct CGContext *)arg6 backgroundColor:(NSColor *)arg7;
- (CDStruct_6580c31b)cursorNeighbors;
@end

