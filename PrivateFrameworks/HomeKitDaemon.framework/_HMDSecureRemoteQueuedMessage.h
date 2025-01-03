/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface _HMDSecureRemoteQueuedMessage : HMFObject <HMFObject> {
    HMDRemoteMessage * _message;
    HMFTimer * _timer;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions; /* unknown property attribute: ? */
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDRemoteMessage *message;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HMFTimer *timer;

- (void).cxx_destruct;
- (id)init;
- (id)initWithMessage:(id)arg1;
- (id)message;
- (id)propertyDescription;
- (id)shortDescription;
- (id)timer;

@end
