//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "PXGInternalReusableView.h"
#import "PXLayoutParticipant.h"

@class NSString, PXViewSpec;

@interface NSView (PXGReusableViewAdoption) <PXGInternalReusableView, PXLayoutParticipant>
- (void)pxg_shiftPosition:(struct CGPoint)arg1;
- (void)pxg_configureWithTexture:(id)arg1 geometry:(CDStruct_ac168a83 *)arg2 info:(CDStruct_9d1ebe49 *)arg3 style:(CDStruct_506f5052 *)arg4 textureInfo:(CDStruct_183601bc *)arg5 resizableCapInsets:(CDStruct_0054b44d)arg6;
- (void)pxg_prepareForReuse;
- (void)pxg_becomeReusable;
- (void)pxg_addToScrollViewController:(id)arg1;
@property(readonly, nonatomic) double px_backingScale;
- (void)px_addFullBoundsSubview:(id)arg1;
- (id)px_viewOrEnclosingViewOfClass:(Class)arg1;
- (id)px_snapshotView;
- (id)px_snapshotImage;
- (void)px_setCornerRadius:(double)arg1;
- (void)px_setBorderWidth:(double)arg1;
- (void)px_setBorderColor:(struct NSColor *)arg1;
- (void)px_setBackgroundColor:(struct NSColor *)arg1;
@property(retain, nonatomic, setter=px_setSpec:) PXViewSpec *px_spec;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) struct CGRect frame;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

