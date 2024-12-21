/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPhysicalCardController : NSObject <PKSetupFlowControllerProtocol> {
    PKAccount * _account;
    PKAccountService * _accountService;
    PKAccountUser * _accountUser;
    PKPhysicalCard * _expiredPhysicalCard;
    <PKSetupFlowControllerProtocol> * _parentFlowController;
    PKPaymentPass * _paymentPass;
    NSSet * _physicalCards;
    PKPhysicalCard * _primaryPhysicalCard;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
    PKPhysicalCard * _unactivatedPhysicalCard;
    bool  _updatingOrderController;
}

@property (nonatomic, readonly) PKAccount *account;
@property (nonatomic, readonly) PKAccountUser *accountUser;
@property (nonatomic, readonly) bool canActivatePhysicalCard;
@property (nonatomic, readonly) bool canReplacePhysicalCard;
@property (nonatomic, readonly) bool canRequestNewPhysicalCard;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PKPhysicalCard *expiredPhysicalCard;
@property (nonatomic, readonly) bool hasExpiredPhysicalCardOnly;
@property (nonatomic, readonly) bool hasPrimaryPhysicalCard;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <PKSetupFlowControllerProtocol> *parentFlowController;
@property (nonatomic, readonly) PKPaymentPass *paymentPass;
@property (nonatomic, readonly) bool physicalCardBlocked;
@property (nonatomic, readonly) NSSet *physicalCards;
@property (nonatomic, readonly) PKPhysicalCard *primaryPhysicalCard;
@property (nonatomic, readonly) bool primaryPhysicalCardEnabled;
@property (nonatomic, readonly) NSDate *primaryPhysicalCardExpirationDate;
@property (nonatomic) <PKPaymentSetupViewControllerDelegate> *setupDelegate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PKPhysicalCard *unactivatedPhysicalCard;

+ (bool)deviceSupportsContactlessActivation;

- (void).cxx_destruct;
- (void)_updatePhysicalCards;
- (bool)_userSupportsActivatingPhysicalCard;
- (bool)_userSupportsRequestingPhysicalCard;
- (id)account;
- (id)accountUser;
- (bool)canActivatePhysicalCard;
- (bool)canReplacePhysicalCard;
- (bool)canRequestNewPhysicalCard;
- (void)dealloc;
- (id)expiredPhysicalCard;
- (bool)hasExpiredPhysicalCardOnly;
- (bool)hasPrimaryPhysicalCard;
- (id)initWithAccountService:(id)arg1 paymentPass:(id)arg2 account:(id)arg3 accountUser:(id)arg4 physicalCards:(id)arg5;
- (void)nextViewControllerWithCompletion:(id /* block */)arg1;
- (void)orderFlowViewControllerForReason:(unsigned long long)arg1 content:(long long)arg2 completion:(id /* block */)arg3;
- (id)parentFlowController;
- (id)paymentPass;
- (bool)physicalCardBlocked;
- (id)physicalCards;
- (id)primaryPhysicalCard;
- (bool)primaryPhysicalCardEnabled;
- (id)primaryPhysicalCardExpirationDate;
- (void)replaceFlowViewControllerForReason:(unsigned long long)arg1 content:(long long)arg2 currentPhysicalCard:(id)arg3 completion:(id /* block */)arg4;
- (void)setParentFlowController:(id)arg1;
- (void)setSetupDelegate:(id)arg1;
- (id)setupDelegate;
- (id)unactivatedPhysicalCard;
- (void)updateWithAccount:(id)arg1;
- (void)updateWithPhysicalCards:(id)arg1;

@end