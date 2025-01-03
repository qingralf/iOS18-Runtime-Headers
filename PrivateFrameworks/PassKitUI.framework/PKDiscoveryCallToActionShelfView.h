/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKDiscoveryCallToActionShelfView : PKDiscoveryShelfView <PKLinkedApplicationObserver> {
    PKContinuousButton * _button;
    PKDiscoveryCallToAction * _callToAction;
    PKDiscoveryCallToActionShelf * _ctaShelf;
    <PKDiscoveryCardViewDelegate> * _delegate;
    bool  _hasButton;
    bool  _hasIcon;
    bool  _hasSubtitle;
    bool  _hasTitle;
    bool  _hasWordmarkAsset;
    PKDiscoveryMedia * _icon;
    UIImageView * _iconImageView;
    struct CGSize { 
        double width; 
        double height; 
    }  _iconSize;
    PKLinkedApplication * _linkedApplication;
    bool  _showActivityIndicator;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
    PKDiscoveryMedia * _wordmarkAsset;
    struct CGSize { 
        double width; 
        double height; 
    }  _wordmarkAssetSize;
    UIImageView * _wordmarkImageView;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <PKDiscoveryCardViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool showActivityIndicator;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_buttonPressed:(id)arg1;
- (double)_desiredWordmarkAssetHeight;
- (bool)_isFooterWordmarkOnly;
- (struct CGSize { double x1; double x2; })_wordmarkAssetSize;
- (id)delegate;
- (id)initWithShelf:(id)arg1;
- (void)layoutSubviews;
- (void)linkedApplicationDidChangeState:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImage:(id)arg1 animated:(bool)arg2;
- (void)setShowActivityIndicator:(bool)arg1;
- (void)setWordmarkAsset:(id)arg1 animated:(bool)arg2;
- (bool)showActivityIndicator;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
