/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDIDSSendMessageOperation : HMFOperation <HMDIDSServiceDelegate, HMFLogging, HMFObject> {
    HMDRemoteMessageDestination * _destination;
    HMFMessage * _message;
    NSString * _messageIdentifier;
    <HMDIDSService> * _service;
    double  _timeout;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions; /* unknown property attribute: ? */
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMFMessage *message;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription; /* unknown property attribute: ? */
@property (readonly) <HMDIDSService> *service;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)shortDescription;
+ (double)timeout;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)description;
- (id)initWithMessage:(id)arg1;
- (id)initWithMessage:(id)arg1 service:(id)arg2;
- (id)logIdentifier;
- (void)main;
- (id)message;
- (id)privateDescription;
- (id)service;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5 context:(id)arg6;
- (id)shortDescription;

@end
