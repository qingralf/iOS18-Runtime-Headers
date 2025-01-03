/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarAccessoryFramework.framework/CarAccessoryFramework
 */

@interface CAFCabin : CAFService

@property (nonatomic) bool compressorOn;
@property (nonatomic, readonly) CAFBoolCharacteristic *compressorOnCharacteristic;
@property (nonatomic, readonly) bool compressorOnDisabled;
@property (nonatomic, readonly) bool compressorOnInvalid;
@property (nonatomic, readonly) bool compressorOnRestricted;
@property (nonatomic, readonly) bool hasCompressorOn;
@property (nonatomic, readonly) bool hasHvacOn;
@property (nonatomic, readonly) bool hasMaxACOn;
@property (nonatomic) bool hvacOn;
@property (nonatomic, readonly) CAFBoolCharacteristic *hvacOnCharacteristic;
@property (nonatomic, readonly) bool hvacOnInvalid;
@property (nonatomic) bool maxACOn;
@property (nonatomic, readonly) CAFBoolCharacteristic *maxACOnCharacteristic;
@property (nonatomic, readonly) bool maxACOnDisabled;
@property (nonatomic, readonly) bool maxACOnInvalid;
@property (nonatomic, readonly) bool maxACOnRestricted;

+ (void)load;
+ (id)observerProtocol;
+ (id)serviceIdentifier;

- (void)_characteristicDidUpdate:(id)arg1 fromGroupUpdate:(bool)arg2;
- (void)addObserver:(id)arg1;
- (bool)compressorOn;
- (id)compressorOnCharacteristic;
- (bool)compressorOnDisabled;
- (bool)compressorOnInvalid;
- (bool)compressorOnRestricted;
- (bool)hasCompressorOn;
- (bool)hasHvacOn;
- (bool)hasMaxACOn;
- (bool)hvacOn;
- (id)hvacOnCharacteristic;
- (bool)hvacOnInvalid;
- (bool)maxACOn;
- (id)maxACOnCharacteristic;
- (bool)maxACOnDisabled;
- (bool)maxACOnInvalid;
- (bool)maxACOnRestricted;
- (id)name;
- (void)registerObserver:(id)arg1;
- (bool)registeredForACCompressorOn;
- (bool)registeredForHVACOn;
- (bool)registeredForMaxACOn;
- (void)removeObserver:(id)arg1;
- (void)setCompressorOn:(bool)arg1;
- (void)setHvacOn:(bool)arg1;
- (void)setMaxACOn:(bool)arg1;
- (void)unregisterObserver:(id)arg1;

@end
