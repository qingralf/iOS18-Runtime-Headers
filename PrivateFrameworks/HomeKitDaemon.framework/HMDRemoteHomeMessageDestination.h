/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRemoteHomeMessageDestination : HMDRemoteMessageDestination {
    NSUUID * _homeUUID;
    NSNumber * _queueTimeout;
}

@property (nonatomic, readonly) NSUUID *homeUUID;
@property (nonatomic, readonly) NSNumber *queueTimeout;

+ (id)shortDescription;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (unsigned long long)hash;
- (id)homeUUID;
- (id)initWithTarget:(id)arg1;
- (id)initWithTarget:(id)arg1 homeUUID:(id)arg2;
- (id)initWithTarget:(id)arg1 homeUUID:(id)arg2 queueTimeout:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)privateDescription;
- (id)queueTimeout;
- (id)shortDescription;

@end
