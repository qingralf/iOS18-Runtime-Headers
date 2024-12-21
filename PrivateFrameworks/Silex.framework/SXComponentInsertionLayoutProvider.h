/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentInsertionLayoutProvider : NSObject <SXComponentInsertionLayoutProvider> {
    <SXDOMObjectProviding> * _DOMObjectProvider;
    SXLayoutBlueprint * _layoutBlueprint;
    <SXUnitConverterFactory> * _unitConverterFactory;
}

@property (nonatomic, readonly) <SXDOMObjectProviding> *DOMObjectProvider;
@property (nonatomic, readonly) SXColumnLayout *columnLayout;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } documentSize;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SXLayoutBlueprint *layoutBlueprint;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SXUnitConverterFactory> *unitConverterFactory;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } viewportSize;

- (void).cxx_destruct;
- (id)DOMObjectProvider;
- (id)columnLayout;
- (struct CGSize { double x1; double x2; })documentSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForComponent:(id)arg1;
- (id)initWithBlueprint:(id)arg1 DOMObjectProvider:(id)arg2 unitConverterFactory:(id)arg3;
- (id)layoutBlueprint;
- (id)layoutBlueprintForMarker:(id)arg1;
- (id)suggestedMarginForMarker:(id)arg1;
- (id)unitConverterFactory;
- (id)unitConverterForMarker:(id)arg1;
- (struct CGSize { double x1; double x2; })viewportSize;

@end