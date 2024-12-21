/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

@interface ASTEnvironment : NSObject {
    NSNumber * _SOCKSProxyPort;
    NSString * _SOCKSProxyServer;
    unsigned long long  _environmentType;
    unsigned long long  _server;
    NSURL * _serverURL;
}

@property (nonatomic, retain) NSNumber *SOCKSProxyPort;
@property (nonatomic, retain) NSString *SOCKSProxyServer;
@property (nonatomic, retain) NSURL *assetURL;
@property (nonatomic, retain) NSString *configCode;
@property (nonatomic, retain) NSString *diagsChannel;
@property (nonatomic) unsigned long long environmentType;
@property (nonatomic) unsigned long long server;
@property (nonatomic, retain) NSURL *serverURL;

+ (id)currentEnvironment;
+ (id)environmentWithEnvironmentType:(unsigned long long)arg1;
+ (bool)isInternalBuild;
+ (void)resetEnvironment;

- (void).cxx_destruct;
- (id)SOCKSProxyPort;
- (id)SOCKSProxyServer;
- (unsigned long long)_defaultServerSelection;
- (id)_defaultServerURL;
- (id)_generateServerURL;
- (id)assetURL;
- (id)configCode;
- (id)diagsChannel;
- (id)environmentServerString;
- (unsigned long long)environmentType;
- (id)init;
- (id)initWithEnvironmentType:(unsigned long long)arg1;
- (unsigned long long)server;
- (id)serverURL;
- (void)setAssetURL:(id)arg1;
- (void)setConfigCode:(id)arg1;
- (void)setDiagsChannel:(id)arg1;
- (void)setEnvironmentType:(unsigned long long)arg1;
- (void)setSOCKSProxyPort:(id)arg1;
- (void)setSOCKSProxyServer:(id)arg1;
- (void)setServer:(unsigned long long)arg1;
- (void)setServerURL:(id)arg1;

@end