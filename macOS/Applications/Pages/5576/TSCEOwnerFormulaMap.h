//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSCEOwnerFormulaMap : NSObject
{
    struct vector<std::__1::pair<TSUCellCoord, TSCEFormula>, std::__1::allocator<std::__1::pair<TSUCellCoord, TSCEFormula>>> _formulas;
    vector_38b190b0 _nonFormulaCells;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)saveToArchive:(struct OwnerFormulaMapArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct OwnerFormulaMapArchive *)arg1;
- (id)description;
- (struct TSCEFormula *)formulaAtIndex:(unsigned long long)arg1 outCellCoordinate:(struct TSUCellCoord *)arg2;
- (unsigned long long)count;
- (void)addFormula:(struct TSCEFormula *)arg1 atCellCoordinate:(struct TSUCellCoord)arg2;

@end

