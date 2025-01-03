/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarAccessoryFramework.framework/CarAccessoryFramework
 */

@interface CAFStaticSetting : CAFAutomakerSetting

@property (nonatomic, readonly) NSArray *childrenSettingsIdentifiers;
@property (nonatomic, readonly) CAFArrayCharacteristic *childrenSettingsIdentifiersCharacteristic;
@property (nonatomic, readonly) bool hasChildrenSettingsIdentifiers;
@property (nonatomic, readonly) NSString *userVisibleValue;
@property (nonatomic, readonly) CAFStringCharacteristic *userVisibleValueCharacteristic;

+ (void)load;
+ (id)observerProtocol;
+ (id)serviceIdentifier;

- (void)_characteristicDidUpdate:(id)arg1 fromGroupUpdate:(bool)arg2;
- (void)addObserver:(id)arg1;
- (id)childrenSettingsIdentifiers;
- (id)childrenSettingsIdentifiersCharacteristic;
- (bool)hasChildrenSettingsIdentifiers;
- (id)name;
- (void)registerObserver:(id)arg1;
- (bool)registeredForChildrenSettingsIdentifiers;
- (bool)registeredForUserVisibleValue;
- (void)removeObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (id)userVisibleValue;
- (id)userVisibleValueCharacteristic;

@end
