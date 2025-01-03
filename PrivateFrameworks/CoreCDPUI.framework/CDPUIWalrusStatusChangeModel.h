/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

@interface CDPUIWalrusStatusChangeModel : NSObject <CDPUIStatusChangeModel> {
    CDPContext * _cdpContext;
    unsigned long long  _targetStatus;
    <CDPStateUIProvider> * _uiProvider;
    <CDPWalrusStatusProvider> * _walrusStatusProvider;
    <CDPWalrusStatusUpdater> * _walrusStatusUpdater;
    CDPContext * authenticatedContext;
}

@property (nonatomic, retain) CDPContext *authenticatedContext;
@property (nonatomic, readonly) NSString *cancelButtonText;
@property (nonatomic, readonly) CDPContext *cdpContext;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *messageText;
@property (nonatomic, readonly) NSString *primaryButtonText;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long targetStatus;
@property (nonatomic, readonly) NSString *titleText;
@property (nonatomic, readonly) <CDPStateUIProvider> *uiProvider;

- (void).cxx_destruct;
- (void)_checkCurrentStatus:(id /* block */)arg1;
- (bool)_hasLocalSecret;
- (void)_reportUserChoice:(unsigned long long)arg1 error:(id)arg2;
- (void)_updateUnderlyingValue:(id /* block */)arg1;
- (id)authenticatedContext;
- (id)cancelButtonText;
- (id)cdpContext;
- (id)initWithTargetStatus:(unsigned long long)arg1 statusProvider:(id)arg2 statusUpdater:(id)arg3;
- (id)initWithTargetStatus:(unsigned long long)arg1 statusProvider:(id)arg2 statusUpdater:(id)arg3 context:(id)arg4;
- (id)messageText;
- (id)primaryButtonText;
- (void)setAuthenticatedContext:(id)arg1;
- (unsigned long long)targetStatus;
- (id)titleText;
- (id)uiProvider;

@end
