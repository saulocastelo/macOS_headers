//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <iCloudDrive/ICDBROperation.h>

@class NSURL;

@interface ICDBRShareCopyOperation : ICDBROperation
{
    NSURL *_url;
    CDUnknownBlockType _shareCopyCompletionBlock;
    CDUnknownBlockType _rootShareCopyCompletionBlock;
}

@property(copy) CDUnknownBlockType rootShareCopyCompletionBlock; // @synthesize rootShareCopyCompletionBlock=_rootShareCopyCompletionBlock;
@property(copy) CDUnknownBlockType shareCopyCompletionBlock; // @synthesize shareCopyCompletionBlock=_shareCopyCompletionBlock;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (id)initWithURL:(id)arg1;

@end

