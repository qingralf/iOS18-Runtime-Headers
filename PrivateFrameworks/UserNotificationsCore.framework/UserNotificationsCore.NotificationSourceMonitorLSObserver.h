/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsCore.framework/UserNotificationsCore
 */

@interface UserNotificationsCore.NotificationSourceMonitorLSObserver : NSObject <LSApplicationWorkspaceObserverProtocol, NSCacheDelegate> {
    void delegate;
    void delegateQueue;
    void workspace;
}

- (void).cxx_destruct;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (id)init;

@end
