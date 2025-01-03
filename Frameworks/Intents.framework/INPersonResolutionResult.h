/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INPersonResolutionResult : INIntentResolutionResult <INPersonResolutionResultExport>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)confirmationRequiredWithPersonToConfirm:(id)arg1;
+ (id)disambiguationWithPeopleToDisambiguate:(id)arg1;
+ (id)successWithResolvedPerson:(id)arg1;
+ (id)unsupportedWithReason:(unsigned long long)arg1 alternativePeople:(id)arg2;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

// Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore

+ (bool)__imcore__containsNonSuccess:(id)arg1;

- (bool)__imcore__isSuccess;

@end
