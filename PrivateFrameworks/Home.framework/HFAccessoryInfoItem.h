/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFAccessoryInfoItem : HFItem {
    HMAccessory * _accessory;
    HMHome * _home;
    unsigned long long  _infoType;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, readonly) unsigned long long infoType;

+ (id)accessibilityStringForCharacteristic:(id)arg1;
+ (id)localizedStringForCharacteristic:(id)arg1;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)accessory;
- (id)home;
- (unsigned long long)infoType;
- (id)init;
- (id)initWithAccessory:(id)arg1 infoType:(unsigned long long)arg2;
- (id)initWithAccessory:(id)arg1 infoType:(unsigned long long)arg2 home:(id)arg3;
- (void)setHome:(id)arg1;

@end
