/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INSetSeatSettingsInCarIntent : INIntent <INSetSeatSettingsInCarIntentExport>

@property (nonatomic, readonly, copy) INSpeakableString *carName;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSNumber *enableCooling;
@property (nonatomic, readonly, copy) NSNumber *enableHeating;
@property (nonatomic, readonly, copy) NSNumber *enableMassage;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSNumber *level;
@property (nonatomic, readonly) long long relativeLevelSetting;
@property (nonatomic, readonly) long long seat;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)carName;
- (id)domain;
- (id)enableCooling;
- (id)enableHeating;
- (id)enableMassage;
- (id)initWithEnableHeating:(id)arg1 enableCooling:(id)arg2 enableMassage:(id)arg3 seat:(long long)arg4 level:(id)arg5 relativeLevelSetting:(long long)arg6;
- (id)initWithEnableHeating:(id)arg1 enableCooling:(id)arg2 enableMassage:(id)arg3 seat:(long long)arg4 level:(id)arg5 relativeLevelSetting:(long long)arg6 carName:(id)arg7;
- (id)level;
- (id)parametersByName;
- (long long)relativeLevelSetting;
- (long long)seat;
- (void)setCarName:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setEnableCooling:(id)arg1;
- (void)setEnableHeating:(id)arg1;
- (void)setEnableMassage:(id)arg1;
- (void)setLevel:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setRelativeLevelSetting:(long long)arg1;
- (void)setSeat:(long long)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end