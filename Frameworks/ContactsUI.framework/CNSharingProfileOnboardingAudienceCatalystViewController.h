/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNSharingProfileOnboardingAudienceCatalystViewController : OBWelcomeFullCenterContentController <CNSharingProfileOnboardingAudienceController, UITextFieldDelegate> {
    UILabel * _audienceDescriptionLabel;
    UILabel * _audienceLabel;
    UIButton * _audiencePickerButton;
    UIImageView * _avatarImageView;
    OBBoldTrayButton * _backButton;
    OBBoldTrayButton * _confirmButton;
    CNMutableContact * _contact;
    UIView * _customContentView;
    <CNSharingProfileOnboardingAudienceControllerDelegate> * _delegate;
    UITextField * _familyNameField;
    UITextField * _givenNameField;
    UILabel * _nameLabel;
    long long  _nameOrder;
    OBLinkTrayButton * _setupLaterButton;
    CNSharingProfileAudienceDataSource * _sharingAudienceDataSource;
}

@property (nonatomic, retain) UILabel *audienceDescriptionLabel;
@property (nonatomic, retain) UILabel *audienceLabel;
@property (nonatomic, retain) UIButton *audiencePickerButton;
@property (nonatomic, retain) UIImageView *avatarImageView;
@property (nonatomic, retain) OBBoldTrayButton *backButton;
@property (nonatomic, retain) OBBoldTrayButton *confirmButton;
@property (nonatomic, retain) CNMutableContact *contact;
@property (nonatomic, retain) UIView *customContentView;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <CNSharingProfileOnboardingAudienceControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UITextField *familyNameField;
@property (nonatomic, retain) UITextField *givenNameField;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic) long long nameOrder;
@property (nonatomic, retain) OBLinkTrayButton *setupLaterButton;
@property (nonatomic, retain) CNSharingProfileAudienceDataSource *sharingAudienceDataSource;
@property (readonly) Class superclass;

+ (id)descriptorForRequiredKeys;
+ (id)headerText;

- (void).cxx_destruct;
- (id)audienceDescriptionLabel;
- (id)audienceLabel;
- (id)audiencePickerButton;
- (id)avatarImageView;
- (id)backButton;
- (id)confirmButton;
- (id)confirmButtonTitle;
- (id)contact;
- (void)createAudienceDescriptionLabel;
- (void)createAudienceLabel;
- (void)createAudiencePickerButton;
- (void)createAvatarView;
- (void)createContentView;
- (void)createNameLabel;
- (void)createNameTextFields;
- (id)customContentView;
- (void)dealloc;
- (id)delegate;
- (void)didSelectSharingAudience:(unsigned long long)arg1;
- (void)familyNameDidChange:(id)arg1;
- (id)familyNameField;
- (void)givenNameDidChange:(id)arg1;
- (id)givenNameField;
- (void)handleBackTapped:(id)arg1;
- (void)handleConfirmButtonTapped:(id)arg1;
- (void)handleSetupLaterTapped:(id)arg1;
- (id)initWithContact:(id)arg1 selectedSharingAudience:(unsigned long long)arg2;
- (void)layoutContentView;
- (id)nameLabel;
- (long long)nameOrder;
- (void)setAudienceDescriptionLabel:(id)arg1;
- (void)setAudienceLabel:(id)arg1;
- (void)setAudiencePickerButton:(id)arg1;
- (void)setAvatarImageView:(id)arg1;
- (void)setBackButton:(id)arg1;
- (void)setConfirmButton:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setCustomContentView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFamilyNameField:(id)arg1;
- (void)setGivenNameField:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setNameOrder:(long long)arg1;
- (void)setSetupLaterButton:(id)arg1;
- (void)setSharingAudienceDataSource:(id)arg1;
- (id)setupLaterButton;
- (id)sharingAudienceDataSource;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)updateConfirmButtonEnabledState;
- (void)updateMenuForAudiencePicker;
- (void)viewDidLoad;

@end
