//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSystemServiceDelegate-Protocol.h"
#import "UISApplicationSupportServiceDelegate-Protocol.h"

@interface UIKitSystem.UIKitSystemAppSystemService : NSObject <FBSystemServiceDelegate, UISApplicationSupportServiceDelegate>
{
}

- (id)init;
- (id)initialDisplayContextForClient:(id)arg1;
- (id)initialDisplayConfigurationForClient:(id)arg1;
- (void)systemService:(id)arg1 handleOpenApplicationRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)systemService:(id)arg1 canActivateApplication:(id)arg2 withResult:(CDUnknownBlockType)arg3;

@end

