//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBSerializable.h"
#import "NSCopying.h"

@class DBPROPERTIESPropertyType, NSString;

@interface DBPROPERTIESPropertyFieldTemplate : NSObject <DBSerializable, NSCopying>
{
    NSString *_name;
    NSString *_description_;
    DBPROPERTIESPropertyType *_type;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) DBPROPERTIESPropertyType *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *description_; // @synthesize description_=_description_;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (BOOL)isEqualToPropertyFieldTemplate:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithName:(id)arg1 description_:(id)arg2 type:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

