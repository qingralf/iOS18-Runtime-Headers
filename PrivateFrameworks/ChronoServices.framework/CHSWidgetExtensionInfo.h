/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
 */

@interface CHSWidgetExtensionInfo : NSObject <BSXPCSecureCoding, NSCopying, NSMutableCopying> {
    bool  _allowsMixedLocalizations;
    NSArray * _availableLocalizations;
    NSString * _bundleIdentifier;
    NSURL * _bundleURL;
    NSString * _containerBundleIdentifier;
    NSURL * _containerURL;
    NSArray * _controlConfigurations;
    NSDictionary * _controlTemplates;
    NSString * _dataProtectionLevel;
    NSArray * _descriptors;
    bool  _disablesImplicitDiscovery;
    NSString * _effectiveContainerBundleIdentifier;
    CHSEntitlementCollection * _entitlements;
    bool  _isDevelopmentExtension;
    NSDate * _lastModifiedDate;
    NSArray * _liveControlURLs;
    NSArray * _livePlaceholderControlURLs;
    NSArray * _nominatedContainerBundleIdentifiers;
    NSArray * _placeholderURLs;
    NSArray * _previewControlURLs;
    NSString * _sdkVersion;
    NSArray * _snapshotURLs;
    NSURL * _systemDataContainerURL;
    NSArray * _timelineURLs;
    NSString * _version;
    bool  _wantsLocation;
    NSArray * _widgetConfigurations;
}

@property (nonatomic, readonly) bool allowsMixedLocalizations;
@property (nonatomic, readonly, copy) NSArray *availableLocalizations;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSURL *bundleURL;
@property (nonatomic, readonly, copy) NSString *containerBundleIdentifier;
@property (nonatomic, readonly, copy) NSURL *containerURL;
@property (nonatomic, readonly, copy) NSArray *controlConfigurations;
@property (nonatomic, readonly, copy) NSString *dataProtectionLevel;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *descriptors;
@property (nonatomic, readonly) bool disablesImplicitDiscovery;
@property (nonatomic, readonly, copy) NSString *effectiveContainerBundleIdentifier;
@property (nonatomic, readonly) NSObject *entitlements;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDevelopmentExtension;
@property (nonatomic, readonly, copy) NSDate *lastModifiedDate;
@property (nonatomic, readonly, copy) NSArray *liveControlURLs;
@property (nonatomic, readonly, copy) NSArray *livePlaceholderControlURLs;
@property (nonatomic, readonly, copy) NSArray *nominatedContainerBundleIdentifiers;
@property (nonatomic, readonly, copy) NSArray *placeholderURLs;
@property (nonatomic, readonly, copy) NSArray *previewControlURLs;
@property (nonatomic, readonly, copy) NSString *sdkVersion;
@property (nonatomic, readonly, copy) NSArray *snapshotURLs;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSURL *systemDataContainerURL;
@property (nonatomic, readonly, copy) NSArray *timelineURLs;
@property (nonatomic, readonly, copy) NSString *version;
@property (nonatomic, readonly) bool wantsLocation;
@property (nonatomic, readonly, copy) NSArray *widgetConfigurations;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)_initWithInfo:(id)arg1;
- (bool)allowsMixedLocalizations;
- (id)availableLocalizations;
- (id)bundleIdentifier;
- (id)bundleURL;
- (id)containerBundleIdentifier;
- (id)containerURL;
- (id)controlConfigurations;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataProtectionLevel;
- (id)descriptors;
- (bool)disablesImplicitDiscovery;
- (id)effectiveContainerBundleIdentifier;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)entitlements;
- (id)initWithBSXPCCoder:(id)arg1;
- (bool)isDevelopmentExtension;
- (id)lastModifiedDate;
- (id)liveControlURLs;
- (id)livePlaceholderControlURLs;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)nominatedContainerBundleIdentifiers;
- (id)placeholderURLs;
- (id)previewControlURLs;
- (id)sdkVersion;
- (id)snapshotURLs;
- (id)systemDataContainerURL;
- (id)timelineURLs;
- (id)version;
- (bool)wantsLocation;
- (id)widgetConfigurations;

@end
