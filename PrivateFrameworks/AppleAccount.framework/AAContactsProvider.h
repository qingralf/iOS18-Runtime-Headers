/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAContactsProvider : NSObject {
    AAContactsManager * _contactsManager;
}

- (void).cxx_destruct;
- (id)_localContactsForCustodians:(id)arg1;
- (id)_localContactsForCustodianshipOwners:(id)arg1;
- (void)fetchCustodiansAndBeneficiaries:(id /* block */)arg1;
- (void)fetchCustodianshipsAndBenefactors:(id /* block */)arg1;
- (void)fetchMyBenefactors:(id /* block */)arg1;
- (void)fetchMyBeneficiaries:(id /* block */)arg1;
- (void)fetchMyCachedCustodians:(id /* block */)arg1;
- (void)fetchMyCustodians:(id /* block */)arg1;
- (void)fetchMyCustodianshipOwners:(id /* block */)arg1;
- (void)fetchMyHealthyCustodians:(id /* block */)arg1;
- (void)fetchMyWalrusEligibleCustodians:(id /* block */)arg1;
- (void)fetchSuggestedBeneficiaries:(id /* block */)arg1;
- (void)fetchSuggestedCustodians:(id /* block */)arg1;
- (void)fetchWalrusEligibleCustodiansForExpansionCohortsWithCompletion:(id /* block */)arg1;
- (id)init;

@end