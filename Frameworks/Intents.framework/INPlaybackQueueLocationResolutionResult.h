/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INPlaybackQueueLocationResolutionResult : INIntentResolutionResult <CMSCoding>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)confirmationRequiredWithPlaybackQueueLocationToConfirm:(long long)arg1;
+ (id)successWithResolvedPlaybackQueueLocation:(long long)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;
- (void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(id /* block */)arg4;

// Image: /System/Library/PrivateFrameworks/CloudMediaServicesInterfaceKit.framework/CloudMediaServicesInterfaceKit

+ (id)instanceFromCMSCoded:(id)arg1;

@end
