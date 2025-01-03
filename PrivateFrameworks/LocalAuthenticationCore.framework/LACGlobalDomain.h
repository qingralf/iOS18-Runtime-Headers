/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LocalAuthenticationCore.framework/LocalAuthenticationCore
 */

@interface LACGlobalDomain : NSObject <LACGlobalDomain, LACGlobalDomainDTO>

@property (nonatomic, retain) NSNumber *isDTOStrictModeEnabled;

+ (id)companionAuthentication;
+ (bool)isCompanionDeviceMocked;
+ (id)isCompanionSessionActive;
+ (id)isSharedModeActive;
+ (bool)osVariantAllowsDomainOverrides;
+ (id)preboardMode;
+ (id)runningInBATS;
+ (void)setCompanionAuthentication:(id)arg1;
+ (void)setIsCompanionDeviceMocked:(bool)arg1;
+ (void)setIsCompanionSessionActive:(id)arg1;
+ (void)setIsSharedModeActive:(id)arg1;
+ (void)setPreboardMode:(id)arg1;
+ (void)setRunningInBATS:(id)arg1;
+ (void)setSharedModeLatency:(id)arg1;
+ (id)sharedInstance;
+ (id)sharedModeLatency;

- (id)isDTOStrictModeEnabled;
- (void)setIsDTOStrictModeEnabled:(id)arg1;

@end
