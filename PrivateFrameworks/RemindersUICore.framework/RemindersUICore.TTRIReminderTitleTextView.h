/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemindersUICore.framework/RemindersUICore
 */

@interface RemindersUICore.TTRIReminderTitleTextView : RemindersUICore.TTRIExpandingTextView {
    void firstCharNeedsCapitalization;
    void isChangingSelection;
    void needsAdjustInternalTypingAttributes;
    void needsAdjustSelectionToSelectToken;
    void reminderTextStorage;
    void styleTypingAttributeState;
    void suggestions;
    void tokenInteraction;
    void ttrAccessibilityPreviousTextSuggestionType;
    void ttrAccessibilityPreviousTextSuggestions;
    void wantsCapitalizeNextCharacter;
}

@property (nonatomic, copy) NSString *accessibilityValue;
@property (nonatomic, readonly) bool canBecomeFocused;
@property (nonatomic, retain) <UITextInputDelegate> *inputDelegate;

- (void).cxx_destruct;
- (id)accessibilityValue;
- (void)adoptForeignHashtag:(id)arg1;
- (void)beginSelectionChange;
- (void)bulletedListStyleAction:(id)arg1;
- (bool)canBecomeFocused;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)convertTextToHashtag:(id)arg1;
- (void)copy:(id)arg1;
- (void)dashedListStyleAction:(id)arg1;
- (void)deleteBackward;
- (void)endSelectionChange;
- (id)initWithCoder:(id)arg1;
- (id)inputDelegate;
- (void)insertTextSuggestion:(id)arg1;
- (void)layoutSubviews;
- (void)numberedListStyleAction:(id)arg1;
- (void)paste:(id)arg1;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)removeHashtagAttribute:(id)arg1;
- (void)removeHashtagAttributedText:(id)arg1;
- (void)setAccessibilityValue:(id)arg1;
- (void)setInputDelegate:(id)arg1;
- (void)toggleBoldface:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (void)validateCommand:(id)arg1;

@end