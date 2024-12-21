/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDVisionPrescriptionAuthorizationSchemaProvider : NSObject <HDAuthorizationSchemaProvider>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (long long)isClientAuthorizedToReadObject:(id)arg1 sourceBundleIdentifier:(id)arg2 clientEntitlements:(id)arg3 profile:(id)arg4 error:(id*)arg5;
- (long long)isClientAuthorizedToWriteObject:(id)arg1 sourceBundleIdentifier:(id)arg2 clientEntitlements:(id)arg3 profile:(id)arg4 error:(id*)arg5;
- (long long)setObjectAuthorizationStatuses:(id)arg1 forObjectType:(id)arg2 bundleIdentifier:(id)arg3 sessionIdentifier:(id)arg4 profile:(id)arg5 error:(id*)arg6;

@end