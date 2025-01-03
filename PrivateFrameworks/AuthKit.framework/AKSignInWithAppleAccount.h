/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKSignInWithAppleAccount : NSObject <NSCopying, NSSecureCoding> {
    NSString * _appStoreAdamID;
    NSString * _clientID;
    NSDate * _creationDate;
    bool  _hasEULA;
    NSString * _localizedAppDeveloperName;
    NSString * _localizedAppName;
    NSString * _privacyPolicyURL;
    NSString * _privateEmail;
    AKSignInWithAppleAccountShareInfo * _shareInfo;
    long long  _sharedScopes;
    NSString * _teamID;
    NSString * _userID;
}

@property (nonatomic, copy) NSString *appStoreAdamID;
@property (nonatomic, readonly, copy) NSString *appStoreURL;
@property (nonatomic, readonly, copy) NSString *clientID;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic) bool hasEULA;
@property (nonatomic, copy) NSString *localizedAppDeveloperName;
@property (nonatomic, copy) NSString *localizedAppName;
@property (nonatomic, copy) NSString *privacyPolicyURL;
@property (nonatomic, copy) NSString *privateEmail;
@property (nonatomic, retain) AKSignInWithAppleAccountShareInfo *shareInfo;
@property (nonatomic) long long sharedScopes;
@property (nonatomic, copy) NSString *teamID;
@property (nonatomic, readonly, copy) NSString *userID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appStoreAdamID;
- (id)appStoreURL;
- (id)clientID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasEULA;
- (id)initWithClientID:(id)arg1 userID:(id)arg2;
- (id)initWithClientID:(id)arg1 userID:(id)arg2 scopes:(id)arg3 creationDate:(id)arg4 privateEmail:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)localizedAppDeveloperName;
- (id)localizedAppName;
- (id)privacyPolicyURL;
- (id)privateEmail;
- (void)setAppStoreAdamID:(id)arg1;
- (void)setHasEULA:(bool)arg1;
- (void)setLocalizedAppDeveloperName:(id)arg1;
- (void)setLocalizedAppName:(id)arg1;
- (void)setPrivacyPolicyURL:(id)arg1;
- (void)setPrivateEmail:(id)arg1;
- (void)setShareInfo:(id)arg1;
- (void)setSharedScopes:(long long)arg1;
- (void)setTeamID:(id)arg1;
- (id)shareInfo;
- (long long)sharedScopes;
- (id)teamID;
- (id)userID;

@end
