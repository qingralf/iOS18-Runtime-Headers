/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PlatformSSOCore.framework/PlatformSSOCore
 */

@interface POTokenInfo : NSObject {
    bool  _canLogin;
    NSData * _keyHash;
    NSString * _name;
    NSString * _tokenId;
    NSData * _wrapHash;
}

@property (nonatomic) bool canLogin;
@property (nonatomic, copy) NSData *keyHash;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *tokenId;
@property (nonatomic, copy) NSData *wrapHash;

- (void).cxx_destruct;
- (bool)canLogin;
- (id)keyHash;
- (id)name;
- (void)setCanLogin:(bool)arg1;
- (void)setKeyHash:(id)arg1;
- (void)setName:(id)arg1;
- (void)setTokenId:(id)arg1;
- (void)setWrapHash:(id)arg1;
- (id)tokenId;
- (id)wrapHash;

@end
