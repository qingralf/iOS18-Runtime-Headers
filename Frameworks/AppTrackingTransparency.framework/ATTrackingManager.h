/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppTrackingTransparency.framework/AppTrackingTransparency
 */

@interface ATTrackingManager : NSObject

+ (id)_TCCServer;
+ (bool)_applicationHasDisqualifyingEntitlement;
+ (bool)_isCrossAppTrackingAllowed;
+ (void)_performTCCAccessRequest:(id /* block */)arg1;
+ (unsigned long long)_performTCCPreflightRequest;
+ (bool)_restrictionProfileInstalled;
+ (void)_sendRequestTrackingAnalytic:(unsigned long long)arg1 prompted:(bool)arg2 deniedReason:(unsigned long long)arg3;
+ (void)_sendTrackingStatusAnalytic:(unsigned long long)arg1 prompted:(bool)arg2 deniedReason:(unsigned long long)arg3;
+ (unsigned long long)_trackingAuthorizationStatus;
+ (bool)_userAllowedToChangeSettings;
+ (bool)applicationStateActive;
+ (bool)isApplicationExtension;
+ (void)requestTrackingAuthorizationWithCompletionHandler:(id /* block */)arg1;
+ (unsigned long long)trackingAuthorizationStatus;

@end