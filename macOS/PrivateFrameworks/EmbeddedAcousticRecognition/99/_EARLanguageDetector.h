//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _EARLanguageDetector : NSObject
{
    struct unique_ptr<quasar::LanguageDetector, std::__1::default_delete<quasar::LanguageDetector>> languageDetector;
}

+ (shared_ptr_9fadee34)updateContext:(const struct LDContext *)arg1 withMessageLocales:(const vector_4ce8f3d5 *)arg2;
+ (vector_4ce8f3d5)quasarLocalesOfMessages:(id)arg1;
+ (id)localesOfMessages:(id)arg1;
+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)startRequestWith:(unsigned long long)arg1 context:(id)arg2 delegate:(id)arg3;
- (id)initWithConfigFile:(id)arg1 overrides:(id)arg2;
- (id)initWithConfigFile:(id)arg1;

@end

