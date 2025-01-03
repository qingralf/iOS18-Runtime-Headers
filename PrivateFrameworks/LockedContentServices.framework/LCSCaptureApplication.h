/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LockedContentServices.framework/LockedContentServices
 */

@interface LCSCaptureApplication : NSObject <BSDescriptionProviding, LCSCaptureApplicationDescribing> {
    LCSCaptureApplicationAttributes * _attributes;
    NSString * _bundleIdentifier;
    LNAction * _cachedLinkAction;
    <LCSExtensionDescribing> * _extension;
    NSSet * _launchActions;
    BSCompoundAssertion * _launchPrewarmCompoundAssertion;
    NSObject<OS_dispatch_queue> * _linkActionQueue;
    <NSObject> * _metadataChangedObserverToken;
}

@property (nonatomic, readonly) LCSCaptureApplicationAttributes *attributes;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, retain) NSData *captureIntentContext;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <LCSExtensionDescribing> *extension;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *launchActions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginObservingMetadataChanges;
- (id)_bundleRecordForBundleIdentifier:(id)arg1;
- (id)_captureIntentContextDirectoryURLForBundleIdentifier:(id)arg1;
- (id)_captureIntentContextFileURLForBundleIdentifier:(id)arg1;
- (void)_clearCachedLinkAction;
- (void)_endObservingMetadataChanges;
- (void)_evaluateLaunchPrewarmAssertions;
- (void)_generateCachedLinkAction;
- (id)_resolvedLinkAction;
- (id)acquireLaunchPrewarmAssertionForReason:(id)arg1;
- (id)attributes;
- (id)bundleIdentifier;
- (id)captureIntentContext;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)extension;
- (unsigned long long)hash;
- (id)initWithExtensionInfo:(id)arg1 attributes:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)launchActions;
- (void)setCaptureIntentContext:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
