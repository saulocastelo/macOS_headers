//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class NSString, SXDocumentSectionBlueprint, UITraitCollection;
@protocol SXDocumentSectionBlueprint;

@protocol SXDocumentSectionManager <NSObject>
- (double)heightForBlueprint:(SXDocumentSectionBlueprint *)arg1 canvasSize:(struct CGSize)arg2 traitCollection:(UITraitCollection *)arg3;
- (void)applySectionBlueprint:(id <SXDocumentSectionBlueprint>)arg1 identifier:(NSString *)arg2 offset:(struct CGPoint)arg3 size:(struct CGSize)arg4;
@end

