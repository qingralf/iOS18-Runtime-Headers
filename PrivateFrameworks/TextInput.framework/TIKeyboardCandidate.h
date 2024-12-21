/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardCandidate : NSObject <NSCopying, NSSecureCoding, TIKeyboardCandidateCoding> {
    NSString * _alternativeText;
    NSString * _annotationText;
    bool  _asIsCandidate;
    unsigned long long  _candidateProperty;
    int  _confidence;
    unsigned long long  _customInfoType;
    unsigned long long  _indexForMetrics;
    bool  _isAlternativeInput;
    bool  _isMeCardCandidate;
    bool  _isSendCurrentLocation;
    NSString * _latinCandidate;
    NSString * _lexiconLocale;
    bool  _prefixMatched;
    bool  _responseKitCandidate;
    NSString * _responseKitCategory;
    unsigned long long  _secureCandidateHash;
    double  _secureCandidateWidth;
    bool  _shouldHintAtAlternativeInput;
    unsigned int  _slotID;
    TIKeyboardCandidate * _smartReplySourceCandidate;
    NSNumber * _staticLinguisticLikelihood;
    NSArray * _supplementalItemIdentifiers;
    unsigned short  _supplementalItemPrefix;
    unsigned int  _typingEngine;
    bool  _wubixingConvertedByPinyin;
}

@property (getter=isOTAWordListCandidate, nonatomic, readonly) bool OTAWordListCandidate;
@property (nonatomic, readonly) NSString *altDSID;
@property (nonatomic, copy) NSString *alternativeText;
@property (nonatomic, copy) NSString *annotationText;
@property (nonatomic, readonly) NSString *applicationBundleId;
@property (nonatomic, readonly) NSString *applicationKey;
@property (getter=isAsIsCandidate, nonatomic, readonly) bool asIsCandidate;
@property (getter=isBilingualCandidate, nonatomic, readonly) bool bilingualCandidate;
@property (nonatomic, readonly) NSString *candidate;
@property (nonatomic, readonly) unsigned long long candidateProperty;
@property (getter=isCompletionCandidate, nonatomic, readonly) bool completionCandidate;
@property (getter=confidence, nonatomic) int confidence;
@property (getter=isContinuousPathConversion, nonatomic, readonly) bool continuousPathConversion;
@property (nonatomic, readonly) long long cursorMovement;
@property (nonatomic) unsigned long long customInfoType;
@property (nonatomic, retain) UIView *customView;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) unsigned long long deleteCount;
@property (readonly, copy) NSString *description;
@property (getter=isEmojiCandidate, nonatomic, readonly) bool emojiCandidate;
@property (getter=isExtensionCandidate, nonatomic, readonly) bool extensionCandidate;
@property (getter=isFacemarkCandidate, nonatomic, readonly) bool facemarkCandidate;
@property (getter=isFullwidthCandidate, nonatomic, readonly) bool fullwidthCandidate;
@property (nonatomic, copy) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic) unsigned long long indexForMetrics;
@property (getter=isInlineCandidate, nonatomic, readonly) bool inlineCandidate;
@property (getter=isInlineCompletionCandidate, nonatomic, readonly) bool inlineCompletionCandidate;
@property (nonatomic, readonly) NSString *input;
@property (nonatomic, readonly) NSString *inputWithoutSupplementalItemPrefix;
@property (nonatomic, readonly) bool isAddress;
@property (nonatomic) bool isAlternativeInput;
@property (nonatomic, readonly) bool isAutocorrection;
@property (nonatomic, readonly) bool isAutocorrectionIgnoringCaseAndDiacriticsAndSupplementalItemPrefix;
@property (nonatomic, readonly) bool isAutocorrectionIgnoringCaseAndSupplementalItemPrefix;
@property (nonatomic, readonly) bool isAutofillCandidate;
@property (nonatomic, readonly) bool isAutofillExtraCandidate;
@property (nonatomic, readonly) bool isForShortcutConversion;
@property (nonatomic) bool isMeCardCandidate;
@property (nonatomic, readonly) bool isReplacement;
@property (nonatomic) bool isSendCurrentLocation;
@property (nonatomic, readonly) bool isSlottedCandidate;
@property (nonatomic, readonly) bool isStickerCandidate;
@property (nonatomic, readonly) bool isWritingToolsButtonCandidate;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, readonly) NSString *latinCandidate;
@property (nonatomic, readonly) unsigned long long learningFlagsMask;
@property (nonatomic, copy) NSString *lexiconLocale;
@property (getter=isMecabraCandidate, nonatomic, readonly) bool mecabraCandidate;
@property (getter=isPartialCandidate, nonatomic, readonly) bool partialCandidate;
@property (getter=isPrefixMatched, nonatomic, readonly) bool prefixMatched;
@property (nonatomic, readonly) TIProactiveTrigger *proactiveTrigger;
@property (getter=isPunctuationCompletionCandidate, nonatomic, readonly) bool punctuationCompletionCandidate;
@property (getter=isPunctuationKeyCandidate, nonatomic, readonly) bool punctuationKeyCandidate;
@property (nonatomic, readonly) NSString *rawInput;
@property (getter=isRegionalCandidate, nonatomic, readonly) bool regionalCandidate;
@property (getter=isResponseKitCandidate, nonatomic, readonly) bool responseKitCandidate;
@property (nonatomic, readonly, copy) NSString *responseKitCategory;
@property (nonatomic) unsigned long long secureCandidateHash;
@property (nonatomic) double secureCandidateWidth;
@property (getter=isSecureContentCandidate, nonatomic, readonly) bool secureContentCandidate;
@property (nonatomic, readonly) NSString *shortDescription;
@property (nonatomic, readonly) bool shouldAccept;
@property (nonatomic) bool shouldHintAtAlternativeInput;
@property (nonatomic, readonly) bool shouldInsertSpaceAfterSelection;
@property (nonatomic) unsigned int slotID;
@property (nonatomic, retain) TIKeyboardCandidate *smartReplySourceCandidate;
@property (nonatomic) unsigned int sourceMask;
@property (nonatomic, copy) NSNumber *staticLinguisticLikelihood;
@property (getter=isStickerCandidate, nonatomic, readonly) bool stickerCandidate;
@property (nonatomic, readonly) NSUUID *stickerIdentifier;
@property (readonly) Class superclass;
@property (getter=isSupplementalItemCandidate, nonatomic, readonly) bool supplementalItemCandidate;
@property (nonatomic, copy) NSArray *supplementalItemIdentifiers;
@property (nonatomic) unsigned short supplementalItemPrefix;
@property (getter=isToucanInlineCompletionCandidate, nonatomic, readonly) bool toucanInlineCompletionCandidate;
@property (getter=isTransliterationCandidate, nonatomic, readonly) bool transliterationCandidate;
@property (nonatomic) unsigned int typingEngine;
@property (nonatomic, readonly) unsigned int usageTrackingMask;
@property (nonatomic, readonly) unsigned long long wordOriginFeedbackID;
@property (getter=isWubixingConvertedByPinyin, nonatomic, readonly) bool wubixingConvertedByPinyin;

// Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput

+ (bool)supportsSecureCoding;
+ (int)type;

- (void).cxx_destruct;
- (id)altDSID;
- (id)alternativeText;
- (id)annotationText;
- (id)applicationBundleId;
- (id)applicationKey;
- (id)candidate;
- (id)candidateByReplacingWithCandidate:(id)arg1;
- (id)candidateByReplacingWithCandidate:(id)arg1 input:(id)arg2;
- (id)candidateByReplacingWithCandidate:(id)arg1 input:(id)arg2 rawInput:(id)arg3;
- (id)candidateByReplacingWithSourceMask:(unsigned int)arg1;
- (unsigned long long)candidateProperty;
- (int)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)cursorMovement;
- (unsigned long long)customInfoType;
- (unsigned long long)deleteCount;
- (id)description;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)indexForMetrics;
- (id)init;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)input;
- (id)inputWithoutSupplementalItemPrefix;
- (bool)isAddress;
- (bool)isAlternativeInput;
- (bool)isAsIsCandidate;
- (bool)isAutocorrection;
- (bool)isAutocorrectionIgnoringCaseAndDiacriticsAndSupplementalItemPrefix;
- (bool)isAutocorrectionIgnoringCaseAndSupplementalItemPrefix;
- (bool)isBilingualCandidate;
- (bool)isCompletionCandidate;
- (bool)isContinuousPathConversion;
- (bool)isEmojiCandidate;
- (bool)isEqual:(id)arg1;
- (bool)isExtensionCandidate;
- (bool)isFacemarkCandidate;
- (bool)isForShortcutConversion;
- (bool)isFullwidthCandidate;
- (bool)isInlineCandidate;
- (bool)isInlineCompletionCandidate;
- (bool)isMeCardCandidate;
- (bool)isMecabraCandidate;
- (bool)isNotAutocorrectedSinceTopCandidateVulgar;
- (bool)isOTAWordListCandidate;
- (bool)isPartialCandidate;
- (bool)isPrefixMatched;
- (bool)isPunctuation;
- (bool)isPunctuationCompletionCandidate;
- (bool)isPunctuationKeyCandidate;
- (bool)isRegionalCandidate;
- (bool)isResponseKitCandidate;
- (bool)isSecureContentCandidate;
- (bool)isSendCurrentLocation;
- (bool)isStickerCandidate;
- (bool)isSupplementalItemCandidate;
- (bool)isToucanInlineCompletionCandidate;
- (bool)isTransliterationCandidate;
- (bool)isWubixingConvertedByPinyin;
- (id)label;
- (id)latinCandidate;
- (unsigned long long)learningFlagsMask;
- (id)lexiconLocale;
- (id)proactiveTrigger;
- (id)rawInput;
- (id)responseKitCategory;
- (unsigned long long)secureCandidateHash;
- (double)secureCandidateWidth;
- (void)setAlternativeText:(id)arg1;
- (void)setAnnotationText:(id)arg1;
- (void)setConfidence:(int)arg1;
- (void)setCustomInfoType:(unsigned long long)arg1;
- (void)setIndexForMetrics:(unsigned long long)arg1;
- (void)setIsAlternativeInput:(bool)arg1;
- (void)setIsMeCardCandidate:(bool)arg1;
- (void)setIsSendCurrentLocation:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setLexiconLocale:(id)arg1;
- (void)setSecureCandidateHash:(unsigned long long)arg1;
- (void)setSecureCandidateWidth:(double)arg1;
- (void)setShouldHintAtAlternativeInput:(bool)arg1;
- (void)setSlotID:(unsigned int)arg1;
- (void)setSmartReplySourceCandidate:(id)arg1;
- (void)setSourceMask:(unsigned int)arg1;
- (void)setStaticLinguisticLikelihood:(id)arg1;
- (void)setSupplementalItemIdentifiers:(id)arg1;
- (void)setSupplementalItemPrefix:(unsigned short)arg1;
- (void)setTypingEngine:(unsigned int)arg1;
- (id)shortDescription;
- (bool)shouldAccept;
- (bool)shouldHintAtAlternativeInput;
- (bool)shouldInsertSpaceAfterSelection;
- (unsigned int)slotID;
- (id)smartReplySourceCandidate;
- (unsigned int)sourceMask;
- (id)staticLinguisticLikelihood;
- (id)stickerIdentifier;
- (id)supplementalItemIdentifiers;
- (unsigned short)supplementalItemPrefix;
- (unsigned int)typingEngine;
- (unsigned int)usageTrackingMask;
- (unsigned long long)wordOriginFeedbackID;

// Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl

- (bool)isAutofillExtraCandidate;
- (bool)isSlottedCandidate;

// Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore

- (void)core_updateWithSupplementalItemPrefix:(unsigned short)arg1;

// Image: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI

- (bool)isAutofillExtraCandidate;
- (bool)isSlottedCandidate;
- (bool)isStickerCandidate;
- (bool)isWritingToolsButtonCandidate;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)imageNameForTextEffectsButton;
+ (id)textEffectsButtonCandidate;

- (id)customView;
- (id /* block */)handler;
- (id)icon;
- (bool)isAutofillCandidate;
- (bool)isReplacement;
- (bool)isSlottedCandidate;
- (void)setCustomView:(id)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setIcon:(id)arg1;
- (bool)ui_hasSupplementalItems;
- (id)ui_supplementalItems;

@end