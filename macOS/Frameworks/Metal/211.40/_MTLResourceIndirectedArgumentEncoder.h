//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Metal/MTLArgumentEncoderSPI-Protocol.h>

@class MTLType, NSString, _MTLIndirectArgumentBufferLayout;
@protocol MTLDevice;

@interface _MTLResourceIndirectedArgumentEncoder : NSObject <MTLArgumentEncoderSPI>
{
    id <MTLDevice> _device;
    unsigned long long _encodedLength;
    unsigned long long _alignment;
    MTLType *_argumentBufferType;
    _MTLIndirectArgumentBufferLayout *_layout;
}

- (id)newArgumentEncoderForBufferAtIndex:(unsigned long long)arg1;
- (void)setIndirectCommandBuffers:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setIndirectCommandBuffer:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setRenderPipelineStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setRenderPipelineState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void *)constantDataAtIndex:(unsigned long long)arg1;
- (void)setSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setArgumentBuffer:(id)arg1 startOffset:(unsigned long long)arg2 arrayElement:(unsigned long long)arg3;
- (void)setArgumentBuffer:(id)arg1 offset:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 type:(id)arg2 device:(id)arg3;

// Remaining properties
@property(readonly) unsigned long long alignment; // @dynamic alignment;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) id <MTLDevice> device; // @dynamic device;
@property(readonly) unsigned long long encodedLength; // @dynamic encodedLength;
@property(readonly) unsigned long long hash;
@property(copy) NSString *label; // @dynamic label;
@property(readonly, nonatomic) _MTLIndirectArgumentBufferLayout *layout; // @dynamic layout;
@property(readonly) Class superclass;

@end

