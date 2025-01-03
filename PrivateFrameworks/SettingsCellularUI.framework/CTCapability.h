/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

@interface CTCapability : NSObject {
    NSMutableDictionary * _capability;
    NSMutableDictionary * _capabilityFetched;
    NSMutableDictionary * _capabilityInfo;
    NSString * _capabilityName;
    NSMutableDictionary * _enabledDict;
    NSMutableDictionary * _enabledFetched;
}

@property (retain) NSMutableDictionary *capability;
@property (retain) NSMutableDictionary *capabilityFetched;
@property (retain) NSMutableDictionary *capabilityInfo;
@property (nonatomic, retain) NSString *capabilityName;
@property (retain) NSMutableDictionary *enabledDict;
@property (retain) NSMutableDictionary *enabledFetched;

- (void).cxx_destruct;
- (void)acceptCapabilityforSlotID:(long long)arg1 status:(bool)arg2 canSet:(bool)arg3 info:(id)arg4;
- (id)capability;
- (id)capabilityFetched;
- (id)capabilityInfo;
- (id)capabilityName;
- (id)enabledDict;
- (id)enabledFetched;
- (bool)getCapabilityForSlotID:(long long)arg1;
- (bool)getCapabilityInfo:(id)arg1 forSlotID:(long long)arg2;
- (id)getCapabilityInfoObject:(id)arg1 forSlotID:(long long)arg2;
- (bool)getEnabledForSlotID:(long long)arg1;
- (id)initWithCapabilityName:(id)arg1;
- (void)reset;
- (void)setCapability:(id)arg1;
- (void)setCapabilityFetched:(id)arg1;
- (void)setCapabilityInfo:(id)arg1;
- (void)setCapabilityInfo:(id)arg1 forSlotID:(long long)arg2;
- (void)setCapabilityInfoObject:(id)arg1 forKey:(id)arg2 forSlotID:(long long)arg3;
- (void)setCapabilityName:(id)arg1;
- (void)setCapable:(bool)arg1 forSlotID:(long long)arg2;
- (void)setEnabled:(bool)arg1 forSlotID:(long long)arg2;
- (void)setEnabledDict:(id)arg1;
- (void)setEnabledFetched:(id)arg1;
- (id)slotNum:(long long)arg1;

@end
