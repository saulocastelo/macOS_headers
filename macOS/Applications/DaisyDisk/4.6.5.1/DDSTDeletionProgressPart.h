//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CALayerDelegate-Protocol.h"
#import "DDSTItemStatePartProtocol-Protocol.h"

@class CALayer, NSString;
@protocol DDSTItemStatePartContext;

@interface DDSTDeletionProgressPart : NSObject <CALayerDelegate, DDSTItemStatePartProtocol>
{
    id <DDSTItemStatePartContext> _context;
    CALayer *_layer;
    BOOL _hidden;
    BOOL _admin;
    BOOL _showPercents;
    unsigned char _phase;
    double _progress;
    struct CGRect _frame;
}

@property(nonatomic) unsigned char phase; // @synthesize phase=_phase;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) BOOL showPercents; // @synthesize showPercents=_showPercents;
@property(nonatomic) BOOL admin; // @synthesize admin=_admin;
@property(nonatomic) BOOL hidden; // @synthesize hidden=_hidden;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (void).cxx_destruct;
- (void)draw;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)displayIfNeeded;
- (void)setNeedsDisplay;
- (void)disconnectFromIxHost:(id)arg1;
- (void)connectToIxHost:(id)arg1;
- (void)removeFromSuperlayer;
- (void)addToSuperlayer:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

