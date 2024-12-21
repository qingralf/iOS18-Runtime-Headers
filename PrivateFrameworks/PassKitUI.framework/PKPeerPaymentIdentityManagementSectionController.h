/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPeerPaymentIdentityManagementSectionController : PKPaymentPassDetailSectionController <_PeerPaymentIdentityManagerDelegate> {
    void account;
    void delegate;
    void identityManager;
    void renderer;
}

@property (nonatomic, readonly) NSArray *allSectionIdentifiers;
@property (nonatomic, readonly) NSArray *sectionIdentifiers;

+ (bool)validForPaymentPass:(id)arg1;

- (void).cxx_destruct;
- (id)allSectionIdentifiers;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)peerPaymentIdentityManager:(id)arg1 didUpdateProfileAppearanceData:(id)arg2;
- (void)preflight:(id /* block */)arg1;
- (id)sectionIdentifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSectionIdentifier:(id)arg2;
- (id)titleForFooterInSectionIdentifier:(id)arg1;
- (id)titleForHeaderInSectionIdentifier:(id)arg1;

@end