/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNLimitedAccessContactListCollectionViewCell : UICollectionViewListCell {
    UIImage * _avatarImage;
    unsigned long long  _caption;
    CNContact * _contact;
    CNContactFormatter * _contactFormatter;
    bool  _isShowingSearchResult;
}

@property (nonatomic, retain) UIImage *avatarImage;
@property (nonatomic) unsigned long long caption;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, retain) CNContactFormatter *contactFormatter;
@property (nonatomic) bool isShowingSearchResult;

- (void).cxx_destruct;
- (void)applyContactListStyleWithAvatarImage;
- (id)avatarImage;
- (unsigned long long)caption;
- (id)contact;
- (id)contactFormatter;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isShowingSearchResult;
- (void)layoutSubviews;
- (void)setAvatarImage:(id)arg1;
- (void)setCaption:(unsigned long long)arg1;
- (void)setContact:(id)arg1;
- (void)setContactFormatter:(id)arg1;
- (void)setIsShowingSearchResult:(bool)arg1;

@end
