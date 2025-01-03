/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface _HMPrivacySettingsProvider : NSObject <_HMPrivacySettingsProvider> {
    unsigned long long  _cachedAuthorizationStatus;
}

@property (readonly) unsigned long long cachedAuthorizationStatus;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned long long)cachedAuthorizationStatus;
- (unsigned long long)queryAuthorizationStatus;
- (void)requestHomeKitAccessWithQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)requestMicrophoneAccessWithQueue:(id)arg1 completion:(id /* block */)arg2;

@end
