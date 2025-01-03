/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCHIPControllerACLStorage : HMFObject <HMFLogging, NSCopying> {
    NSDictionary * _keyValueStore;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSDictionary *debugDictionaryRepresentation;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) NSDictionary *keyValueStore;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)keyValueStore;
- (id)logIdentifier;
- (void)setKeyValueStore:(id)arg1;
- (void)updateHomeModel:(id)arg1;
- (bool)updateUsingHomeModel:(id)arg1;

@end
