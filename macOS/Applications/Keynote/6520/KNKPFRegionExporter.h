//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KNKPFEffectExporter, NSMutableDictionary;

@interface KNKPFRegionExporter : NSObject
{
    KNKPFEffectExporter *_effectExporter;
    NSMutableDictionary *_nextSlidesMap;
    NSMutableDictionary *_prevSlidesMap;
    double _viewScale;
    unsigned long long _hyperlinkLimit;
}

+ (id)fontNamesForDocument:(id)arg1;
- (void).cxx_destruct;
- (void)exportAccessibility:(id)arg1 animatedSlideView:(id)arg2 session:(id)arg3;
- (id)p_accessibilityRegions:(id)arg1 session:(id)arg2;
- (void)p_addAccessibilityRegionToArray:(id)arg1 fromTextRep:(id)arg2 textRange:(struct _NSRange)arg3;
- (void)p_addAccessibilityRegionToArray:(id)arg1 text:(id)arg2 rect:(struct CGRect)arg3;
- (void)exportHyperlinks:(id)arg1 slideID:(id)arg2 animatedSlideView:(id)arg3 session:(id)arg4;
- (void)p_exportHyperlinkEffects:(id)arg1 slideID:(id)arg2 session:(id)arg3;
- (void)p_addEffectToHyperlink:(id)arg1 forSlideNode:(id)arg2 session:(id)arg3;
- (id)p_hyperlinks:(id)arg1;
- (void)p_addHyperlinksToArray:(id)arg1 fromTextRep:(id)arg2 textRange:(struct _NSRange)arg3;
- (void)p_addHyperlinkToArray:(id)arg1 url:(id)arg2 rect:(struct CGRect)arg3;
- (id)p_targetSlideForURL:(id)arg1 fromSlideNode:(id)arg2 inSlideTree:(id)arg3;
- (struct CGRect)p_rectAtViewScale:(struct CGRect)arg1;
- (struct _NSRange)p_visibleTextRange:(id)arg1 animatedSlideView:(id)arg2;
- (BOOL)p_repIsVisible:(id)arg1 animatedSlideView:(id)arg2;
- (void)p_addNavigationFromSlide:(id)arg1 forTextStorage:(id)arg2 inTree:(id)arg3;
- (void)setupSlideNavigationMapsForShow:(id)arg1;
- (void)p_addNavigationFromSlide:(id)arg1 toURL:(id)arg2 inTree:(id)arg3;
- (void)p_addNavigationForSlide:(id)arg1;
- (id)p_prevSlidesForSlide:(id)arg1;
- (id)p_nextSlidesForSlide:(id)arg1;
- (id)p_slideSetForSlide:(id)arg1 inSlidesMap:(id)arg2;
- (id)initWithSession:(id)arg1 effectExporter:(id)arg2 viewScale:(double)arg3 hyperlinkLimit:(unsigned long long)arg4;

@end

