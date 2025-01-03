/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarAccessoryFramework.framework/CarAccessoryFramework
 */

@interface CAFSeatFan : CAFService <CAFPositionedRequired>

@property (nonatomic, readonly) bool autoMode;
@property (nonatomic, readonly) CAFBoolCharacteristic *autoModeCharacteristic;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned char fanLevel;
@property (nonatomic, readonly) CAFUInt8Characteristic *fanLevelCharacteristic;
@property (nonatomic, readonly) bool fanLevelDisabled;
@property (nonatomic, readonly) bool fanLevelInvalid;
@property (nonatomic, readonly) CAFUInt8Range *fanLevelRange;
@property (nonatomic, readonly) bool fanLevelRestricted;
@property (nonatomic, readonly) bool hasAutoMode;
@property (nonatomic, readonly) bool hasOn;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool on;
@property (nonatomic, readonly) CAFBoolCharacteristic *onCharacteristic;
@property (nonatomic, readonly) bool onDisabled;
@property (nonatomic, readonly) bool onInvalid;
@property (nonatomic, readonly) bool onRestricted;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *vehicleLayoutKey;
@property (nonatomic, readonly) CAFStringCharacteristic *vehicleLayoutKeyCharacteristic;

+ (id)indexBy;
+ (void)load;
+ (id)observerProtocol;
+ (id)serviceIdentifier;

- (void)_characteristicDidUpdate:(id)arg1 fromGroupUpdate:(bool)arg2;
- (void)addObserver:(id)arg1;
- (bool)autoMode;
- (id)autoModeCharacteristic;
- (unsigned char)fanLevel;
- (id)fanLevelCharacteristic;
- (bool)fanLevelDisabled;
- (bool)fanLevelInvalid;
- (id)fanLevelRange;
- (bool)fanLevelRestricted;
- (bool)hasAutoMode;
- (bool)hasOn;
- (id)name;
- (bool)on;
- (id)onCharacteristic;
- (bool)onDisabled;
- (bool)onInvalid;
- (bool)onRestricted;
- (void)registerObserver:(id)arg1;
- (bool)registeredForAutoMode;
- (bool)registeredForFanLevel;
- (bool)registeredForOn;
- (bool)registeredForVehicleLayoutKey;
- (void)removeObserver:(id)arg1;
- (void)setFanLevel:(unsigned char)arg1;
- (void)setOn:(bool)arg1;
- (void)unregisterObserver:(id)arg1;
- (id)vehicleLayoutKey;
- (id)vehicleLayoutKeyCharacteristic;

@end
