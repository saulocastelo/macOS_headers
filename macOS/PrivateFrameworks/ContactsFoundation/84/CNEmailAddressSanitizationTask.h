//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ContactsFoundation/CNTask.h>

@class NSString;

@interface CNEmailAddressSanitizationTask : CNTask
{
    NSString *_address;
}

- (void).cxx_destruct;
- (void)removeMailtoPrefix;
- (id)run:(id *)arg1;
- (id)description;
- (id)initWithAddress:(id)arg1;

@end

