/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActivitySharingServices.framework/ActivitySharingServices
 */

@interface ActivitySharingServices.ServerPushListener : NSObject <APSConnectionDelegate> {
    void container;
    void notificationCenter;
    void protectedState;
}

- (void).cxx_destruct;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (id)init;

@end
