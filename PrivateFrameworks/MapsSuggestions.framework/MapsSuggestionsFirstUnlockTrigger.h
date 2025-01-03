/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsFirstUnlockTrigger : MapsSuggestionsBaseTrigger <MapsSuggestionsCondition, MapsSuggestionsTriggerObserver> {
    <MapsSuggestionsFirstUnlockProtocol> * _firstUnlock;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (void).cxx_destruct;
- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (id)init;
- (id)initWithFirstLock:(id)arg1;
- (bool)isTrue;
- (id)objectForJSON;
- (void)triggerFired:(id)arg1;

@end
