/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleIDSetupDaemon.framework/AppleIDSetupDaemon
 */

@interface AppleIDSetupDaemon.CloudSignInContext : NSObject <AASignInFlowControllerDelegate> {
    void backgroundDataclassEnablement;
    void cdpContext;
    void findMyActivationAction;
    void model;
    void requiredTerms;
    void shouldStashLoginResponse;
    void skipCDPEnablement;
    void skipDataclassEnablement;
}

@property (nonatomic) bool backgroundDataclassEnablement;
@property (nonatomic, retain) CDPContext *cdpContext;
@property (nonatomic) unsigned long long findMyActivationAction;
@property (nonatomic, copy) NSSet *requiredTerms;
@property (nonatomic) bool shouldStashLoginResponse;
@property (nonatomic) bool skipCDPEnablement;
@property (nonatomic) bool skipDataclassEnablement;

- (void).cxx_destruct;
- (bool)backgroundDataclassEnablement;
- (id)cdpContext;
- (unsigned long long)findMyActivationAction;
- (id)init;
- (id)requiredTerms;
- (void)setBackgroundDataclassEnablement:(bool)arg1;
- (void)setCdpContext:(id)arg1;
- (void)setFindMyActivationAction:(unsigned long long)arg1;
- (void)setRequiredTerms:(id)arg1;
- (void)setShouldStashLoginResponse:(bool)arg1;
- (void)setSkipCDPEnablement:(bool)arg1;
- (void)setSkipDataclassEnablement:(bool)arg1;
- (bool)shouldStashLoginResponse;
- (void)signInFlowController:(void *)arg1 enableFindMyWithAction:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 24: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, unsigned short, int, /* Warning: Unrecognized filer type: 'g' using 'void*' */ void*, in unsigned int, in /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, long, out /* Warning: Unrecognized filer type: 'w' using 'void*' */ void*, unsigned char, out in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, const out long, long, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)signInFlowController:(void *)arg1 presentProgressViewForAccount:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 33: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, unsigned short, int, /* Warning: Unrecognized filer type: 'g' using 'void*' */ void*, in unsigned int, in /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, long, out /* Warning: Unrecognized filer type: 'w' using 'void*' */ void*, unsigned char, out in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, const out long, long, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, unsigned char, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, BOOL, BOOL, out /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*, in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (bool)skipCDPEnablement;
- (bool)skipDataclassEnablement;

@end