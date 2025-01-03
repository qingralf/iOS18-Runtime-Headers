/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
 */

@interface ICQBubbleBannerTracker : NSObject {
    void kAlmostFullReason;
    void kBubbleBannerCAEventKey;
    void kBubbleBannerDismissedKey;
    void kBubbleBannerDisplayedKey;
    void kFullReason;
    void userDefaults;
}

+ (id)shared;

- (void).cxx_destruct;
- (id)account:(id)arg1 lastUpdated:(id)arg2 decayUntil:(double)arg3;
- (bool)account:(id)arg1 shouldDisplay:(id)arg2 forReason:(id)arg3 dismissedInSession:(bool)arg4 supressUntil:(double)arg5;
- (id)init;
- (void)trackLastDismissed:(id)arg1 date:(id)arg2 reason:(id)arg3;
- (void)trackLastDisplayedAtTheTop:(id)arg1 date:(id)arg2 reason:(id)arg3;

@end
