/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INPlayVoicemailIntent : INIntent <INPlayVoicemailIntentExport>

@property (nonatomic, readonly, copy) NSString *callRecordIdentifier;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (long long)_intentCategory;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)callRecordIdentifier;
- (id)domain;
- (id)initWithCallRecordIdentifier:(id)arg1;
- (id)parametersByName;
- (void)setCallRecordIdentifier:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end
