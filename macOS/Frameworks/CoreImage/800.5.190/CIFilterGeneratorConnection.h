//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CIFilterGeneratorConnection : NSObject
{
    struct CIFilterGeneratorConnectionStruct *_generatorConnectionStruct;
}

+ (id)connectionWithSourceObject:(id)arg1 sourceKey:(id)arg2 targetObject:(id)arg3 targetKey:(id)arg4 userInfo:(id)arg5;
- (id)description;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;
- (int)type;
- (void)setType:(int)arg1;
- (id)targetKey;
- (id)targetObject;
- (id)sourceKey;
- (id)sourceObject;
- (void)finalize;
- (void)dealloc;
- (id)initWithSourceObject:(id)arg1 sourceKey:(id)arg2 targetObject:(id)arg3 targetKey:(id)arg4 userInfo:(id)arg5;

@end

