/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITextInputSessionAction : NSObject {
    NSString * _appBundleId;
    long long  _flagOptions;
    long long  _inputActionCountFromMergedActions;
    unsigned long long  _insertedEmojiCount;
    unsigned long long  _insertedPunctuationCount;
    unsigned long long  _insertedTextLength;
    NSString * _keyboardLayout;
    NSString * _keyboardType;
    NSString * _keyboardVariant;
    NSString * _language;
    unsigned long long  _largestSingleDeletionLength;
    unsigned long long  _largestSingleInsertionLength;
    NSString * _region;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _relativeRangeBefore;
    unsigned long long  _removedEmojiCount;
    unsigned long long  _removedPunctuationCount;
    unsigned long long  _removedTextLength;
    long long  _source;
    long long  _textInputActionsSource;
    long long  _textInputActionsType;
}

@property (nonatomic, copy) NSString *appBundleId;
@property (nonatomic, readonly) _UITextInputSessionBeganAction *asBegan;
@property (nonatomic, readonly) _UITextInputSessionCopyAction *asCopy;
@property (nonatomic, readonly) _UITextInputSessionCutAction *asCut;
@property (nonatomic, readonly) _UITextInputSessionDeletionAction *asDeletion;
@property (nonatomic, readonly) _UITextInputSessionDictationBeganAction *asDictationBegan;
@property (nonatomic, readonly) _UITextInputSessionDictationEndedAction *asDictationEnded;
@property (nonatomic, readonly) _UITextInputSessionEndAction *asEnd;
@property (nonatomic, readonly) _UITextInputSessionInsertionAction *asInsertion;
@property (nonatomic, readonly) _UITextInputSessionKeyboardDockItemButtonPressAction *asKeyboardDockItemButtonPress;
@property (nonatomic, readonly) _UITextInputSessionPasteAction *asPaste;
@property (nonatomic, readonly) _UITextInputSessionRedoAction *asRedo;
@property (nonatomic, readonly) _UITextInputSessionReplaceTextAction *asReplaceText;
@property (nonatomic, readonly) _UITextInputSessionReplaceWithCandidateAction *asReplaceWithCandidate;
@property (nonatomic, readonly) _UITextInputSessionSelectionAction *asSelection;
@property (nonatomic, readonly) _UITextInputSessionUndoAction *asUndo;
@property (nonatomic, readonly) bool changedContent;
@property (nonatomic) long long flagOptions;
@property (nonatomic, readonly) long long inputActionCount;
@property (nonatomic) long long inputActionCountFromMergedActions;
@property (nonatomic) unsigned long long insertedEmojiCount;
@property (nonatomic) unsigned long long insertedPunctuationCount;
@property (nonatomic) unsigned long long insertedTextLength;
@property (nonatomic, readonly) bool isCapableOfTextInsertion;
@property (nonatomic, copy) NSString *keyboardLayout;
@property (nonatomic, copy) NSString *keyboardType;
@property (nonatomic, copy) NSString *keyboardVariant;
@property (nonatomic, copy) NSString *language;
@property (nonatomic) unsigned long long largestSingleDeletionLength;
@property (nonatomic) unsigned long long largestSingleInsertionLength;
@property (nonatomic, readonly) long long netCharacterCount;
@property (nonatomic, copy) NSString *region;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } relativeRangeBefore;
@property (nonatomic) unsigned long long removedEmojiCount;
@property (nonatomic) unsigned long long removedPunctuationCount;
@property (nonatomic) unsigned long long removedTextLength;
@property (nonatomic) long long source;
@property (nonatomic) long long textInputActionsSource;
@property (nonatomic) long long textInputActionsType;

- (void).cxx_destruct;
- (id)appBundleId;
- (id)asBegan;
- (id)asCopy;
- (id)asCut;
- (id)asDeletion;
- (id)asDictationBegan;
- (id)asDictationEnded;
- (id)asEnd;
- (id)asInsertion;
- (id)asKeyboardDockItemButtonPress;
- (id)asPaste;
- (id)asRedo;
- (id)asReplaceText;
- (id)asReplaceWithCandidate;
- (id)asSelection;
- (id)asUndo;
- (bool)changedContent;
- (id)description;
- (long long)flagOptions;
- (long long)inputActionCount;
- (long long)inputActionCountFromMergedActions;
- (id)inputModeUniqueString;
- (unsigned long long)insertedEmojiCount;
- (unsigned long long)insertedPunctuationCount;
- (unsigned long long)insertedTextLength;
- (bool)isCapableOfTextInsertion;
- (bool)isMergeableWith:(id)arg1;
- (id)keyboardLayout;
- (id)keyboardType;
- (id)keyboardVariant;
- (id)language;
- (unsigned long long)largestSingleDeletionLength;
- (unsigned long long)largestSingleInsertionLength;
- (long long)mergeActionIfPossible:(id)arg1;
- (long long)netCharacterCount;
- (id)region;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })relativeRangeBefore;
- (unsigned long long)removedEmojiCount;
- (unsigned long long)removedPunctuationCount;
- (unsigned long long)removedTextLength;
- (void)setAppBundleId:(id)arg1;
- (void)setFlagOptions:(long long)arg1;
- (void)setInputActionCountFromMergedActions:(long long)arg1;
- (void)setInsertedEmojiCount:(unsigned long long)arg1;
- (void)setInsertedPunctuationCount:(unsigned long long)arg1;
- (void)setInsertedTextLength:(unsigned long long)arg1;
- (void)setInsertedTextLengthWithoutTracking:(unsigned long long)arg1;
- (void)setKeyboardLayout:(id)arg1;
- (void)setKeyboardType:(id)arg1;
- (void)setKeyboardVariant:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLargestSingleDeletionLength:(unsigned long long)arg1;
- (void)setLargestSingleInsertionLength:(unsigned long long)arg1;
- (void)setRegion:(id)arg1;
- (void)setRelativeRangeBefore:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setRemovedEmojiCount:(unsigned long long)arg1;
- (void)setRemovedPunctuationCount:(unsigned long long)arg1;
- (void)setRemovedTextLength:(unsigned long long)arg1;
- (void)setRemovedTextLengthWithoutTracking:(unsigned long long)arg1;
- (void)setSource:(long long)arg1;
- (void)setTextInputActionsSource:(long long)arg1;
- (void)setTextInputActionsType:(long long)arg1;
- (long long)source;
- (long long)textInputActionsSource;
- (long long)textInputActionsType;

@end