//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDInfoCommand.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "TSDPropagatableCommand-Protocol.h"

@class NSString, TSDInfoGeometry, TSDPathSource;

@interface TSDImageAbstractInfoGeometryCommand : TSDInfoCommand <GSSPAutoEncodable, TSDPropagatableCommand>
{
    TSDInfoGeometry *_oldImageInfoGeometry;
    TSDInfoGeometry *_oldMaskInfoGeometry;
    TSDPathSource *_oldMaskPathSource;
    struct CGSize _oldImageInfoOriginalSize;
    TSDInfoGeometry *_imageInfoGeometry;
    struct CGSize _imageInfoOriginalSize;
    TSDInfoGeometry *_maskInfoGeometry;
    TSDPathSource *_maskPathSource;
}

+ (BOOL)imageInfoGeometryIsRequired;
- (void).cxx_destruct;
- (void)populateChangePropagationMapAfterCommit:(id)arg1;
- (BOOL)modifiesAnyObjectPassingTest:(CDUnknownBlockType)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct ImageInfoAbstractGeometryCommandArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct ImageInfoAbstractGeometryCommandArchive *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)p_propertyNames;
- (id)propertyNameForTransform;
- (id)makeInverse;
- (void)p_setGeometry:(id)arg1 originalSize:(struct CGSize)arg2 maskGeometry:(id)arg3 maskPathSource:(id)arg4;
- (void)redo;
- (void)undo;
- (void)rollback;
- (void)commit;
- (BOOL)process;
- (BOOL)supportsCollaboration;
- (id)initWithInfo:(id)arg1 imageInfoGeometry:(id)arg2 imageInfoOriginalSize:(struct CGSize)arg3 maskInfoGeometry:(id)arg4 maskPathSource:(id)arg5 context:(id)arg6;
- (id)initWithInfo:(id)arg1 imageInfoGeometry:(id)arg2 maskInfoGeometry:(id)arg3 maskPathSource:(id)arg4 context:(id)arg5;
- (void)populateGSSPCmdImageSetGeometry:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

