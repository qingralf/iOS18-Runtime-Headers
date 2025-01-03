/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKLinkedApplicationActionCell : PKTableViewCell <PKLinkedApplicationObserver> {
    UIActivityIndicatorView * _activityIndicator;
    UIColor * _disabledTextColor;
    PKLinkedApplication * _linkedApplication;
    UIColor * _textColor;
}

@property (nonatomic, copy) NSURL *appLaunchURL;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) UIColor *disabledTextColor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKLinkedApplication *linkedApplication;
@property (nonatomic, copy) NSArray *storeIDs;
@property (readonly) Class superclass;
@property (nonatomic, copy) UIColor *textColor;

- (void).cxx_destruct;
- (id)appLaunchURL;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)disabledTextColor;
- (id)initWithCoder:(id)arg1;
- (id)initWithLinkedApplication:(id)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStoreIDs:(id)arg1 appLaunchURL:(id)arg2 reuseIdentifier:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)linkedApplication;
- (void)linkedApplicationDidChangeState:(id)arg1;
- (void)reloadApplicationStateIfNecessary;
- (void)setAppLaunchURL:(id)arg1;
- (void)setDisabledTextColor:(id)arg1;
- (void)setStoreIDs:(id)arg1;
- (void)setTextColor:(id)arg1;
- (id)storeIDs;
- (id)textColor;

@end
