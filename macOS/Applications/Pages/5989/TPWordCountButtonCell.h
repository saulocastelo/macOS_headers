//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSPopUpButtonCell.h>

@class NSAttributedString;

@interface TPWordCountButtonCell : NSPopUpButtonCell
{
    NSAttributedString *controlTitleThatDiffersFromMenu;
    unsigned long long _indexOfSelectedMenuItem;
}

@property(nonatomic) unsigned long long indexOfSelectedMenuItem; // @synthesize indexOfSelectedMenuItem=_indexOfSelectedMenuItem;
@property(copy, nonatomic) NSAttributedString *controlTitleThatDiffersFromMenu; // @synthesize controlTitleThatDiffersFromMenu;
- (void).cxx_destruct;
- (struct CGRect)drawTitle:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;

@end

