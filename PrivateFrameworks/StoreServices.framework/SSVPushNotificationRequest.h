/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVPushNotificationRequest : SSRequest <SSXPCCoding> {
    SSVPushNotificationParameters * _parameters;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) SSVPushNotificationParameters *pushNotificationParameters;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyXPCEncoding;
- (id)initWithPushNotificationParameters:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)pushNotificationParameters;
- (void)setPushNotificationParameters:(id)arg1;
- (bool)start;
- (void)startWithCompletionBlock:(id /* block */)arg1;
- (void)startWithResponseBlock:(id /* block */)arg1;

@end