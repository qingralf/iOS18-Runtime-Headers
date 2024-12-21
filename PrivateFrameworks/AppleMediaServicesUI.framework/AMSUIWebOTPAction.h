/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
 */

@interface AMSUIWebOTPAction : AMSUIWebAction <AMSUIWebActionRunnable> {
    bool  _enabled;
}

@property (nonatomic, readonly) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)enabled;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)runAction;
- (void)setEnabled:(bool)arg1;

@end