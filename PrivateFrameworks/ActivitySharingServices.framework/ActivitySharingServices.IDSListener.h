/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActivitySharingServices.framework/ActivitySharingServices
 */

@interface ActivitySharingServices.IDSListener : NSObject <ASIDSMessageCenterSecureCloudDelegate> {
    void messageCenter;
    void transportDispatchService;
}

- (void).cxx_destruct;
- (id)init;
- (void)messageCenter:(id)arg1 didReceivePayload:(id)arg2 type:(int)arg3 fromSenderAddress:(id)arg4 messageHandledCompletion:(id /* block */)arg5;

@end
