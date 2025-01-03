/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarAccessoryFramework.framework/CarAccessoryFramework
 */

@interface CAFMediaSource : CAFService

@property (nonatomic, readonly) unsigned int currentFrequency;
@property (nonatomic, readonly) CAFUInt32Characteristic *currentFrequencyCharacteristic;
@property (nonatomic, readonly) bool currentFrequencyInvalid;
@property (nonatomic, readonly) CAFUInt32Range *currentFrequencyRange;
@property (nonatomic, readonly) NSString *currentMediaItemIdentifier;
@property (nonatomic, readonly) CAFStringCharacteristic *currentMediaItemIdentifierCharacteristic;
@property (nonatomic, readonly) bool currentMediaItemIdentifierInvalid;
@property (nonatomic, readonly) bool disabled;
@property (nonatomic, readonly) CAFBoolCharacteristic *disabledCharacteristic;
@property (nonatomic, readonly) bool hasCurrentFrequency;
@property (nonatomic, readonly) bool hasCurrentMediaItemIdentifier;
@property (nonatomic, readonly) bool hasMediaItemImages;
@property (nonatomic, readonly) bool hasMediaItems;
@property (nonatomic, readonly) bool hasUserVisibleLabel;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) CAFStringCharacteristic *identifierCharacteristic;
@property (nonatomic, readonly) CAFMediaItemImages *mediaItemImages;
@property (nonatomic, readonly) CAFMediaItemImagesCharacteristic *mediaItemImagesCharacteristic;
@property (nonatomic, readonly) CAFMediaItems *mediaItems;
@property (nonatomic, readonly) CAFMediaItemsCharacteristic *mediaItemsCharacteristic;
@property (nonatomic, readonly) unsigned char mediaSourceSemanticType;
@property (nonatomic, readonly) CAFMediaSourceSemanticTypeCharacteristic *mediaSourceSemanticTypeCharacteristic;
@property (nonatomic, readonly) NSString *userVisibleLabel;
@property (nonatomic, readonly) CAFStringCharacteristic *userVisibleLabelCharacteristic;

+ (void)load;
+ (id)observerProtocol;
+ (id)serviceIdentifier;
+ (id /* block */)typeComparator;

- (void)_characteristicDidUpdate:(id)arg1 fromGroupUpdate:(bool)arg2;
- (void)addObserver:(id)arg1;
- (unsigned int)currentFrequency;
- (id)currentFrequencyCharacteristic;
- (bool)currentFrequencyInvalid;
- (id)currentFrequencyRange;
- (id)currentMediaItemIdentifier;
- (id)currentMediaItemIdentifierCharacteristic;
- (bool)currentMediaItemIdentifierInvalid;
- (bool)disabled;
- (id)disabledCharacteristic;
- (bool)hasCurrentFrequency;
- (bool)hasCurrentMediaItemIdentifier;
- (bool)hasMediaItemImages;
- (bool)hasMediaItems;
- (bool)hasUserVisibleLabel;
- (id)identifier;
- (id)identifierCharacteristic;
- (id)mediaItemImages;
- (id)mediaItemImagesCharacteristic;
- (id)mediaItems;
- (id)mediaItemsCharacteristic;
- (unsigned char)mediaSourceSemanticType;
- (id)mediaSourceSemanticTypeCharacteristic;
- (id)name;
- (void)registerObserver:(id)arg1;
- (bool)registeredForCurrentFrequency;
- (bool)registeredForCurrentMediaItemIdentifier;
- (bool)registeredForDisabled;
- (bool)registeredForIdentifier;
- (bool)registeredForMediaItemImages;
- (bool)registeredForMediaItems;
- (bool)registeredForMediaSourceSemanticType;
- (bool)registeredForUserVisibleLabel;
- (void)removeObserver:(id)arg1;
- (long long)typeCompare:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (id)userVisibleLabel;
- (id)userVisibleLabelCharacteristic;

@end
