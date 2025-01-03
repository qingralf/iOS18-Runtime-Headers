/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMMatterBulletinBoardNotification : HMBulletinBoardNotification <HMFMessageReceiver, HMObjectMerge, NSSecureCoding> {
    HMAccessory * _accessory;
    NSNumber * _endpointID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSUUID * _messageTargetUUID;
}

@property (nonatomic) HMAccessory *accessory;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSNumber *endpointID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 accessory:(id)arg2;
- (void)_commitWithCompletionHandler:(id /* block */)arg1;
- (void)_handleBulletinBoardNotificationUpdateNotification:(id)arg1;
- (void)_registerNotificationHandlers;
- (void)_unconfigure;
- (id)accessory;
- (void)commitWithCompletionHandler:(id /* block */)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)endpointID;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnabled:(bool)arg1 condition:(id)arg2 accessory:(id)arg3 endpointID:(id)arg4 messageTargetUUID:(id)arg5;
- (id)logIdentifier;
- (bool)mergeFromNewObject:(id)arg1;
- (id)messageTargetUUID;
- (void)setAccessory:(id)arg1;

@end
