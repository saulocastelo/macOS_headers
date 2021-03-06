//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SGModelHyperparameters : NSObject
{
    NSString *_featuresModelId;
    NSString *_featuresVersion;
    unsigned long long _vectorLength;
    struct _NSRange _characterNGramRange;
    struct _NSRange _tokenNGramRange;
}

@property(readonly, nonatomic) unsigned long long vectorLength; // @synthesize vectorLength=_vectorLength;
@property(readonly, nonatomic) struct _NSRange tokenNGramRange; // @synthesize tokenNGramRange=_tokenNGramRange;
@property(readonly, nonatomic) struct _NSRange characterNGramRange; // @synthesize characterNGramRange=_characterNGramRange;
@property(readonly, copy, nonatomic) NSString *featuresVersion; // @synthesize featuresVersion=_featuresVersion;
@property(readonly, copy, nonatomic) NSString *featuresModelId; // @synthesize featuresModelId=_featuresModelId;
- (void).cxx_destruct;
- (id)sessionDescriptorForLanguage:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

