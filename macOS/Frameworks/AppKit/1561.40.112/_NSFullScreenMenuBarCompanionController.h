//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _NSFullScreenContentController;

__attribute__((visibility("hidden")))
@interface _NSFullScreenMenuBarCompanionController : NSObject
{
    double _menuBarReveal;
    _NSFullScreenContentController *_contentController;
}

- (void).cxx_destruct;
- (id)contentController;
- (void)setContentController:(id)arg1;
- (void)updateContentViewForMenuBarReveal;
@property(nonatomic) double menuBarReveal;
- (void)dispose;

@end

