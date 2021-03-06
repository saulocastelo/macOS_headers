//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDCAAnimationContextCache.h"

@class NSString;

@interface TSDCAPropertyAnimationContextCache : TSDCAAnimationContextCache
{
    BOOL _isAnimationKeyTypeOfRotation;
    BOOL _isAnimationKeyHidden;
    BOOL _isAnimationKeyDoubleSided;
    BOOL _isObjectTypeCGColor;
    BOOL _isContentsAnimation;
    NSString *_keyPath;
}

@property(nonatomic) BOOL isContentsAnimation; // @synthesize isContentsAnimation=_isContentsAnimation;
@property(nonatomic) BOOL isObjectTypeCGColor; // @synthesize isObjectTypeCGColor=_isObjectTypeCGColor;
@property(readonly, nonatomic) BOOL isAnimationKeyDoubleSided; // @synthesize isAnimationKeyDoubleSided=_isAnimationKeyDoubleSided;
@property(readonly, nonatomic) BOOL isAnimationKeyHidden; // @synthesize isAnimationKeyHidden=_isAnimationKeyHidden;
@property(readonly, nonatomic) BOOL isAnimationKeyTypeOfRotation; // @synthesize isAnimationKeyTypeOfRotation=_isAnimationKeyTypeOfRotation;
@property(readonly, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (void).cxx_destruct;
- (id)interpolatedValueFrom:(id)arg1 to:(id)arg2 percent:(double)arg3;
- (id)adjustedResultWithValue:(id)arg1;
- (id)valueForKeyPath:(id)arg1 atTime:(double)arg2 animationCache:(id)arg3;
- (id)initWithAnimation:(id)arg1;

@end

