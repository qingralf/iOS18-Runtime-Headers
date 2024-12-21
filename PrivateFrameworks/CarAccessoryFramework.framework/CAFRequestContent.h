/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarAccessoryFramework.framework/CarAccessoryFramework
 */

@interface CAFRequestContent : CAFService

@property (nonatomic, readonly) NSString *contentURL;
@property (nonatomic, readonly) CAFStringCharacteristic *contentURLCharacteristic;
@property (nonatomic, readonly) NSString *displayPanelIdentifier;
@property (nonatomic, readonly) CAFStringCharacteristic *displayPanelIdentifierCharacteristic;
@property (nonatomic, readonly) NSString *displayZoneIdentifier;
@property (nonatomic, readonly) CAFStringCharacteristic *displayZoneIdentifierCharacteristic;
@property (nonatomic) bool on;
@property (nonatomic, readonly) CAFBoolCharacteristic *onCharacteristic;
@property (nonatomic, readonly) bool userDismissible;
@property (nonatomic, readonly) CAFBoolCharacteristic *userDismissibleCharacteristic;

+ (void)load;
+ (id)observerProtocol;
+ (id)serviceIdentifier;

- (void)_characteristicDidUpdate:(id)arg1 fromGroupUpdate:(bool)arg2;
- (void)addObserver:(id)arg1;
- (id)contentURL;
- (id)contentURLCharacteristic;
- (id)displayPanelIdentifier;
- (id)displayPanelIdentifierCharacteristic;
- (id)displayZoneIdentifier;
- (id)displayZoneIdentifierCharacteristic;
- (id)name;
- (bool)on;
- (id)onCharacteristic;
- (void)registerObserver:(id)arg1;
- (bool)registeredForContentURL;
- (bool)registeredForDisplayPanelIdentifier;
- (bool)registeredForDisplayZoneIdentifier;
- (bool)registeredForOn;
- (bool)registeredForUserDismissible;
- (void)removeObserver:(id)arg1;
- (void)setOn:(bool)arg1;
- (void)unregisterObserver:(id)arg1;
- (bool)userDismissible;
- (id)userDismissibleCharacteristic;

@end