//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTabView;

@protocol PSMTabBarControlProtocol <NSObject>
- (NSTabView *)tabView;
- (id <PSMTabBarControlDelegate>)delegate;
- (int)orientation;
- (BOOL)automaticallyAnimates;
- (void)update:(BOOL)arg1;
- (id <PSMTabStyle>)style;
- (void)closeTabClick:(id)arg1;
- (void)tabClick:(id)arg1;
@end

