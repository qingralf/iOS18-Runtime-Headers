/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
 */

@interface HealthExperienceUI.PluginNotificationRouter : NSObject <UNUserNotificationCenterDelegate> {
    void pluginProviding;
    void sceneProvider;
}

- (void).cxx_destruct;
- (id)init;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)userNotificationCenter:(id)arg1 openSettingsForNotification:(id)arg2;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
