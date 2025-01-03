/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSAuthenticateMetricsContext : NSObject {
    ACAccount * _account;
    NSError * _error;
    bool  _isServerRequested;
    AMSAuthenticateOptions * _options;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) NSError *error;
@property (nonatomic) bool isServerRequested;
@property (nonatomic, retain) AMSAuthenticateOptions *options;

- (void).cxx_destruct;
- (id)account;
- (id)error;
- (id)initWithOptions:(id)arg1 account:(id)arg2;
- (bool)isServerRequested;
- (id)options;
- (void)setAccount:(id)arg1;
- (void)setError:(id)arg1;
- (void)setIsServerRequested:(bool)arg1;
- (void)setOptions:(id)arg1;

@end
