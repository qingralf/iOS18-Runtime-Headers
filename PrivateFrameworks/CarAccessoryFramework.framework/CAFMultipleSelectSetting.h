/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarAccessoryFramework.framework/CarAccessoryFramework
 */

@interface CAFMultipleSelectSetting : CAFAutomakerSetting

@property (nonatomic, readonly) CAFSelectSettingEntryList *selectSettingEntryList;
@property (nonatomic, readonly) CAFSelectSettingEntryListCharacteristic *selectSettingEntryListCharacteristic;
@property (nonatomic, copy) NSArray *selectedEntryIndices;
@property (nonatomic, readonly) CAFArrayCharacteristic *selectedEntryIndicesCharacteristic;

+ (void)load;
+ (id)observerProtocol;
+ (id)serviceIdentifier;

- (void)_characteristicDidUpdate:(id)arg1 fromGroupUpdate:(bool)arg2;
- (void)addObserver:(id)arg1;
- (id)name;
- (void)registerObserver:(id)arg1;
- (bool)registeredForSelectSettingEntryList;
- (bool)registeredForSelectedEntryIndices;
- (void)removeObserver:(id)arg1;
- (id)selectSettingEntryList;
- (id)selectSettingEntryListCharacteristic;
- (id)selectedEntryIndices;
- (id)selectedEntryIndicesCharacteristic;
- (void)setSelectedEntryIndices:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end
