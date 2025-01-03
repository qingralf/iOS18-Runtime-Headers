/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKOrganDonationAddressCell : HKSimpleDataEntryCell <UITextFieldDelegate> {
    UIView * _addressContainerView;
    UIView * _addressSeparator;
    UIView * _citySeparator;
    UITextField * _cityTextField;
    <HKSimpleDataEntryCellDelegate> * _delegate;
    bool  _editDisabled;
    UIView * _horizontalSeparator;
    UIView * _stateSeparator;
    UIButton * _stateShadowButton;
    UITextField * _stateTextField;
    UIView * _stateZipSeparator;
    UITextField * _streetOneTextField;
    UITextField * _streetTwoTextField;
    UILabel * _titleLabel;
    UIView * _verticalSeparator;
    UITextField * _zipCodeTextField;
}

@property (nonatomic, retain) UITextField *cityTextField;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <HKSimpleDataEntryCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UITextField *stateTextField;
@property (nonatomic, retain) UITextField *streetOneTextField;
@property (nonatomic, retain) UITextField *streetTwoTextField;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITextField *zipCodeTextField;

- (void).cxx_destruct;
- (void)_setupFonts;
- (void)_setupLayoutConstraints;
- (void)_stateShadowButtonTapped:(id)arg1;
- (void)beginEditing;
- (id)cityTextField;
- (id)delegate;
- (bool)editDisabled;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setCityTextField:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditDisabled:(bool)arg1;
- (void)setStateTextField:(id)arg1;
- (void)setStreetOneTextField:(id)arg1;
- (void)setStreetTwoTextField:(id)arg1;
- (void)setZipCodeTextField:(id)arg1;
- (id)stateTextField;
- (id)streetOneTextField;
- (id)streetTwoTextField;
- (void)textFieldDidChangeValue:(id)arg1;
- (bool)textFieldShouldBeginEditing:(id)arg1;
- (id)zipCodeTextField;

@end
