/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarAccessoryFramework.framework/CarAccessoryFramework
 */

@interface CAFMultipleSelectImageSetting : CAFAutomakerSetting

@property (nonatomic, readonly) NSArray *images;
@property (nonatomic, readonly) CAFArrayCharacteristic *imagesCharacteristic;
@property (nonatomic, copy) NSArray *indicesUserVisibleValue;
@property (nonatomic, readonly) CAFArrayCharacteristic *indicesUserVisibleValueCharacteristic;
@property (nonatomic, readonly) NSArray *listUserVisibleValue;
@property (nonatomic, readonly) CAFArrayCharacteristic *listUserVisibleValueCharacteristic;

+ (void)load;
+ (id)observerProtocol;
+ (id)serviceIdentifier;

- (void)_characteristicDidUpdate:(id)arg1 fromGroupUpdate:(bool)arg2;
- (void)addObserver:(id)arg1;
- (id)images;
- (id)imagesCharacteristic;
- (id)indicesUserVisibleValue;
- (id)indicesUserVisibleValueCharacteristic;
- (id)listUserVisibleValue;
- (id)listUserVisibleValueCharacteristic;
- (id)name;
- (void)registerObserver:(id)arg1;
- (bool)registeredForImageList;
- (bool)registeredForIndicesUserVisibleValue;
- (bool)registeredForListUserVisibleValue;
- (void)removeObserver:(id)arg1;
- (void)setIndicesUserVisibleValue:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end