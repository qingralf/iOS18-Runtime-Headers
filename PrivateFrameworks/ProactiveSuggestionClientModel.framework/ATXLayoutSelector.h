/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel
 */

@interface ATXLayoutSelector : NSObject <ATXLayoutSelectorProtocol> {
    <ATXUniversalSuggestionDeduplicatorProtocol> * _deduplicator;
    <ATXUniversalBlendingLayerHyperParametersProtocol> * _hyperParameters;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) <ATXUniversalSuggestionDeduplicatorProtocol> *deduplicator;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <ATXUniversalBlendingLayerHyperParametersProtocol> *hyperParameters;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)deduplicator;
- (id)hyperParameters;
- (id)init;
- (id)initWithSuggestionDeduplicator:(id)arg1 hyperParameters:(id)arg2;
- (id)selectedLayoutForConsumerSubType:(unsigned char)arg1 rankedSuggestions:(id)arg2;
- (id)validLayoutsForConsumerSubType:(unsigned char)arg1 rankedSuggestions:(id)arg2;

@end