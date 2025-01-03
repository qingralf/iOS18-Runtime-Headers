/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKAuthenticationMachine : NSObject <NSCoding> {
    NSString * _accountName;
    long long  _serverEnvironment;
}

@property (nonatomic, retain) NSString *accountName;
@property (nonatomic) long long serverEnvironment;

+ (id)authMachineForEnvironment:(long long)arg1;
+ (void)migratePreBlacktailAccountInformation;
+ (void)migratePreSundanceAccountInformation;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)serverEnvironment;
- (void)setAccountName:(id)arg1;
- (void)setServerEnvironment:(long long)arg1;

@end
