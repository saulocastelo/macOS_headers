//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMRunnerControl.h"

@class NSURL;

@protocol AMRemoteRunnerXPCProtocol <AMRunnerControl>
- (void)resume;
- (void)runWorkflowWithPropertyList:(id)arg1 workflowURL:(NSURL *)arg2 workingDirectoryURL:(NSURL *)arg3 input:(id)arg4 shouldDisplayProgressInMenuBar:(BOOL)arg5 steppingInitially:(BOOL)arg6 completionHandler:(void (^)(AMWorkflowCompletionResults *))arg7;
@end

