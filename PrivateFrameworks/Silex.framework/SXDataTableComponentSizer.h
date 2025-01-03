/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXDataTableComponentSizer : SXComponentSizer <SXDataTableComponentControllerDataSource> {
    <SXLayoutContext> * _currentLayoutContext;
    SXDataTableComponentController * _dataTableComponentController;
    SXDataTableLayouter * _layouter;
    <SXTextComponentLayoutHosting> * _textComponentLayoutHosting;
}

@property (nonatomic, retain) <SXLayoutContext> *currentLayoutContext;
@property (nonatomic, retain) SXDataTableComponentController *dataTableComponentController;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SXDataTableLayouter *layouter;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SXTextComponentLayoutHosting> *textComponentLayoutHosting;

- (void).cxx_destruct;
- (id)DOMObjectProviderForDataTableComponentController:(id)arg1;
- (double)calculateHeightForWidth:(double)arg1 layoutContext:(id)arg2;
- (id)componentForDataTableComponentController:(id)arg1;
- (id)contentSizeCategoryForDataTableComponentController:(id)arg1;
- (id)currentLayoutContext;
- (id)dataTableComponentController;
- (id)documentColumnLayoutForDataTableComponentController:(id)arg1;
- (id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentStyle:(id)arg3 DOMObjectProvider:(id)arg4 layoutOptions:(id)arg5 textComponentLayoutHosting:(id)arg6 textSourceFactory:(id)arg7 recordValueTransformerFactory:(id)arg8;
- (id)layouter;
- (void)setCurrentLayoutContext:(id)arg1;
- (void)setDataTableComponentController:(id)arg1;
- (void)setLayouter:(id)arg1;
- (id)tableStyleForComponent:(id)arg1;
- (id)textComponentLayoutHosting;
- (id)textComponentLayoutHostingForDataTableComponentController:(id)arg1;
- (id)unitConverterForDataTableComponentController:(id)arg1;

@end
