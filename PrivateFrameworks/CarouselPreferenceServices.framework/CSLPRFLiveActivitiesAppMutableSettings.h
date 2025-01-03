/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarouselPreferenceServices.framework/CarouselPreferenceServices
 */

@interface CSLPRFLiveActivitiesAppMutableSettings : NSObject <CSLPRFLiveActivitiesAppMutableProperties> {
    bool  _allowLiveActivitiesForApp;
    unsigned long long  _autoLaunchBehaviorForApp;
    bool  _globalAllowLiveActivities;
    bool  _globalAutoLaunchLiveActivities;
    bool  _supportsSmartStack;
}

@property (nonatomic) bool allowLiveActivitiesForApp;
@property (nonatomic) unsigned long long autoLaunchBehaviorForApp;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool globalAllowLiveActivities;
@property (nonatomic) bool globalAutoLaunchLiveActivities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsSmartStack;

- (bool)allowLiveActivitiesForApp;
- (unsigned long long)autoLaunchBehaviorForApp;
- (bool)globalAllowLiveActivities;
- (bool)globalAutoLaunchLiveActivities;
- (id)initWithSettings:(id)arg1;
- (bool)isEqualToSettings:(id)arg1;
- (void)setAllowLiveActivitiesForApp:(bool)arg1;
- (void)setAutoLaunchBehaviorForApp:(unsigned long long)arg1;
- (void)setGlobalAllowLiveActivities:(bool)arg1;
- (void)setGlobalAutoLaunchLiveActivities:(bool)arg1;
- (bool)supportsSmartStack;

@end
