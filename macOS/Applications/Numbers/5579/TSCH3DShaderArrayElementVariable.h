//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCH3DShaderVariable.h"

#import "TSCHUnretainedParent-Protocol.h"

@interface TSCH3DShaderArrayElementVariable : TSCH3DShaderVariable <TSCHUnretainedParent>
{
    TSCH3DShaderVariable *mParent;
    unsigned long long mIndex;
}

+ (id)variableWithParentVariable:(id)arg1 index:(unsigned long long)arg2;
- (void)clearParent;
- (void)dealloc;
- (id)initWithParentVariable:(id)arg1 index:(unsigned long long)arg2;

@end

