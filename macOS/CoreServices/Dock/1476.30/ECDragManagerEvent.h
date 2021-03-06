//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ECEvent.h"

@interface ECDragManagerEvent : ECEvent
{
    struct CGPoint _location;
    struct OpaqueCoreDrag *_drag;
    int _type;
    unsigned int _flags;
}

- (BOOL)controlKeyDown;
- (BOOL)alternateKeyDown;
- (BOOL)commandKeyDown;
- (BOOL)shiftKeyDown;
- (unsigned int)flags;
- (struct CGPoint)location;
- (int)type;
- (struct OpaqueCoreDrag *)drag;
- (void)invalidate;
- (id)initWithDrag:(struct OpaqueCoreDrag *)arg1 type:(int)arg2 location:(struct CGPoint)arg3 session:(id)arg4;

@end

