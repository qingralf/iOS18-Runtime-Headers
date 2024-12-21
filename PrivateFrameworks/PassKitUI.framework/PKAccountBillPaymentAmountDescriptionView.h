/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKAccountBillPaymentAmountDescriptionView : UIView <PKEnterCurrencyAmountViewDelegate, PKNumberPadSuggestionsViewDelegate, UITextViewDelegate> {
    PKAccount * _account;
    PKAccountBillPaymentAmountContainerView * _amountContainerView;
    PKAccountServiceAccountResolutionConfiguration * _configuration;
    <PKAccountBillPaymentAmountDescriptionViewDelegate> * _delegate;
    NSString * _descriptionText;
    NSDecimalNumber * _enteredAmount;
    NSString * _learnMoreString;
    NSDecimalNumber * _maximumAmount;
    NSDecimalNumber * _minimumAmount;
    bool  _showDescriptionLabels;
    bool  _showDescriptionSubtitle;
    UITextView * _suggestedAmountDescriptionView;
    UILabel * _suggestedAmountTitleLabel;
    PKBillPaymentSuggestedAmountList * _suggestionList;
    PKNumberPadSuggestionsView * _suggestionView;
    NSString * _titleText;
}

@property (nonatomic, copy) NSDecimalNumber *amount;
@property (nonatomic, readonly) PKAccountBillPaymentAmountContainerView *amountContainerView;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <PKAccountBillPaymentAmountDescriptionViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *descriptionText;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDecimalNumber *maximumAmount;
@property (nonatomic, copy) NSDecimalNumber *minimumAmount;
@property (nonatomic) bool showAmount;
@property (nonatomic) bool showDescriptionLabels;
@property (nonatomic) bool showDescriptionSubtitle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *titleText;

- (void).cxx_destruct;
- (id)_enterCurrencyAmountView;
- (void)_enteredAmountDidChangeTo:(id)arg1;
- (bool)_isEnteredAmountValid;
- (id)_keypadSuggestions;
- (bool)_shouldShakeWithNewAmount:(id)arg1;
- (id)_suggestedAmountDescriptionAttributedString;
- (void)_updateDescriptionAlpha;
- (void)_updateEnteredAmount:(id)arg1;
- (id)amount;
- (id)amountContainerView;
- (id)delegate;
- (id)descriptionText;
- (void)dismissKeyboard;
- (bool)enterCurrencyAmountView:(id)arg1 shouldChangeAmountFrom:(id)arg2 to:(id)arg3;
- (void)enterCurrencyAmountViewDidChangeAmount:(id)arg1;
- (id)initWithSuggestedAmountList:(id)arg1 account:(id)arg2 configuration:(id)arg3 delegate:(id)arg4;
- (void)layoutSubviews;
- (id)maximumAmount;
- (id)minimumAmount;
- (void)normalizeEnteredAmount;
- (void)numberPadSuggestionsView:(id)arg1 didSelectSuggestion:(id)arg2;
- (void)setAmount:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setMaximumAmount:(id)arg1;
- (void)setMinimumAmount:(id)arg1;
- (void)setShowAmount:(bool)arg1;
- (void)setShowDescriptionLabels:(bool)arg1;
- (void)setShowDescriptionSubtitle:(bool)arg1;
- (void)setTitleText:(id)arg1;
- (bool)showAmount;
- (bool)showDescriptionLabels;
- (bool)showDescriptionSubtitle;
- (void)showKeyboard;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (id)titleText;

@end