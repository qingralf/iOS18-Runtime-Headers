/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXCollectionLayouter : NSObject <SXLayouter> {
    <SXColumnCalculator> * _columnCalculator;
    SXContainerComponentBlueprint * _containerComponentBlueprint;
    <SXLayouterDelegate> * _delegate;
    SXLayouterFactory * _layouterFactory;
    <SXUnitConverterFactory> * _unitConverterFactory;
}

@property (nonatomic, readonly) <SXColumnCalculator> *columnCalculator;
@property (nonatomic, readonly) SXContainerComponentBlueprint *containerComponentBlueprint;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <SXLayouterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SXLayouterFactory *layouterFactory;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SXUnitConverterFactory> *unitConverterFactory;

- (void).cxx_destruct;
- (id)childColumnLayoutForRowLayout:(id)arg1 display:(id)arg2 collectionContainerBlueprint:(id)arg3 childContainerComponentBlueprint:(id)arg4 documentColumnLayout:(id)arg5 unitConverter:(id)arg6;
- (id)columnCalculator;
- (id)containerComponentBlueprint;
- (id)delegate;
- (id)initWithContainerComponent:(id)arg1 layouterFactory:(id)arg2 columnCalculator:(id)arg3 unitConverterFactory:(id)arg4;
- (void)layoutBlueprint:(id)arg1 columnLayout:(id)arg2 description:(id)arg3 shouldContinue:(bool*)arg4;
- (id)layouterFactory;
- (void)setDelegate:(id)arg1;
- (id)unitConverterFactory;

@end
