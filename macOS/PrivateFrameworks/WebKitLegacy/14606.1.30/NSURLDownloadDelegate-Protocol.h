//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WebKitLegacy/NSObject-Protocol.h>

@class NSError, NSString, NSURLAuthenticationChallenge, NSURLDownload, NSURLProtectionSpace, NSURLRequest, NSURLResponse;

@protocol NSURLDownloadDelegate <NSObject>

@optional
- (void)download:(NSURLDownload *)arg1 didFailWithError:(NSError *)arg2;
- (void)downloadDidFinish:(NSURLDownload *)arg1;
- (void)download:(NSURLDownload *)arg1 didCreateDestination:(NSString *)arg2;
- (void)download:(NSURLDownload *)arg1 decideDestinationWithSuggestedFilename:(NSString *)arg2;
- (BOOL)download:(NSURLDownload *)arg1 shouldDecodeSourceDataOfMIMEType:(NSString *)arg2;
- (void)download:(NSURLDownload *)arg1 didReceiveDataOfLength:(unsigned long long)arg2;
- (void)download:(NSURLDownload *)arg1 willResumeWithResponse:(NSURLResponse *)arg2 fromByte:(long long)arg3;
- (void)download:(NSURLDownload *)arg1 didReceiveResponse:(NSURLResponse *)arg2;
- (BOOL)downloadShouldUseCredentialStorage:(NSURLDownload *)arg1;
- (void)download:(NSURLDownload *)arg1 didCancelAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (void)download:(NSURLDownload *)arg1 didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (BOOL)download:(NSURLDownload *)arg1 canAuthenticateAgainstProtectionSpace:(NSURLProtectionSpace *)arg2;
- (NSURLRequest *)download:(NSURLDownload *)arg1 willSendRequest:(NSURLRequest *)arg2 redirectResponse:(NSURLResponse *)arg3;
- (void)downloadDidBegin:(NSURLDownload *)arg1;
@end

