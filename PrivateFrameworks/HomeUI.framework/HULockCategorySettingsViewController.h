/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HULockCategorySettingsViewController : HUItemCollectionViewController {
    HULockCategorySettingsItemManager * _lockSettingsItemManager;
    HFPinCodeManager * _pinCodeManager;
    HFUserNotificationServiceTopic * _topic;
}

@property (nonatomic, retain) HULockCategorySettingsItemManager *lockSettingsItemManager;
@property (nonatomic, retain) HFPinCodeManager *pinCodeManager;
@property (nonatomic, retain) HFUserNotificationServiceTopic *topic;

- (void).cxx_destruct;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2;
- (id)initWithLockTopic:(id)arg1 home:(id)arg2;
- (id)initWithLockTopic:(id)arg1 pinCodeManager:(id)arg2 home:(id)arg3;
- (id)lockSettingsItemManager;
- (id)pinCodeManager;
- (void)setLockSettingsItemManager:(id)arg1;
- (void)setPinCodeManager:(id)arg1;
- (void)setTopic:(id)arg1;
- (id)topic;

@end