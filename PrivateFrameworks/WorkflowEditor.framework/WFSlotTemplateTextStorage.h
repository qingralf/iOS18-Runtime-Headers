/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
 */

@interface WFSlotTemplateTextStorage : NSTextStorage {
    NSArray * _contents;
    long long  _contentsTextAlignment;
    UIColor * _disabledSlotBackgroundColor;
    UIColor * _disabledSlotTitleColor;
    NSTextAttachment * _disclosureAttachment;
    unsigned long long  _editingLevel;
    bool  _enabled;
    UIFont * _font;
    NSMutableSet * _mutableHighlightedSlots;
    NSMutableSet * _mutableSelectedSlots;
    NSMutableSet * _mutableTypingSlots;
    NSTextAttachment * _outputButtonAttachment;
    NSParagraphStyle * _paragraphStyle;
    UIColor * _textColor;
    NSTextStorage * _textStorage;
    UIColor * _tintColor;
    UIFont * _unpopulatedFont;
}

@property (nonatomic, copy) NSArray *contents;
@property (nonatomic, readonly) long long contentsTextAlignment;
@property (nonatomic) <WFSlotTemplateTextStorageDelegate> *delegate;
@property (nonatomic, readonly) UIColor *disabledSlotBackgroundColor;
@property (nonatomic, readonly) UIColor *disabledSlotTitleColor;
@property (nonatomic, retain) NSTextAttachment *disclosureAttachment;
@property (nonatomic) unsigned long long editingLevel;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, readonly) NSSet *highlightedSlots;
@property (nonatomic, readonly) NSMutableSet *mutableHighlightedSlots;
@property (nonatomic, readonly) NSMutableSet *mutableSelectedSlots;
@property (nonatomic, readonly) NSMutableSet *mutableTypingSlots;
@property (nonatomic, retain) NSTextAttachment *outputButtonAttachment;
@property (nonatomic, copy) NSParagraphStyle *paragraphStyle;
@property (nonatomic, readonly) NSSet *selectedSlots;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, readonly) NSTextStorage *textStorage;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, readonly) NSSet *typingSlots;
@property (nonatomic, retain) UIFont *unpopulatedFont;

- (void).cxx_destruct;
- (void)_updateColorsForSlot:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)attributedStringForSlot:(id)arg1 isRTL:(bool)arg2;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (void)beginEditing;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })characterRangeForSlot:(id)arg1 includingInsideSpacingOpportunities:(bool)arg2;
- (id)contents;
- (long long)contentsTextAlignment;
- (void)didBeginTypingInSlot:(id)arg1;
- (void)didDeselectSlot:(id)arg1;
- (void)didEndTypingInSlot:(id)arg1;
- (void)didHighlightSlot:(id)arg1;
- (void)didSelectSlot:(id)arg1;
- (void)didUnhighlightSlot:(id)arg1;
- (id)disabledSlotBackgroundColor;
- (id)disabledSlotTitleColor;
- (id)disclosureAttachment;
- (unsigned long long)editingLevel;
- (void)endEditing;
- (void)enumerateContentInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingBlock:(id /* block */)arg2;
- (id)font;
- (void)getColorsForSlot:(id)arg1 titleColor:(out id*)arg2 backgroundColor:(out id*)arg3;
- (id)highlightedSlots;
- (id)init;
- (bool)isEnabled;
- (id)mutableHighlightedSlots;
- (id)mutableSelectedSlots;
- (id)mutableTypingSlots;
- (id)outputButtonAttachment;
- (id)paragraphStyle;
- (void)regenerateEntireAttributedString;
- (void)replaceAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)replaceAttributeInInanimateText:(id)arg1 value:(id)arg2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withString:(id)arg2;
- (id)selectedSlots;
- (void)setAttributes:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setContents:(id)arg1;
- (void)setDisabledSlotTitleColor:(id)arg1 backgroundColor:(id)arg2;
- (void)setDisclosureAttachment:(id)arg1;
- (void)setEditingLevel:(unsigned long long)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFont:(id)arg1;
- (void)setOutputButtonAttachment:(id)arg1;
- (void)setParagraphStyle:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setUnpopulatedFont:(id)arg1;
- (id)slotAtCharacterIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 effectiveContentRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (bool)slotContainsStrongRTL:(id)arg1;
- (unsigned long long)slotSpacingOpportunityAtCharacterIndex:(unsigned long long)arg1;
- (id)string;
- (id)stringForSlotSpacingOpportunity:(unsigned long long)arg1;
- (id)textColor;
- (id)textStorage;
- (id)tintColor;
- (id)typingSlots;
- (id)unpopulatedFont;
- (void)updateColorsForAllSlots;
- (void)updateColorsForSlot:(id)arg1;

@end
