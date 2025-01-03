/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMGenerativeModelsAvailabilityProvider : NSObject {
    void generativePlaygroundModelsAvailable;
    void generativePlaygroundUseCaseIdentifier;
    void summarizationModelsAvailable;
    void summarizationUseCaseIdentifier;
}

+ (bool)generativePlaygroundModelsAvailable;
+ (bool)messageSummarizationEnabled;
+ (void)setMessageSummarizationUserPreference:(bool)arg1;
+ (bool)summarizationModelsAvailable;
+ (bool)summarizationUserPreferenceEnabled;

- (void).cxx_destruct;
- (id)init;

@end
