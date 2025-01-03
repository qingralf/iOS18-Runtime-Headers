/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFConditionalAction : WFControlFlowAction <WFAddButtonParameterDelegate, WFVariableDelegate> {
    void $__lazy_storage_$_addButtonParameter;
    void observedVariables;
    void parameterSerializationKeys;
    void tableTemplate;
    void truthForTestingOnly;
}

@property (nonatomic, readonly) NSArray *inputContentClasses;
@property (nonatomic, readonly) bool inputPassthrough;
@property (nonatomic, readonly) bool inputRequired;
@property (nonatomic, readonly) bool isDeletable;
@property (nonatomic, readonly) unsigned long long parameterCollapsingBehavior;
@property (nonatomic, readonly) NSArray *parameterDefinitions;
@property (nonatomic, readonly) WFActionParameterSummary *parameterSummary;
@property (nonatomic, readonly) bool populatesInputFromInputParameter;
@property (nonatomic, readonly) bool skipsProcessingHiddenParameters;
@property (nonatomic, readonly) bool usesLegacyInputBehavior;

- (void).cxx_destruct;
- (id)containedVariables;
- (id)createAccompanyingActions;
- (bool)ignoresOutputFromAction:(id)arg1 inWorkflow:(id)arg2;
- (id)init;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3;
- (id)inputContentClasses;
- (bool)inputPassthrough;
- (bool)inputRequired;
- (id)inputSourceInWorkflow:(id)arg1;
- (bool)isDeletable;
- (id)localizedDefaultOutputNameWithContext:(id)arg1;
- (id)localizedNameWithContext:(id)arg1;
- (id)minimumSupportedClientVersion;
- (unsigned long long)parameterCollapsingBehavior;
- (id)parameterDefinitions;
- (id)parameterStateForKey:(id)arg1 fallingBackToDefaultValue:(bool)arg2;
- (id)parameterStateUpdateForPlusButtonForParameter:(id)arg1;
- (id)parameterSummary;
- (bool)populatesInputFromInputParameter;
- (void)resetEvaluationCriteriaWithVariableSource:(id)arg1;
- (void)runWithInput:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 26: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'W' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, unsigned char, out in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, unsigned char, out long, long, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, BOOL, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, int, out in /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (id)serializedParameters;
- (bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (bool)showsAddButtonForParameter:(id)arg1;
- (bool)skipsProcessingHiddenParameters;
- (bool)truthWithVariableSource:(id)arg1;
- (bool)usesLegacyInputBehavior;
- (void)variableDidChange:(id)arg1;
- (void)visibleParametersUpdated;
- (id)visibleParametersWithProcessing:(bool)arg1;

@end
