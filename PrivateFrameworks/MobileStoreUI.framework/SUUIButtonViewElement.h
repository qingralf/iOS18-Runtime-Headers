/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI
 */

@interface SUUIButtonViewElement : SUUIViewElement {
    bool  _autoIncrementCount;
    NSString * _badgeResourceName;
    bool  _bigHitButton;
    double  _bigHitSize;
    NSString * _bundleIdentifier;
    SUUIViewElementText * _buttonText;
    long long  _buttonViewSubType;
    long long  _buttonViewType;
    SUUIBuyButtonDescriptor * _buyButtonDescriptor;
    NSString * _confirmationText;
    long long  _dataPlaybackId;
    bool  _disabledButSelectable;
    BOOL  _enabled;
    long long  _itemIdentifier;
    NSString * _nonToggledText;
    NSString * _playItemIdentifier;
    bool  _selected;
    bool  _showOnDemand;
    NSString * _sizeVariant;
    SUUIStoreIdentifier * _storeIdentifier;
    bool  _suppressCloudRestore;
    NSString * _toggleItemIdentfier;
    NSString * _toggleItemIdentifier;
    bool  _toggled;
    NSString * _toggledText;
    NSString * _variantIdentifier;
    IKDOMElement * _xml;
}

@property (nonatomic, readonly) SUUIImageViewElement *additionalButtonImage;
@property (nonatomic, readonly) bool autoIncrementCount;
@property (nonatomic, readonly) NSString *badgeResourceName;
@property (getter=isBigHitButton, nonatomic, readonly) bool bigHitButton;
@property (nonatomic, readonly) double bigHitSize;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) SUUIImageViewElement *buttonImage;
@property (nonatomic, readonly) SUUIViewElementText *buttonText;
@property (nonatomic, readonly) IKViewElementStyle *buttonTitleStyle;
@property (nonatomic, readonly) long long buttonViewSubType;
@property (nonatomic, readonly) long long buttonViewType;
@property (nonatomic, retain) SUUIBuyButtonDescriptor *buyButtonDescriptor;
@property (nonatomic, readonly) NSString *confirmationText;
@property (nonatomic, readonly) long long dataPlaybackId;
@property (getter=isDisabledButSelectable, nonatomic, readonly) bool disabledButSelectable;
@property (nonatomic, readonly) long long itemIdentifier;
@property (nonatomic, readonly) NSString *nonToggledText;
@property (nonatomic, readonly) NSString *playItemIdentifier;
@property (getter=isSelected, nonatomic, readonly) bool selected;
@property (nonatomic, readonly) bool showOnDemand;
@property (nonatomic, readonly) NSString *sizeVariant;
@property (nonatomic, readonly) SUUIStoreIdentifier *storeIdentifier;
@property (nonatomic, readonly) bool suppressCloudRestore;
@property (nonatomic, readonly) NSString *toggleItemIdentifier;
@property (getter=isToggled, nonatomic) bool toggled;
@property (nonatomic, readonly) NSString *toggledText;
@property (nonatomic, readonly) NSString *variantIdentifier;

- (void).cxx_destruct;
- (id)_parseButtonText;
- (id)additionalButtonImage;
- (id)applyUpdatesWithElement:(id)arg1;
- (bool)autoIncrementCount;
- (id)badgeResourceName;
- (double)bigHitSize;
- (id)bundleIdentifier;
- (id)buttonImage;
- (id)buttonText;
- (id)buttonTitleStyle;
- (long long)buttonViewSubType;
- (long long)buttonViewType;
- (id)buyButtonDescriptor;
- (id)confirmationText;
- (long long)dataPlaybackId;
- (void)dealloc;
- (id)description;
- (unsigned long long)elementType;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (bool)isBigHitButton;
- (bool)isDisabledButSelectable;
- (bool)isEnabled;
- (bool)isSelected;
- (bool)isToggled;
- (long long)itemIdentifier;
- (id)nonToggledText;
- (long long)pageComponentType;
- (id)personalizationLibraryItems;
- (id)playItemIdentifier;
- (void)setBuyButtonDescriptor:(id)arg1;
- (void)setToggled:(bool)arg1;
- (bool)showOnDemand;
- (id)sizeVariant;
- (id)storeIdentifier;
- (bool)suppressCloudRestore;
- (id)toggleItemIdentifier;
- (id)toggledText;
- (id)variantIdentifier;

@end