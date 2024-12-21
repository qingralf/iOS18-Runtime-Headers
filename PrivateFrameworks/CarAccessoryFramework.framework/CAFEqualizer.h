/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarAccessoryFramework.framework/CarAccessoryFramework
 */

@interface CAFEqualizer : CAFService

@property (nonatomic, readonly) bool hasUserVisibleLabel;
@property (nonatomic, readonly) unsigned char sortOrder;
@property (nonatomic, readonly) CAFUInt8Characteristic *sortOrderCharacteristic;
@property (nonatomic, readonly) unsigned char type;
@property (nonatomic, readonly) CAFEqualizerTypeCharacteristic *typeCharacteristic;
@property (nonatomic, readonly) NSString *userVisibleLabel;
@property (nonatomic, readonly) CAFStringCharacteristic *userVisibleLabelCharacteristic;
@property (nonatomic) BOOL value;
@property (nonatomic, readonly) CAFInt8Characteristic *valueCharacteristic;
@property (nonatomic, readonly) CAFInt8Range *valueRange;

+ (void)load;
+ (id)observerProtocol;
+ (id)serviceIdentifier;

- (void)_characteristicDidUpdate:(id)arg1 fromGroupUpdate:(bool)arg2;
- (void)addObserver:(id)arg1;
- (bool)hasUserVisibleLabel;
- (id)name;
- (void)registerObserver:(id)arg1;
- (bool)registeredForEqualizerType;
- (bool)registeredForEqualizerValue;
- (bool)registeredForSortOrder;
- (bool)registeredForUserVisibleLabel;
- (void)removeObserver:(id)arg1;
- (void)setValue:(BOOL)arg1;
- (unsigned char)sortOrder;
- (id)sortOrderCharacteristic;
- (unsigned char)type;
- (id)typeCharacteristic;
- (void)unregisterObserver:(id)arg1;
- (id)userVisibleLabel;
- (id)userVisibleLabelCharacteristic;
- (BOOL)value;
- (id)valueCharacteristic;
- (id)valueRange;

@end