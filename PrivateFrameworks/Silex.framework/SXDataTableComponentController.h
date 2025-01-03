/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXDataTableComponentController : NSObject <SXDataTableDataSource, SXTextSourceDataSource> {
    <SXDOMObjectProviding> * _DOMObjectProvider;
    SXDataTableDictionary * _cellObjects;
    <SXDataTableComponentControllerDataSource> * _dataSource;
    SXDataRecordValueTransformerFactory * _recordValueTransformerFactory;
    NSArray * _records;
    <SXDataTableStyleFactory> * _styleFactory;
    SXDataTableDictionary * _textLayouters;
    <SXDataTableTextSourceFactory> * _textSourceFactory;
}

@property (nonatomic, readonly) <SXDOMObjectProviding> *DOMObjectProvider;
@property (nonatomic, readonly) SXDataTableDictionary *cellObjects;
@property (nonatomic, readonly) <SXDataTableComponentControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SXDataRecordValueTransformerFactory *recordValueTransformerFactory;
@property (nonatomic, retain) NSArray *records;
@property (nonatomic, readonly) <SXDataTableStyleFactory> *styleFactory;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SXDataTableDictionary *textLayouters;
@property (nonatomic, readonly) <SXDataTableTextSourceFactory> *textSourceFactory;

- (void).cxx_destruct;
- (id)DOMObjectProvider;
- (id)additionsForTextSource:(id)arg1;
- (id)backgroundColorForCellAtIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (id)backgroundColorForColumnAtIndex:(unsigned long long)arg1;
- (id)backgroundColorForRowAtIndex:(unsigned long long)arg1;
- (id)cellBorderForCellAtIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (id)cellObjectForIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (id)cellObjects;
- (id)cellStyleForIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (id)columnDividerAtIndex:(unsigned long long)arg1;
- (id)columnStyleForColumnIndex:(unsigned long long)arg1;
- (id)component;
- (id)componentTextStyleForTextSource:(id)arg1 inheritingFromDefaultStyles:(bool)arg2;
- (id)contentSizeCategoryForTextSource:(id)arg1;
- (double)convertConvertibleValue:(struct _SXConvertibleValue { double x1; unsigned long long x2; })arg1;
- (id)dataDescriptorForIdentifier:(id)arg1;
- (id)dataDescriptorForIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)dataOrientation;
- (id)dataSource;
- (id)defaultComponentTextStyleForTextSource:(id)arg1;
- (id)defaultComponentTextStylesForTextSource:(id)arg1;
- (bool)hasColumnHeader;
- (bool)hasRowHeader;
- (double)heightForCellAtIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (double)heightForCellndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg1 forWidth:(double)arg2;
- (unsigned long long)horizontalAlignmentForCellAtIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)indexPathIsHeader:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (struct { unsigned long long x1; unsigned long long x2; })indexPathSubstractingHeaders:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (id)initWithStyleFactory:(id)arg1 textSourceFactory:(id)arg2 dataSource:(id)arg3 recordValueTransformerFactory:(id)arg4 DOMObjectProvider:(id)arg5;
- (id)inlineTextStylesForTextSource:(id)arg1;
- (void)loadRecords;
- (double)minimumWidthForCellAtIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (double)minimumWidthForStorage:(id)arg1 usingStringEnumeration:(unsigned long long)arg2;
- (unsigned long long)numberOfColumns;
- (unsigned long long)numberOfRows;
- (struct { double x1; double x2; double x3; double x4; })paddingForCellAtIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (void)prepareForLayout;
- (id)recordForIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (id)recordValueTransformerFactory;
- (id)records;
- (id)rowDividerAtIndex:(unsigned long long)arg1;
- (id)rowStyleForRowIndex:(unsigned long long)arg1;
- (void)setRecordValueTransformerFactory:(id)arg1;
- (void)setRecords:(id)arg1;
- (bool)shouldTreatIndexPathAsHeader:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (id)styleFactory;
- (id)tableBorder;
- (id)textLayouterForIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (id)textLayouters;
- (id)textResizerForTextSource:(id)arg1;
- (id)textRulesForTextSource:(id)arg1;
- (id)textSourceFactory;
- (id)textStyleForIdentifier:(id)arg1;
- (unsigned long long)verticalAlignmentForCellAtIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (double)widthForCellAtIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg1;

@end
