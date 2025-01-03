/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI
 */

@interface PTUISliderRowTableViewCell : PTUIRowTableViewCell <PTUINumericKeypadDelegate, UITextFieldDelegate> {
    UISlider * _slider;
    UITextField * _textField;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_valueChanged:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)numericKeypadDidUpdateValue:(id)arg1;
- (void)numericKeypadWillDismiss:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)updateCellCharacteristics;
- (void)updateDisplayedValue;
- (void)updateLabel;
- (id)valueForText:(id)arg1;

@end
