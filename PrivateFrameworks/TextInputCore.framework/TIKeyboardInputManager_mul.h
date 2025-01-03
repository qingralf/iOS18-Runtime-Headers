/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIKeyboardInputManager_mul : TIKeyboardInputManager {
    bool  _choseSecondary;
    bool  _choseSecondaryPrev;
    long long  _indexOfLastDynamicSwitch;
    bool  _isFreezingInputMethodChoice;
    bool  _isSuspended;
}

@property (nonatomic) bool choseSecondary;
@property (nonatomic) long long indexOfLastDynamicSwitch;
@property (nonatomic) bool isFreezingInputMethodChoice;
@property (nonatomic, readonly) bool shouldDynamicallySwitchBetweenPrimaryAndSecondary;

- (id)candidateArray:(id)arg1 withCandidateUniquelyInsertedToFront:(id)arg2;
- (void)chooseBetterInputMethod;
- (bool)choseSecondary;
- (void)clearInput;
- (bool)containsActiveLanguage:(id)arg1 language:(id)arg2;
- (void)didUpdateInputModeProbabilities:(id)arg1;
- (void)didUpdateInputModes:(id)arg1;
- (bool)emphasizesAlternativeInput;
- (void)enumerateInputModesWithBlock:(id /* block */)arg1;
- (unsigned int)externalIndexToInternal:(unsigned int)arg1;
- (id)externalStringToInternal:(id)arg1;
- (bool)forceAutomaticMultiLanguageSwitch;
- (id)getBetterLexiconLocale:(bool*)arg1;
- (id)getCurrentExternalStringGiven:(bool)arg1;
- (id)getPlainCandidate;
- (void)handleAlternativeInput:(id)arg1 givenCandidate:(id)arg2;
- (id)handleKeyboardInput:(id)arg1;
- (long long)indexOfLastDynamicSwitch;
- (id)initWithConfig:(id)arg1 keyboardState:(id)arg2;
- (unsigned int)internalIndexToExternal:(unsigned int)arg1;
- (id)internalStringToExternal:(id)arg1;
- (bool)isFreezingInputMethodChoice;
- (bool)isHighMemoryManager;
- (bool)isUsingMultilingual;
- (void)keyLayoutDidChangeTo:(id)arg1;
- (id)keyLayoutMap;
- (id)keyLayoutMapAsNearbyKeys;
- (id)keyboardConfiguration;
- (void*)languageModelContainer;
- (unsigned int)lexiconIDForInputMode:(id)arg1;
- (struct vector<KB::LexiconInfo, std::allocator<KB::LexiconInfo>> { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct __compressed_pair<KB::LexiconInfo *, std::allocator<KB::LexiconInfo>> { struct { /* ? */ } *x_3_1_1; } x3; })lexiconInformationVector;
- (id)lexiconLocaleOfString:(id)arg1 inputMode:(id)arg2;
- (id)listOfModelLocalesFromActiveInputModes;
- (void)loadDictionaries;
- (id)modelLoaderForModelLocaleMapping:(id)arg1 customResourcePaths:(id)arg2 dynamicResourcePath:(id)arg3 usesLinguisticContext:(bool)arg4 isMultiLingualModeEnabled:(bool)arg5 validEnglishTransformerMultilingualConfig:(bool)arg6;
- (id)modelLocaleToInputModeMapping;
- (id)resourceInputModes;
- (void)resume;
- (void)setChoseSecondary:(bool)arg1;
- (void)setIndexOfLastDynamicSwitch:(long long)arg1;
- (void)setIsFreezingInputMethodChoice:(bool)arg1;
- (bool)shouldDynamicallySwitchBetweenPrimaryAndSecondary;
- (bool)shouldFreezeInputMethodChoiceForPopupVariants;
- (bool)shouldPassAlternativeInputAsPrediction:(id)arg1 isRecognized:(bool)arg2;
- (bool)shouldUpdateDictionary;
- (bool)stringIsRecognizedByAlternativeIM:(id)arg1;
- (void)suspend;
- (void)updateAutocorrectionListGivenOutdatedInput:(id)arg1 andUpdatedInput:(id)arg2;
- (bool)updateLanguageModelForKeyboardState;
- (void)updateLanguagePriors;
- (bool)usesRetrocorrection;
- (bool)validEnglishTransformerMultilingualConfig;
- (float)weightForInputMode:(id)arg1;

@end
