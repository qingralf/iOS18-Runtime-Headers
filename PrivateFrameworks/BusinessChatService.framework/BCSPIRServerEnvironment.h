/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

@interface BCSPIRServerEnvironment : NSObject <BCSPIRServerEnvironmentProtocol> {
    bool  _isInternalInstall;
    long long  _serverType;
    long long  _type;
    BCSUserDefaults * _userDefaults;
}

@property (nonatomic) bool isInternalInstall;
@property (nonatomic, readonly) NSString *pirUseCase;
@property (nonatomic, readonly) bool pirUsesCompression;
@property (nonatomic, readonly) NSString *secondaryIdentifier;
@property (nonatomic) long long serverType;
@property (nonatomic) long long type;
@property (nonatomic, retain) BCSUserDefaults *userDefaults;

- (void).cxx_destruct;
- (id)initWithUserDefaults:(id)arg1 isInternalInstall:(bool)arg2 type:(long long)arg3 serverType:(long long)arg4;
- (bool)isInternalInstall;
- (id)pirUseCase;
- (bool)pirUsesCompression;
- (id)secondaryIdentifier;
- (long long)serverType;
- (void)setIsInternalInstall:(bool)arg1;
- (void)setServerType:(long long)arg1;
- (void)setType:(long long)arg1;
- (void)setUserDefaults:(id)arg1;
- (long long)type;
- (id)userDefaults;

@end
