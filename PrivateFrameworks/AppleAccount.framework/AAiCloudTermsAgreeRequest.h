/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAiCloudTermsAgreeRequest : AARequest {
    ACAccount * _account;
    NSDictionary * _additionalHeaders;
    bool  _preferPassword;
    NSString * _serverInfo;
    NSNumber * _slaVersion;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) NSDictionary *additionalHeaders;
@property (nonatomic) bool preferPassword;
@property (nonatomic, copy) NSString *serverInfo;
@property (nonatomic, retain) NSNumber *slaVersion;

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)account;
- (id)additionalHeaders;
- (id)initWithURLString:(id)arg1 account:(id)arg2;
- (void)performRequestWithHandler:(id /* block */)arg1;
- (bool)preferPassword;
- (id)serverInfo;
- (void)setAccount:(id)arg1;
- (void)setAdditionalHeaders:(id)arg1;
- (void)setPreferPassword:(bool)arg1;
- (void)setServerInfo:(id)arg1;
- (void)setSlaVersion:(id)arg1;
- (id)slaVersion;
- (id)urlRequest;

@end
