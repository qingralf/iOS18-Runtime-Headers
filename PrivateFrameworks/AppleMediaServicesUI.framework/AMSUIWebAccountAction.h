/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
 */

@interface AMSUIWebAccountAction : AMSUIWebAction <AMSUIWebActionRunnable> {
    ACAccount * _account;
    NSDictionary * _accountObject;
}

@property (nonatomic, copy) ACAccount *account;
@property (nonatomic, retain) NSDictionary *accountObject;
@property (nonatomic, readonly) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)account;
- (id)accountObject;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)runAction;
- (void)setAccount:(id)arg1;
- (void)setAccountObject:(id)arg1;

@end
