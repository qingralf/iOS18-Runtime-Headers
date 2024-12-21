/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Seeding.framework/Seeding
 */

@interface SDMDMConfiguratorDaemon : NSObject

+ (long long)applyMDMConfiguration:(id)arg1;
+ (long long)conditionallyUnenrollIfNotMatchingOfferedTokensWithConfig:(id)arg1 userIdentifier:(id)arg2;
+ (void)configureWithOfferProgramTokens:(id)arg1 requireProgramToken:(id)arg2 enrollmentPolicy:(long long)arg3 userIdentifier:(id)arg4 completion:(id /* block */)arg5;
+ (long long)enrollWithRequireProgramToken:(id)arg1 userIdentifier:(id)arg2;
+ (bool)isBetaEnrollmentDisabled;

@end