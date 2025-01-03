/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentInsertionManager : NSObject <SXComponentInsertionManager> {
    <SXBlueprintAnalyzer> * _blueprintAnalyzer;
    NSMutableArray * _cache;
    <SXComponentInsertionConditionEngine> * _conditionEngine;
    <SXComponentInserterManager> * _inserterManager;
    <SXUnitConverterFactory> * _unitConverterFactory;
}

@property (nonatomic, readonly) <SXBlueprintAnalyzer> *blueprintAnalyzer;
@property (nonatomic, readonly) NSMutableArray *cache;
@property (nonatomic, readonly) <SXComponentInsertionConditionEngine> *conditionEngine;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXComponentInserterManager> *inserterManager;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SXUnitConverterFactory> *unitConverterFactory;

- (void).cxx_destruct;
- (id)blueprintAnalyzer;
- (id)cache;
- (id)conditionEngine;
- (id)initWithComponentInserterManager:(id)arg1 conditionEngine:(id)arg2 blueprintAnalyzer:(id)arg3 unitConverterFactory:(id)arg4;
- (id)insertComponentsForBlueprint:(id)arg1 DOMObjectProvider:(id)arg2;
- (id)insertForMarker:(id)arg1 inserter:(id)arg2 DOMObjectProvider:(id)arg3 layoutProvider:(id)arg4;
- (id)inserterManager;
- (id)unitConverterFactory;
- (void)updateDOM:(id)arg1 layoutBlueprint:(id)arg2 insert:(id)arg3 marker:(id)arg4;

@end
