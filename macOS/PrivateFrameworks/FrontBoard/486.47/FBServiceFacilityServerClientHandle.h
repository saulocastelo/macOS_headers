//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FrontBoardServices/BSBasicServerClient.h>

#import <FrontBoard/FBSServiceFacilityClientHandle_Internal-Protocol.h>

@class BSProcessHandle, FBProcess, NSObject, NSString;
@protocol FBSServiceFacilityClientContext, OS_xpc_object;

@interface FBServiceFacilityServerClientHandle : BSBasicServerClient <FBSServiceFacilityClientHandle_Internal>
{
    BOOL _uiApp;
    NSString *_bundleID;
    BOOL _extension;
    BOOL _suspended;
    NSString *_facilityID;
    FBProcess *_process;
    BSProcessHandle *_processHandle;
    id <FBSServiceFacilityClientContext> _context;
    NSString *_bundlePath;
}

@property(retain, nonatomic) NSString *bundlePath; // @synthesize bundlePath=_bundlePath;
@property(retain, nonatomic) id <FBSServiceFacilityClientContext> context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *facilityID; // @synthesize facilityID=_facilityID;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic, getter=isExtension) BOOL extension; // @synthesize extension=_extension;
@property(nonatomic, getter=isUIApp) BOOL UIApp; // @synthesize UIApp=_uiApp;
- (void).cxx_destruct;
- (void)suspend;
- (void)resume;
@property(readonly, nonatomic, getter=isSuspended) BOOL suspended; // @synthesize suspended=_suspended;
@property(readonly, nonatomic) int pid;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BSProcessHandle *processHandle;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSObject<OS_xpc_object> *connection;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

