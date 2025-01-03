/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INUnsendMessagesIntent : INIntent <INUnsendMessagesIntentExport>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *messageIdentifiers;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)domain;
- (id)initWithMessageIdentifiers:(id)arg1;
- (id)messageIdentifiers;
- (id)parametersByName;
- (void)setDomain:(id)arg1;
- (void)setMessageIdentifiers:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end
