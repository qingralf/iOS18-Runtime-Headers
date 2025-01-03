/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLWebTokenHandlerResponse : NSObject {
    NSString * _displayName;
    NSDate * _expiryDate;
    NSArray * _grantedDataclasses;
    NSString * _idToken;
    NSString * _refreshToken;
    NSString * _token;
    NSArray * _usernames;
}

@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSDate *expiryDate;
@property (nonatomic, readonly) NSArray *grantedDataclasses;
@property (nonatomic, readonly) NSString *idToken;
@property (nonatomic, readonly) NSString *refreshToken;
@property (nonatomic, retain) NSString *token;
@property (nonatomic, readonly) NSArray *usernames;

- (void).cxx_destruct;
- (id)displayName;
- (id)expiryDate;
- (id)grantedDataclasses;
- (id)idToken;
- (id)initWithTokenResponse:(id)arg1 usernames:(id)arg2 displayname:(id)arg3;
- (id)refreshToken;
- (void)setToken:(id)arg1;
- (id)token;
- (id)usernames;

@end
