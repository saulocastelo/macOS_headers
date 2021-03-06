//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SystemMigration/NSObject-Protocol.h>

@class NSString;

@protocol ALSecurityProvider <NSObject>
- (void)setQueueName:(NSString *)arg1;
- (long long)writeData:(void *)arg1 length:(unsigned long long)arg2;
- (long long)readData:(void *)arg1 length:(unsigned long long)arg2;
- (BOOL)initializeSecurityOnFileDescriptor:(int)arg1 withRole:(int)arg2;
- (void)setDelegate:(id)arg1;
- (id)initWithQueueName:(NSString *)arg1;
@end

