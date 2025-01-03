/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@interface FAScreenTimeRequestProvider : NSObject <FAScreenTimeRequestProviderProtocol>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)cacheScreenTimeSettingToDiskWithDSID:(id)arg1 screentimeObject:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)enableScreenTimeSettingsForDSID:(id)arg1 screentimeObject:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)forceRefreshScreenTimeForDSID:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)isScreenTimeSetupForDSID:(id)arg1;
- (void)updateScreenTimeServerFlagSettingsForDSID:(id)arg1 ephemeralAuthResults:(id)arg2 enabled:(bool)arg3 completionHandler:(id /* block */)arg4;

@end
