//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBSerializable.h"
#import "NSCopying.h"

@class NSString;

@interface DBTEAMLOGPaperFolderLogInfo : NSObject <DBSerializable, NSCopying>
{
    NSString *_folderId;
    NSString *_folderName;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, copy, nonatomic) NSString *folderName; // @synthesize folderName=_folderName;
@property(readonly, copy, nonatomic) NSString *folderId; // @synthesize folderId=_folderId;
- (void).cxx_destruct;
- (BOOL)isEqualToPaperFolderLogInfo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithFolderId:(id)arg1 folderName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

