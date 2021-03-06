//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class IMKUICandidate, NSString;

@interface IMKUICandidateItemView : NSView
{
    IMKUICandidate *_candidateItem;
    id <IMKUICandidateItemViewHandling> _delegate;
    NSString *_selectionKey;
}

@property(copy, nonatomic) NSString *selectionKey; // @synthesize selectionKey=_selectionKey;
@property(nonatomic) __weak id <IMKUICandidateItemViewHandling> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IMKUICandidate *candidateItem; // @synthesize candidateItem=_candidateItem;
- (void).cxx_destruct;
- (BOOL)isFlipped;
- (void)removeFromSuperview;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseUp:(id)arg1;

@end

