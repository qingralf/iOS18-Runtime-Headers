/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMCHIPAccessoryOperationalIdentity : NSObject <HMFObject> {
    NSNumber * _nodeID;
    NSData * _rootPublicKey;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions; /* unknown property attribute: ? */
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSNumber *nodeID;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSData *rootPublicKey;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)shortDescription;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)description;
- (unsigned long long)hash;
- (id)initWithRootPublicKey:(id)arg1 nodeID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)nodeID;
- (id)privateDescription;
- (id)rootPublicKey;
- (id)shortDescription;

@end