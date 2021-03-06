//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreImage/EDLinesResult-Protocol.h>

@class EdgeDrawing, NFACalculator, NSString;
@protocol EdgeDrawingResult;

__attribute__((visibility("hidden")))
@interface EDLines : NSObject <EDLinesResult>
{
    BOOL _cartesianCoordinates;
    BOOL _checkInsetsOnInitialDetection;
    unsigned short _minimumLineSegmentLength;
    unsigned int _lineSegmentsCount;
    struct DetectedLineSegment *_lineSegments;
    id <EdgeDrawingResult> _edgeDrawingResult;
    double _minimumNFA;
    CDUnknownBlockType _initialLineSegmentDetectionValidator;
    EdgeDrawing *_edgeDrawing;
    NFACalculator *_nfaCalculator;
    struct NSEdgeInsets _lineSegmentRejectionInsets;
    struct CGAffineTransform _postDetectionLineSegmentTransform;
    struct CGAffineTransform _verticalFlipTransform;
}

@property(readonly, nonatomic) struct CGAffineTransform verticalFlipTransform; // @synthesize verticalFlipTransform=_verticalFlipTransform;
@property(readonly, nonatomic) NFACalculator *nfaCalculator; // @synthesize nfaCalculator=_nfaCalculator;
@property(readonly, nonatomic) EdgeDrawing *edgeDrawing; // @synthesize edgeDrawing=_edgeDrawing;
@property(nonatomic) BOOL checkInsetsOnInitialDetection; // @synthesize checkInsetsOnInitialDetection=_checkInsetsOnInitialDetection;
@property(nonatomic) BOOL cartesianCoordinates; // @synthesize cartesianCoordinates=_cartesianCoordinates;
@property(nonatomic) struct CGAffineTransform postDetectionLineSegmentTransform; // @synthesize postDetectionLineSegmentTransform=_postDetectionLineSegmentTransform;
@property(nonatomic) struct NSEdgeInsets lineSegmentRejectionInsets; // @synthesize lineSegmentRejectionInsets=_lineSegmentRejectionInsets;
@property(nonatomic) unsigned short minimumLineSegmentLength; // @synthesize minimumLineSegmentLength=_minimumLineSegmentLength;
@property(copy, nonatomic) CDUnknownBlockType initialLineSegmentDetectionValidator; // @synthesize initialLineSegmentDetectionValidator=_initialLineSegmentDetectionValidator;
@property(nonatomic) double minimumNFA; // @synthesize minimumNFA=_minimumNFA;
@property(readonly, nonatomic) id <EdgeDrawingResult> edgeDrawingResult; // @synthesize edgeDrawingResult=_edgeDrawingResult;
@property(readonly, nonatomic) unsigned int lineSegmentsCount; // @synthesize lineSegmentsCount=_lineSegmentsCount;
@property(readonly, nonatomic) struct DetectedLineSegment *lineSegments; // @synthesize lineSegments=_lineSegments;
- (void).cxx_destruct;
- (double)leastSquaresLineFitWithXCoordinates:(unsigned short *)arg1 yCoordinates:(unsigned short *)arg2 length:(unsigned int)arg3 m:(double *)arg4 n:(double *)arg5 context:(CDStruct_bae50541 *)arg6 updateFromContext:(BOOL)arg7;
- (double)leastSquaresLineFitWithXCoordinates:(unsigned short *)arg1 yCoordinates:(unsigned short *)arg2 length:(unsigned int)arg3 equation:(CDStruct_202aea77 *)arg4 context:(CDStruct_bae50541 *)arg5 udpateFromContext:(BOOL)arg6 from:(id)arg7;
- (unsigned char)validateLineSegment:(unsigned short *)arg1 yBuffer:(unsigned short *)arg2 length:(unsigned int)arg3 equation:(CDStruct_202aea77)arg4 relativeError:(double)arg5 resultingLineSegment:(struct DetectedLineSegment *)arg6 from:(id)arg7;
- (unsigned char)validateInitialLineSegment:(unsigned short *)arg1 yBuffer:(unsigned short *)arg2 length:(unsigned int)arg3 relativeError:(double)arg4;
- (BOOL)validateEndPointsAgainstRejectionInsets:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2;
- (unsigned int)extractLineSegmentsFromXCoordinates:(unsigned short *)arg1 yCoordimnates:(unsigned short *)arg2 length:(unsigned int)arg3 into:(struct DetectedLineSegment *)arg4 usingTempBuffer1:(double *)arg5 tempBuffer2:(double *)arg6 tempBuffer3:(double *)arg7 from:(id)arg8;
- (id)compute;
- (void)dealloc;
- (id)initWithEdgeDrawing:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

