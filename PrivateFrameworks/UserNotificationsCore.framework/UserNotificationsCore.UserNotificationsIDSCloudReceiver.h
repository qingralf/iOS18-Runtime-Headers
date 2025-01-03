/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsCore.framework/UserNotificationsCore
 */

@interface UserNotificationsCore.UserNotificationsIDSCloudReceiver : NSObject <IDSServiceDelegate> {
    void actionsDelegate;
    void attachmentDelegate;
    void categoriesDelegate;
    void coordinationDelegate;
    void notificationDelegate;
    void properties;
}

- (void).cxx_destruct;
- (id)init;
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;

@end
