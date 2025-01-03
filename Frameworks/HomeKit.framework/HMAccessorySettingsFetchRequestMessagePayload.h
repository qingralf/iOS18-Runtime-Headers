/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMAccessorySettingsFetchRequestMessagePayload : NSObject <HMFLogging, HMFObject, HMMessageEncoding> {
    NSUUID * _accessoryUUID;
    NSArray * _keyPaths;
}

@property (readonly, copy) NSUUID *accessoryUUID;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions; /* unknown property attribute: ? */
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *keyPaths;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (id)accessoryUUID;
- (id)attributeDescriptions;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAccessoryUUID:(id)arg1 keyPaths:(id)arg2;
- (id)initWithPayload:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)keyPaths;
- (id)payloadCopy;
- (id)privateDescription;
- (id)shortDescription;

@end
