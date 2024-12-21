/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TILanguageSelectionController : NSObject {
    NSArray * _activeInputModes;
    TILanguageModelAdaptationContext * _adaptationContext;
    NSMutableArray * _bufferedTokenStrings;
    <TILanguageSelectionControllerDelegate> * _delegate;
    NSArray * _inferredAdditionalInputModes;
    TIInputMode * _inferredSecondaryInputMode;
    NSMutableDictionary * _inputModeProbabilities;
    <TILanguageLikelihoodModeling> * _languageLikelihoodModel;
    <TIMultilingualPreferenceProviding> * _preferenceProvider;
    NSArray * _preferredAdditionalInputModes;
    TIInputMode * _preferredSecondaryInputMode;
    TIInputMode * _primaryInputMode;
    NSDictionary * _referenceInputModeProbabilities;
    NSArray * _userEnabledInputModes;
    struct vector<TITokenID, std::allocator<TITokenID>> { 
        struct TITokenID {} *__begin_; 
        struct TITokenID {} *__end_; 
        struct __compressed_pair<TITokenID *, std::allocator<TITokenID>> { 
            struct TITokenID {} *__value_; 
        } __end_cap_; 
    }  m_buffered_tokens;
}

@property (nonatomic, retain) NSArray *activeInputModes;
@property (nonatomic, retain) TILanguageModelAdaptationContext *adaptationContext;
@property (nonatomic, readonly) NSMutableArray *bufferedTokenStrings;
@property (nonatomic) <TILanguageSelectionControllerDelegate> *delegate;
@property (nonatomic, retain) NSArray *inferredAdditionalInputModes;
@property (nonatomic, retain) TIInputMode *inferredSecondaryInputMode;
@property (nonatomic, readonly) NSMutableDictionary *inputModeProbabilities;
@property (nonatomic, readonly) <TILanguageLikelihoodModeling> *languageLikelihoodModel;
@property (nonatomic, readonly) <TIMultilingualPreferenceProviding> *preferenceProvider;
@property (nonatomic, retain) NSArray *preferredAdditionalInputModes;
@property (nonatomic, retain) TIInputMode *preferredSecondaryInputMode;
@property (nonatomic, retain) TIInputMode *primaryInputMode;
@property (nonatomic, copy) NSDictionary *referenceInputModeProbabilities;
@property (nonatomic, retain) NSArray *userEnabledInputModes;

+ (id)inferAdditionalInputModesForPrimary:(id)arg1;
+ (id)inferInputModeForLanguage:(id)arg1 enabled:(id)arg2;
+ (id)inferSecondaryInputModeForPrimary:(id)arg1 enabled:(id)arg2 isSimulation:(bool)arg3;
+ (id)inferSecondaryInputModeForPrimary:(id)arg1 enabled:(id)arg2 isSimulation:(bool)arg3 enabledExcludingPreferredLanguages:(id)arg4;
+ (id)inputModeForLanguageIdentifier:(id)arg1;
+ (id)inputModesForLanguageIdentifiers:(id)arg1;
+ (id)multilingualInputModesForInputModes:(id)arg1;
+ (void)reportTypedTokens:(const void*)arg1 activeInputModes:(id)arg2;
+ (id)sharedLanguageLikelihoodModel;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)activeInputModes;
- (id)adaptationContext;
- (void)addTokenString:(id)arg1 tokenID:(struct TITokenID { unsigned int x1; unsigned int x2; })arg2 context:(const struct TITokenID { unsigned int x1; unsigned int x2; }*)arg3 contextLength:(unsigned long long)arg4;
- (id)additionalInputModesForUpdatedPrimaryInputMode:(id)arg1 withSecondaryInputMode:(id)arg2;
- (void)appleKeyboardsInternalSettingsChanged:(id)arg1;
- (void)appleKeyboardsPreferencesChanged:(id)arg1;
- (bool)bufferIsCompatibleWithContext:(const struct TITokenID { unsigned int x1; unsigned int x2; }*)arg1 contextLength:(unsigned long long)arg2;
- (id)bufferedTokenStrings;
- (void)dealloc;
- (id)delegate;
- (bool)didProbabilityChangeSignificantly;
- (bool)didUpdatedInputModesChange:(id)arg1;
- (id)dynamicallyDetectedInputModesForPrimaryInputMode:(id)arg1 isSimulation:(bool)arg2;
- (void)feedBufferedTokenStringsToModel;
- (id)fetchPreferredAdditionalInputModes;
- (id)fetchPreferredSecondaryInputMode;
- (id)fetchUserEnabledInputModes;
- (id)fetchUserEnabledInputModesExcludingPreferredLanguages;
- (void)flushBuffer;
- (id)inferredAdditionalInputModes;
- (id)inferredSecondaryInputMode;
- (id)init;
- (id)initWithLanguageLikelihoodModel:(id)arg1 preferenceProvider:(id)arg2;
- (id)inputModeProbabilities;
- (id)languageLikelihoodModel;
- (double)lastOfflineAdaptationTimeForApp:(id)arg1;
- (id)preferenceProvider;
- (id)preferredAdditionalInputModes;
- (id)preferredSecondaryInputMode;
- (id)primaryInputMode;
- (float)priorProbabilityForInputMode:(id)arg1;
- (void)rebalanceBilingualInputModeWeights:(void*)arg1;
- (void)rebalanceMultipleInputModeWeights:(void*)arg1;
- (id)referenceInputModeProbabilities;
- (void)removeTokenString:(id)arg1 tokenID:(struct TITokenID { unsigned int x1; unsigned int x2; })arg2 context:(const struct TITokenID { unsigned int x1; unsigned int x2; }*)arg3 contextLength:(unsigned long long)arg4;
- (struct vector<float, std::allocator<float>> { float *x1; float *x2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_1_1; } x3; })retreiveExcessInputModeWeightRatiosFromCurrentWeights:(void*)arg1;
- (id)secondaryInputModeForUpdatedPrimaryInputMode:(id)arg1;
- (void)setActiveInputModes:(id)arg1;
- (void)setAdaptationContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInferredAdditionalInputModes:(id)arg1;
- (void)setInferredSecondaryInputMode:(id)arg1;
- (void)setPreferredAdditionalInputModes:(id)arg1;
- (void)setPreferredSecondaryInputMode:(id)arg1;
- (void)setPrimaryInputMode:(id)arg1;
- (void)setReferenceInputModeProbabilities:(id)arg1;
- (void)setUserEnabledInputModes:(id)arg1;
- (id)simulateImplicitInputModeDetectionForPrimaryInputMode:(id)arg1;
- (void)updateActiveInputModesSuppressingNotification:(bool)arg1;
- (bool)updateInputModeProbabilities;
- (id)userEnabledInputModes;

@end