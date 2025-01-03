/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSAuthenticateRequest : NSObject <NSSecureCoding> {
    ACAccount * _account;
    bool  _isServerRequested;
    NSString * _logKey;
    AMSAuthenticateOptions * _options;
    NSDictionary * _userInfo;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic) bool isServerRequested;
@property (nonatomic, retain) NSString *logKey;
@property (nonatomic, retain) AMSAuthenticateOptions *options;
@property (nonatomic, retain) NSDictionary *userInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)account;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAccount:(id)arg1 options:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDSID:(id)arg1 altDSID:(id)arg2 username:(id)arg3 options:(id)arg4;
- (bool)isServerRequested;
- (id)logKey;
- (id)options;
- (void)setAccount:(id)arg1;
- (void)setIsServerRequested:(bool)arg1;
- (void)setLogKey:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
