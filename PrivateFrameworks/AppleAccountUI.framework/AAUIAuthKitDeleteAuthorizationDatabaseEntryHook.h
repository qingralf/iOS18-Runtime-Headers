/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIAuthKitDeleteAuthorizationDatabaseEntryHook : NSObject <RUIServerHook> {
    <RUIServerHookDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <RUIServerHookDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) RUIObjectModel *objectModel; /* unknown property attribute: ? */
@property (nonatomic, retain) RUIServerHookResponse *serverHookResponse; /* unknown property attribute: ? */
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_revokeAuthorizationForClientID:(id)arg1 completion:(id /* block */)arg2;
- (id)delegate;
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(id /* block */)arg4;
- (void)processObjectModel:(id)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (bool)shouldMatchElement:(id)arg1;
- (bool)shouldMatchModel:(id)arg1;

@end
