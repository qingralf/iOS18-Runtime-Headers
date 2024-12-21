/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDCharacteristicThresholdRegistration : NSObject <NSCopying> {
    NSString * _clientID;
    NSNumber * _updateThreshold;
}

@property (readonly, copy) NSString *clientID;
@property (readonly, copy) NSNumber *updateThreshold;

- (void).cxx_destruct;
- (id)clientID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithClientID:(id)arg1 updateThreshold:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)updateThreshold;

@end