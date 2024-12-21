/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@interface FAServerBagFlag : NSObject {
    NSString * _name;
    bool  _value;
}

@property (nonatomic) NSString *name;
@property (nonatomic) bool value;

+ (id)megadomeKillSwitch;
+ (id)registerDeviceWithPDS;

- (void)grabFromServer;
- (id)initWithServerKey:(id)arg1;
- (bool)isEnabledWithForceRefresh:(bool)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)setValue:(bool)arg1;
- (bool)value;

@end