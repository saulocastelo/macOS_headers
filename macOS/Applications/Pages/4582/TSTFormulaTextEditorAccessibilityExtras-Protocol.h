//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, TSTCompletionTokenAccessibility;

@protocol TSTFormulaTextEditorAccessibilityExtras <NSObject>

@optional
- (void)tsaxDidDeleteBlankReferenceTokenForKeyboardInsertion;
- (void)tsaxDidFailUpdatingSelectedChoiceForCompletionToken:(TSTCompletionTokenAccessibility *)arg1;
- (void)tsaxDidUpdateSelectedChoiceForCompletionToken:(TSTCompletionTokenAccessibility *)arg1;
- (void)tsaxDidUpdateAutocompletionTextForToken:(TSTCompletionTokenAccessibility *)arg1;
- (void)tsaxWillAbsorbePreviousFormulaTokenWithText:(NSString *)arg1;
@end

