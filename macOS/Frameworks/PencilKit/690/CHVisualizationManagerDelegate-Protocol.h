//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CHVisualizationManager;

@protocol CHVisualizationManagerDelegate <NSObject>
- (void)visualizationManagerNeedsDisplay:(CHVisualizationManager *)arg1;
- (void)visualizationManager:(CHVisualizationManager *)arg1 needsDisplayInRect:(struct CGRect)arg2;

@optional
- (void)visualizationManagerDidUpdateSessionStatus:(CHVisualizationManager *)arg1;
@end

