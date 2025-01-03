/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterFoundation.framework/PosterFoundation
 */

@interface PFPosterExtensionInstanceProvider : NSObject <BSCancellable, PFPosterExtensionInstanceObserver> {
    NSUUID * _defaultInstanceIdentifier;
    NSMapTable * _extensionBundleIdentifierToReasonMap;
    NSMapTable * _extensionBundleIdentifierWithReasonToInstanceMap;
}

@property (nonatomic, readonly) NSSet *activeExtensionInstances;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSUUID *defaultInstanceIdentifier;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)acquireInstanceForExtension:(id)arg1 reason:(id)arg2 error:(out id*)arg3;
- (id)activeExtensionInstances;
- (void)cancel;
- (id)defaultInstanceIdentifier;
- (void)extensionInstanceDidInvalidate:(id)arg1;
- (id)init;
- (id)initWithDefaultInstanceIdentifier:(id)arg1;
- (id)instanceForExtension:(id)arg1 reason:(id)arg2;
- (void)noteExtensionsWereUpdated:(id)arg1;
- (void)relinquishExtensionInstance:(id)arg1 reason:(id)arg2;

@end
