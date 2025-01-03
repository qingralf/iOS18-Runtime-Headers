/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI
 */

@interface SUUITextFieldSettingDescriptionView : SUUIFieldSettingDescriptionView <UITextFieldDelegate> {
    double  _aggregateLabelWidth;
    SUUIInputViewElement * _inputViewElement;
    UILabel * _label;
    SUUIFieldSettingDescription * _settingDescription;
    UITextField * _textField;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (struct CGSize { double x1; double x2; })preferredSizeForSettingDescription:(id)arg1 context:(id)arg2;
+ (bool)prefetchResourcesForSettingDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (void)requestLayoutForSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize { double x1; double x2; })sizeThatFitsWidth:(double)arg1 settingDescription:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (void)_addInputWithElement:(id)arg1;
- (void)_addLabelWithElement:(id)arg1;
- (void)_addTextInputWithElement:(id)arg1;
- (void)_alignView:(id)arg1 withBaselineLabel:(id)arg2 font:(id)arg3 offsetX:(double)arg4 fitWidth:(double)arg5;
- (void)_arrangeTextField:(id)arg1 andLabel:(id)arg2;
- (id)_currentControllerValue;
- (void)_fillLayoutWithView:(id)arg1 labelForBaselinePosition:(id)arg2;
- (void)_updateTextFieldValue:(id)arg1;
- (void)beginEdits;
- (void)commitEdits;
- (void)layoutSubviews;
- (void)reloadWithSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setEnabled:(bool)arg1;
- (bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)tintColorDidChange;

@end
