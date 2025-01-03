/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSEditableTableCell : PSTableCell <UITextFieldDelegate, UITextViewDelegate> {
    PSListController * _controllerDelegate;
    bool  _delaySpecifierRelease;
    id  _delegate;
    bool  _forceFirstResponder;
    id  _realTarget;
    bool  _returnKeyTapped;
    SEL  _targetSetter;
    UIColor * _textColor;
    bool  _valueChanged;
}

@property (nonatomic) PSListController *controllerDelegate;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool returnKeyTapped;
@property (readonly) Class superclass;

+ (long long)cellStyle;

- (void).cxx_destruct;
- (bool)_cellIsEditing;
- (id)_defaultTextColor;
- (void)_saveForExit;
- (void)_setValueChanged;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (bool)canReload;
- (bool)canResignFirstResponder;
- (void)cellRemovedFromView;
- (void)controlChanged:(id)arg1;
- (id)controllerDelegate;
- (void)dealloc;
- (double)defaultTextFieldIndentation;
- (void)endEditingAndSave;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (bool)isEditing;
- (bool)isFirstResponder;
- (bool)isTextFieldEditing;
- (void)layoutSubviews;
- (double)minTextFieldIndentation;
- (void)prepareForReuse;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (bool)resignFirstResponder;
- (bool)returnKeyTapped;
- (void)setCellEnabled:(bool)arg1;
- (void)setControllerDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPlaceholderText:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 specifier:(id)arg3;
- (id)textField;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (double)textFieldHorizontalPadding;
- (bool)textFieldShouldClear:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (id)value;

@end
