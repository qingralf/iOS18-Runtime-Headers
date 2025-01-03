/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

@interface CDPEDPConfigProvider : NSObject {
    bool  _fetchCompleted;
    NSString * _tokenName;
    NSString * _tokenNameMedium;
    NSString * _tokenNameTitle;
}

@property bool fetchCompleted;
@property (copy) NSString *tokenName;
@property (copy) NSString *tokenNameMedium;
@property (copy) NSString *tokenNameTitle;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_extractTokenNameFromConfig:(id)arg1 finalize:(bool)arg2;
- (bool)fetchCompleted;
- (void)fetchConfig;
- (void)setFetchCompleted:(bool)arg1;
- (void)setTokenName:(id)arg1;
- (void)setTokenNameMedium:(id)arg1;
- (void)setTokenNameTitle:(id)arg1;
- (id)tokenName;
- (id)tokenNameMedium;
- (id)tokenNameTitle;

@end
