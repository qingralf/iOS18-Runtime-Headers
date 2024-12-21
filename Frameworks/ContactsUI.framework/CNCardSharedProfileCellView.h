/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNCardSharedProfileCellView : UIView <CNUILikenessCachingRendererDelegate> {
    unsigned long long  _actionToPerformUponCacheInvalidation;
    bool  _allowsEditing;
    CNAvatarImageRenderer * _avatarImageRenderer;
    CNAvatarView * _avatarView;
    UIImageView * _chevronImageView;
    NSArray * _constraints;
    CNContact * _contact;
    <CNCardSharedProfileCellViewDelegate> * _delegate;
    UIStackView * _labelStackView;
    CNCardSharedProfileCellMenuButton * _menuButton;
    CNPropertyGroupItem * _propertyItem;
    <CNAvatarImageRenderingScope> * _renderingScope;
    CNSharedProfileStateOracle * _sharedProfileStateOracle;
    UILabel * _titleLabel;
    UILabel * _valueLabel;
}

@property (nonatomic) unsigned long long actionToPerformUponCacheInvalidation;
@property (nonatomic) bool allowsEditing;
@property (nonatomic, retain) CNAvatarImageRenderer *avatarImageRenderer;
@property (nonatomic, retain) CNAvatarView *avatarView;
@property (nonatomic, retain) UIImageView *chevronImageView;
@property (nonatomic, retain) NSArray *constraints;
@property (nonatomic, retain) CNContact *contact;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <CNCardSharedProfileCellViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIStackView *labelStackView;
@property (nonatomic, retain) CNCardSharedProfileCellMenuButton *menuButton;
@property (nonatomic, retain) CNPropertyGroupItem *propertyItem;
@property (nonatomic, retain) <CNAvatarImageRenderingScope> *renderingScope;
@property (nonatomic, retain) CNSharedProfileStateOracle *sharedProfileStateOracle;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UILabel *valueLabel;

+ (id)log;

- (void).cxx_destruct;
- (unsigned long long)actionToPerformUponCacheInvalidation;
- (bool)allowsEditing;
- (void)avatarCacheDidUpdateForIdentifiers:(id)arg1;
- (id)avatarImageForActionType:(unsigned long long)arg1;
- (id)avatarImageRenderer;
- (id)avatarView;
- (id)chevronImageView;
- (id)constraints;
- (id)contact;
- (id)contactDisplayName;
- (id)customMenu;
- (id)delegate;
- (id)init;
- (void)invalidateAvatarCacheEntriesForContact:(id)arg1;
- (id)labelStackView;
- (id)menuActions;
- (id)menuButton;
- (void)performFallbackAction;
- (id)propertyItem;
- (id)renderingScope;
- (id)revertToCustomAction;
- (id)revertToPreviousAction;
- (void)setActionToPerformUponCacheInvalidation:(unsigned long long)arg1;
- (void)setAllowsEditing:(bool)arg1;
- (void)setAvatarImageRenderer:(id)arg1;
- (void)setAvatarView:(id)arg1;
- (void)setChevronImageView:(id)arg1;
- (void)setConstraints:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLabelStackView:(id)arg1;
- (void)setLabelTextAttributes:(id)arg1;
- (void)setMenuButton:(id)arg1;
- (void)setPropertyItem:(id)arg1;
- (void)setRenderingScope:(id)arg1;
- (void)setSharedProfileStateOracle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setUpAvatarView;
- (void)setUpChevron;
- (void)setUpChevronAndMenuIfNeeded;
- (void)setUpLabels;
- (void)setUpMenuButton;
- (void)setValueLabel:(id)arg1;
- (void)setupConstraints;
- (void)setupViews;
- (id)sharedMenu;
- (id)sharedMenuTitle;
- (long long)sharedPhotoDisplayPreference;
- (id)sharedProfileStateOracle;
- (bool)shouldShowMenu;
- (void)startObservingAvatarCacheInvalidation;
- (id)titleLabel;
- (id)updateAction;
- (void)updateConstraints;
- (void)updateMenuButton;
- (id)valueLabel;

@end