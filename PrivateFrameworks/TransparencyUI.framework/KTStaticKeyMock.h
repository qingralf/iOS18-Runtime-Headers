/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TransparencyUI.framework/TransparencyUI
 */

@interface KTStaticKeyMock : TransparencyStaticKey <KTStaticKeyMockProtocol> {
    bool  _codeFailure;
    bool  _delayCode;
    NSMutableDictionary * _mockHandles;
    NSObject<OS_dispatch_queue> * _mockQueue;
    NSObject<OS_dispatch_queue> * _mockWork;
    <KTNotificationCenter> * _notificationCenter;
    KTAccountPublicID * _peerID;
}

@property bool codeFailure;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property bool delayCode;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSMutableDictionary *mockHandles;
@property (retain) NSObject<OS_dispatch_queue> *mockQueue;
@property (retain) NSObject<OS_dispatch_queue> *mockWork;
@property (retain) <KTNotificationCenter> *notificationCenter;
@property (retain) KTAccountPublicID *peerID;
@property (readonly) Class superclass;

+ (id)mockStaticKeyWithNotificationCenter:(id)arg1;
+ (id)staticKeyWithNotificationCenter:(id)arg1;

- (void).cxx_destruct;
- (void)codeAvailable:(id)arg1 code:(id)arg2;
- (bool)codeFailure;
- (bool)delayCode;
- (void)deleteKTSession:(id)arg1 complete:(id /* block */)arg2;
- (void)getKTSessionByHandle:(id)arg1 complete:(id /* block */)arg2;
- (void)getKTSessionByID:(id)arg1 complete:(id /* block */)arg2;
- (void)listKTSessions:(id /* block */)arg1;
- (id)mockHandles;
- (id)mockQueue;
- (id)mockWork;
- (id)notificationCenter;
- (id)peerID;
- (void)postNotification:(id)arg1 state:(id)arg2;
- (void)setCodeFailure:(bool)arg1;
- (void)setDelayCode:(bool)arg1;
- (void)setMockHandles:(id)arg1;
- (void)setMockQueue:(id)arg1;
- (void)setMockWork:(id)arg1;
- (void)setNotificationCenter:(id)arg1;
- (void)setPeerID:(id)arg1;
- (void)setupCode:(id)arg1;
- (void)setupKTSession:(id)arg1 complete:(id /* block */)arg2;

@end
