/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

@interface CRCarPlayAppDeclaration : NSObject {
    unsigned long long  __applicationCategory;
    NSSet * _autoMakerProtocols;
    NSString * _bundleIdentifier;
    NSString * _bundlePath;
    bool  _launchNotificationsUsingSiri;
    bool  _launchUsingSiri;
    bool  _requiresGeoSupport;
    bool  _supportsAudio;
    bool  _supportsCalling;
    bool  _supportsCharging;
    bool  _supportsCommunication;
    bool  _supportsDrivingTask;
    bool  _supportsFueling;
    bool  _supportsMaps;
    bool  _supportsMessaging;
    bool  _supportsParking;
    bool  _supportsPlayableContent;
    bool  _supportsPublicSafety;
    bool  _supportsQuickOrdering;
    bool  _supportsTemplates;
    bool  _systemApp;
}

@property (nonatomic) unsigned long long _applicationCategory;
@property (nonatomic, retain) NSSet *autoMakerProtocols;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *bundlePath;
@property (nonatomic) bool launchNotificationsUsingSiri;
@property (nonatomic) bool launchUsingSiri;
@property (nonatomic) bool requiresGeoSupport;
@property (nonatomic) bool supportsAudio;
@property (nonatomic) bool supportsCalling;
@property (nonatomic) bool supportsCharging;
@property (nonatomic) bool supportsCommunication;
@property (nonatomic) bool supportsDrivingTask;
@property (nonatomic) bool supportsFueling;
@property (nonatomic) bool supportsMaps;
@property (nonatomic) bool supportsMessaging;
@property (nonatomic) bool supportsParking;
@property (nonatomic) bool supportsPlayableContent;
@property (nonatomic) bool supportsPublicSafety;
@property (nonatomic) bool supportsQuickOrdering;
@property (nonatomic) bool supportsTemplates;
@property (getter=isSystemApp, nonatomic) bool systemApp;

+ (id)declarationForAppProxy:(id)arg1;
+ (id)declarationForAppRecord:(id)arg1;
+ (id)declarationForBundleIdentifier:(id)arg1 entitlements:(id)arg2 infoPlist:(id)arg3;
+ (id)declarationForBundleIdentifier:(id)arg1 info:(id)arg2 entitlements:(id)arg3;
+ (id)declarationForBundleIdentifier:(id)arg1 info:(id)arg2 entitlements:(id)arg3 bundlePath:(id)arg4;
+ (id)declarationForBundleIdentifier:(id)arg1 infoPropertyList:(id)arg2 entitlementsPropertyList:(id)arg3;
+ (id)declarationForBundleIdentifier:(id)arg1 infoPropertyList:(id)arg2 entitlementsPropertyList:(id)arg3 bundlePath:(id)arg4;
+ (id)requiredEntitlementKeys;
+ (id)requiredInfoKeys;

- (void).cxx_destruct;
- (unsigned long long)_applicationCategory;
- (id)autoMakerProtocols;
- (id)bundleIdentifier;
- (id)bundlePath;
- (bool)isSystemApp;
- (bool)launchNotificationsUsingSiri;
- (bool)launchUsingSiri;
- (bool)requiresGeoSupport;
- (void)setAutoMakerProtocols:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundlePath:(id)arg1;
- (void)setLaunchNotificationsUsingSiri:(bool)arg1;
- (void)setLaunchUsingSiri:(bool)arg1;
- (void)setRequiresGeoSupport:(bool)arg1;
- (void)setSupportsAudio:(bool)arg1;
- (void)setSupportsCalling:(bool)arg1;
- (void)setSupportsCharging:(bool)arg1;
- (void)setSupportsCommunication:(bool)arg1;
- (void)setSupportsDrivingTask:(bool)arg1;
- (void)setSupportsFueling:(bool)arg1;
- (void)setSupportsMaps:(bool)arg1;
- (void)setSupportsMessaging:(bool)arg1;
- (void)setSupportsParking:(bool)arg1;
- (void)setSupportsPlayableContent:(bool)arg1;
- (void)setSupportsPublicSafety:(bool)arg1;
- (void)setSupportsQuickOrdering:(bool)arg1;
- (void)setSupportsTemplates:(bool)arg1;
- (void)setSystemApp:(bool)arg1;
- (void)set_applicationCategory:(unsigned long long)arg1;
- (bool)supportsAudio;
- (bool)supportsCalling;
- (bool)supportsCharging;
- (bool)supportsCommunication;
- (bool)supportsDrivingTask;
- (bool)supportsFueling;
- (bool)supportsMaps;
- (bool)supportsMessaging;
- (bool)supportsParking;
- (bool)supportsPlayableContent;
- (bool)supportsPublicSafety;
- (bool)supportsQuickOrdering;
- (bool)supportsTemplates;

@end
