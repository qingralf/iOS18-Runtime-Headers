/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarAccessoryFramework.framework/CarAccessoryFramework
 */

@interface CAFRecirculation : CAFService

@property (nonatomic, readonly) bool autoMode;
@property (nonatomic, readonly) CAFBoolCharacteristic *autoModeCharacteristic;
@property (nonatomic, readonly) bool hasAutoMode;
@property (nonatomic) bool on;
@property (nonatomic, readonly) CAFBoolCharacteristic *onCharacteristic;
@property (nonatomic, readonly) bool onDisabled;
@property (nonatomic, readonly) bool onInvalid;
@property (nonatomic, readonly) bool onRestricted;

+ (void)load;
+ (id)observerProtocol;
+ (id)serviceIdentifier;

- (void)_characteristicDidUpdate:(id)arg1 fromGroupUpdate:(bool)arg2;
- (void)addObserver:(id)arg1;
- (bool)autoMode;
- (id)autoModeCharacteristic;
- (bool)hasAutoMode;
- (id)name;
- (bool)on;
- (id)onCharacteristic;
- (bool)onDisabled;
- (bool)onInvalid;
- (bool)onRestricted;
- (void)registerObserver:(id)arg1;
- (bool)registeredForAutoMode;
- (bool)registeredForOn;
- (void)removeObserver:(id)arg1;
- (void)setOn:(bool)arg1;
- (void)unregisterObserver:(id)arg1;

@end