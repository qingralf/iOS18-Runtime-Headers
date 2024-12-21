/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarouselPreferenceServices.framework/CarouselPreferenceServices
 */

@interface CSLPRFStingConfigurationHistory : NSObject {
    CSLPRFStingConfigurationHistorySetting * _historySetting;
    CSLPRFStingSettingsModel * _model;
}

- (void).cxx_destruct;
- (id)_historyItemForActionType:(unsigned long long)arg1;
- (id)_itemForActionType:(unsigned long long)arg1 withBundleID:(id)arg2;
- (void)addHistoryItem:(id)arg1;
- (unsigned long long)historyActionType:(unsigned long long)arg1;
- (id)init;
- (id)initWithSetting:(id)arg1 model:(id)arg2;
- (bool)isValidHistoryItem:(id)arg1;
- (id)itemForActionType:(unsigned long long)arg1;
- (id)itemForWorkoutWithBundleID:(id)arg1;

@end