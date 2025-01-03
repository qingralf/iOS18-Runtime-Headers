/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFUnifiedAccessSession : NFSession <SESACWGSessionDelegate> {
    NFApplet * _activeApplet;
    NSSet * _activeKeys;
    NSDictionary * _appletsById;
    bool  _cardEmulationStarted;
    <NFUnifiedAccessSessionDelegate> * _delegate;
    bool  _emulationActive;
    bool  _fieldNotificationSent;
    unsigned long long  _numActiveSEs;
    SESACWGSession * _sesdSession;
}

@property (readonly, retain) NFApplet *activeApplet;
@property (readonly, retain) NSSet *activeKeys;
@property (nonatomic) bool cardEmulationStarted;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property <NFUnifiedAccessSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SESACWGSession *sesdSession;
@property (readonly) Class superclass;

+ (id)requestAssertionForKeyID:(id)arg1 options:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)_createSesdSession;
- (bool)_startCardEmulationWithAuthorization:(id)arg1 error:(id*)arg2;
- (bool)_startDeferredCardEmulationWithAuthorization:(id)arg1 error:(id*)arg2;
- (id)activeApplet;
- (id)activeKeys;
- (id)allApplets;
- (id)appletWithIdentifier:(id)arg1;
- (id)appletsWithIdentifiers:(id)arg1 secondaryIdentifier:(id)arg2;
- (bool)cardEmulationStarted;
- (id)delegate;
- (void)didDetectField:(bool)arg1;
- (void)didDetectFieldNotification:(id)arg1;
- (void)didEndTransaction:(id)arg1;
- (void)didEndUnexpectedly;
- (void)didExpireTransactionForApplet:(id)arg1;
- (void)didExpressModeStateChange:(unsigned int)arg1 withObject:(id)arg2;
- (void)didFailDeferredAuthorization;
- (void)didFelicaStateChange:(id)arg1;
- (void)didPerformValueAddedServiceTransactions:(id)arg1;
- (void)didReceiveActivityTimeout:(id)arg1;
- (void)didReceivePendingServerRequest;
- (void)didSelectApplet:(id)arg1;
- (void)didSelectValueAddedService:(bool)arg1;
- (void)didStartSession:(id)arg1;
- (void)didStartTransaction:(id)arg1;
- (void)endSession;
- (void)endSessionWithCompletion:(id /* block */)arg1;
- (bool)isACWG;
- (bool)isUnifiedAccessOrAcwg:(id)arg1 secondaryIdentifier:(id)arg2;
- (unsigned long long)numberOfActiveSecureElements;
- (void)releaseSesdSession;
- (void)sesSession:(id)arg1 event:(id)arg2;
- (id)sesdSession;
- (bool)setActivePaymentApplet:(id)arg1 keys:(id)arg2 error:(id*)arg3;
- (bool)setActivePaymentApplets:(id)arg1 error:(id*)arg2;
- (void)setCardEmulationStarted:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSesdSession:(id)arg1;
- (bool)startCardEmulationWithAuthorization:(id)arg1 error:(id*)arg2;
- (bool)startDeferredCardEmulationWithAuthorization:(id)arg1 error:(id*)arg2;
- (bool)startExpressMode:(id*)arg1;
- (bool)stopCardEmulation:(id*)arg1;
- (bool)validateAidsAndKeys:(id)arg1;

@end
