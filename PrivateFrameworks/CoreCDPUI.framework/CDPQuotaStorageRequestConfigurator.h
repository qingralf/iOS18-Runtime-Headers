/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

@interface CDPQuotaStorageRequestConfigurator : NSObject {
    ACAccount * _account;
    unsigned long long  _appList;
    bool  _specifyE2EE;
}

- (void).cxx_destruct;
- (bool)_isConfigurationValid;
- (id)initWithAccount:(id)arg1 appList:(unsigned long long)arg2 contentSpecifiesE2EE:(bool)arg3;
- (id)quotaRequest:(id*)arg1;

@end
