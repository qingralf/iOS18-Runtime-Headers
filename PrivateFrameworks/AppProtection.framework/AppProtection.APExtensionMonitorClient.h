/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppProtection.framework/AppProtection
 */

@interface AppProtection.APExtensionMonitorClient : NSObject <APXPCExtensionMonitorService> {
    void changeEventsSubscription;
    void delegate;
    void monitorAssociations;
    void remoteMonitor;
}

- (void).cxx_destruct;
- (void)beginMonitoringForExtensionUUID:(id)arg1 monitorUUID:(id)arg2;
- (void)endMonitoringForMonitorUUID:(id)arg1;
- (id)init;

@end