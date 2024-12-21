/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarAccessoryFramework.framework/CarAccessoryFramework
 */

@interface CAFCarConfiguration : NSObject <CAFCacheableDescription, NSSecureCoding> {
    CAFCachedDescription * _cachedDescription;
    <CAFCarConfigurationDelegate> * _delegate;
    NSString * _name;
    NSDictionary * _pluginConfigs;
    unsigned long long  _pluginCount;
    bool  _rightHandDrive;
    CAFSessionAnalytics * _sessionAnalytics;
    NSUUID * _uniqueIdentifier;
}

@property (nonatomic, readonly) CAFCachedDescription *cachedDescription;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <CAFCarConfigurationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSDictionary *pluginConfigs;
@property (nonatomic, readonly) unsigned long long pluginCount;
@property (nonatomic, readonly) bool rightHandDrive;
@property (nonatomic, readonly) CAFSessionAnalytics *sessionAnalytics;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;

+ (bool)getBoolean:(id)arg1 key:(id)arg2;
+ (id)getType:(id)arg1;
+ (id)getTypeString:(id)arg1;
+ (id)getUUID:(id)arg1 instanceID:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cachedDescription;
- (id)copyWithoutPlugins;
- (id)currentDescriptionForCache:(id)arg1;
- (id)delegate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 session:(id)arg2;
- (id)initWithName:(id)arg1 identifier:(id)arg2 rightHandDrive:(bool)arg3 pluginCount:(unsigned long long)arg4 sessionAnalytics:(id)arg5;
- (bool)isConfigured;
- (id)name;
- (id)pluginConfigs;
- (unsigned long long)pluginCount;
- (bool)rightHandDrive;
- (id)sessionAnalytics;
- (void)setDelegate:(id)arg1;
- (id)uniqueIdentifier;
- (bool)updateConfiguration:(id)arg1;
- (bool)updateConfiguration:(id)arg1 pluginConfig:(id)arg2;

@end