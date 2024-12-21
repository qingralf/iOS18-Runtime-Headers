/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSBagFixedAccountProvider : NSObject <AMSBagAccountProvider> {
    ACAccount * _account;
}

@property (nonatomic, retain) ACAccount *account;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identity;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)account;
- (bool)associatedAccountIsEqualToAccount:(id)arg1 forMediaType:(id)arg2;
- (id)bagAccountForAccountMediaType:(id)arg1;
- (id)bagAccountPromiseForAccountMediaType:(id)arg1;
- (id)bagStorefrontForAccountMediaType:(id)arg1;
- (id)bagStorefrontPromiseForAccountMediaType:(id)arg1;
- (id)identity;
- (id)initWithAccount:(id)arg1;
- (void)setAccount:(id)arg1;

@end