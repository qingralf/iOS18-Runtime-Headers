/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKEnterCurrencyAmountView : UIView <PKNumberPadInputViewDelegate, UITextFieldDelegate_Private> {
    UIFont * _amountFont;
    NSNumberFormatter * _amountFormatter;
    UILabel * _amountLabel;
    NSString * _amountString;
    UITextField * _amountTextField;
    UIView * _bottomView;
    bool  _clearAmountOnFirstKeyboardInput;
    NSString * _currency;
    NSNumberFormatter * _currencySymbolAmountFormatter;
    UIFont * _currencySymbolFont;
    <PKEnterCurrencyAmountViewDelegate> * _delegate;
    bool  _enabled;
    bool  _ignoreIntegralNumber;
    UIView * _internalInputAccessoryView;
    bool  _isFirstKeyboardInput;
    NSNumber * _kerning;
    UIColor * _keyboardColor;
    double  _labelScaleFactor;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastLayoutBoundsSize;
    PKNumberPadInputView * _numberPad;
    NSDecimalNumberHandler * _roundingBehavior;
    bool  _showsDecimalPointButton;
    UIColor * _textColor;
}

@property (nonatomic, copy) UIFont *amountFont;
@property (nonatomic, retain) NSNumberFormatter *amountFormatter;
@property (nonatomic, retain) UILabel *amountLabel;
@property (nonatomic, copy) NSString *amountString;
@property (nonatomic, readonly) UITextField *amountTextField;
@property (nonatomic) bool clearAmountOnFirstKeyboardInput;
@property (nonatomic, retain) NSString *currency;
@property (nonatomic, retain) NSNumberFormatter *currencySymbolAmountFormatter;
@property (nonatomic, copy) UIFont *currencySymbolFont;
@property (nonatomic, retain) NSDecimalNumber *currentAmount;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } defaultKeyboardSize;
@property (nonatomic) <PKEnterCurrencyAmountViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoreIntegralNumber;
@property (nonatomic, retain) UIView *inputAccessoryView;
@property (nonatomic) bool isFirstKeyboardInput;
@property (nonatomic, copy) NSNumber *kerning;
@property (nonatomic, copy) UIColor *keyboardColor;
@property (nonatomic) double labelScaleFactor;
@property (nonatomic) struct CGSize { double x1; double x2; } lastLayoutBoundsSize;
@property (nonatomic, retain) PKNumberPadInputView *numberPad;
@property (nonatomic, retain) NSDecimalNumberHandler *roundingBehavior;
@property (nonatomic) bool showsDecimalPointButton;
@property (readonly) Class superclass;
@property (nonatomic, copy) UIColor *textColor;

+ (id)_defaultTextColor;

- (void).cxx_destruct;
- (void)_addSuperscriptToAttributedString:(id)arg1 formattedCurrencyAmount:(id)arg2 currencyAmountWithoutSymbols:(id)arg3;
- (void)_addSuperscriptToAttributedString:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_configureAmountTextFieldInputView;
- (void)_createAmountFormatter;
- (void)_createNumberPad;
- (void)_createSubviews;
- (id)_decimalNumberFromString:(id)arg1;
- (id)_formatAmount:(id)arg1 minimumFractionDigits:(unsigned long long)arg2;
- (id)_formatAmountForDisplay:(id)arg1 alwaysShowDecimalSeparator:(bool)arg2 minimumFractionDigits:(unsigned long long)arg3 useGroupingSeparator:(bool)arg4;
- (id)_formattedStringForAmount:(id)arg1;
- (unsigned long long)_numberOfDecimalPlacesInString:(id)arg1 decimalSeperator:(id)arg2;
- (void)_updateContent;
- (id)amountFont;
- (id)amountFormatter;
- (id)amountLabel;
- (id)amountString;
- (id)amountTextField;
- (bool)clearAmountOnFirstKeyboardInput;
- (id)currency;
- (id)currencySymbolAmountFormatter;
- (id)currencySymbolFont;
- (id)currentAmount;
- (struct CGSize { double x1; double x2; })defaultKeyboardSize;
- (id)delegate;
- (void)didMoveToWindow;
- (void)dismissKeyboard;
- (bool)enabled;
- (bool)ignoreIntegralNumber;
- (id)initWithCurrency:(id)arg1 amount:(id)arg2;
- (id)initWithCurrency:(id)arg1 amount:(id)arg2 bottomView:(id)arg3;
- (id)inputAccessoryView;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isFirstKeyboardInput;
- (id)kerning;
- (id)keyboardColor;
- (double)labelScaleFactor;
- (struct CGSize { double x1; double x2; })lastLayoutBoundsSize;
- (void)layoutSubviews;
- (id)numberPad;
- (void)numberPadInputView:(id)arg1 requestReplaceSelectedTextFieldRangeWithText:(id)arg2;
- (void)numberPadInputViewRequestDeleteText:(id)arg1;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;
- (id)roundingBehavior;
- (void)setAmountFont:(id)arg1;
- (void)setAmountFormatter:(id)arg1;
- (void)setAmountLabel:(id)arg1;
- (void)setAmountString:(id)arg1;
- (void)setClearAmountOnFirstKeyboardInput:(bool)arg1;
- (void)setCurrency:(id)arg1;
- (void)setCurrencySymbolAmountFormatter:(id)arg1;
- (void)setCurrencySymbolFont:(id)arg1;
- (void)setCurrentAmount:(id)arg1;
- (void)setCurrentAmount:(id)arg1 forceFormatForDisplay:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setIgnoreIntegralNumber:(bool)arg1;
- (void)setInputAccessoryView:(id)arg1;
- (void)setIsFirstKeyboardInput:(bool)arg1;
- (void)setKerning:(id)arg1;
- (void)setKeyboardColor:(id)arg1;
- (void)setLabelScaleFactor:(double)arg1;
- (void)setLastLayoutBoundsSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setNumberPad:(id)arg1;
- (void)setRoundingBehavior:(id)arg1;
- (void)setShowsDecimalPointButton:(bool)arg1;
- (void)setTextColor:(id)arg1;
- (void)showKeyboard;
- (bool)showsDecimalPointButton;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)textColor;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end