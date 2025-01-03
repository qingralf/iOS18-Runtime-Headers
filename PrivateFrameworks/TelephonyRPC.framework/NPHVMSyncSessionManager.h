/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC
 */

@interface NPHVMSyncSessionManager : NSObject <SYChangeSerializer, SYSessionDelegate> {
    bool  _cancel;
    id /* block */  _completionCallback;
    NSMutableArray * _deltaSyncChangeTypes;
    NSMutableArray * _deltaSyncChanges;
    unsigned long long  _deltaSyncCurrentIdx;
    bool  _sessionInvalidated;
    NSObject<NPHVMSessionDelegate> * _vmSessionDelegate;
    id /* block */  _vmSessionProgressCallback;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool sessionInvalidated;
@property (readonly) Class superclass;
@property (nonatomic) NSObject<NPHVMSessionDelegate> *vmSessionDelegate;
@property (nonatomic, copy) id /* block */ vmSessionProgressCallback;

- (void).cxx_destruct;
- (void)cancel;
- (id)changeFromData:(id)arg1 ofType:(long long)arg2;
- (id)dataFromChange:(id)arg1;
- (id)decodeChangeData:(id)arg1 fromProtocolVersion:(long long)arg2 ofType:(long long)arg3;
- (id)encodeSYChangeForBackwardCompatibility:(id)arg1 protocolVersion:(long long)arg2;
- (void)enqueueVoicemailChanges:(id)arg1 changeType:(long long)arg2;
- (id)init;
- (bool)sessionInvalidated;
- (void)setSessionInvalidated:(bool)arg1;
- (void)setVmSessionDelegate:(id)arg1;
- (void)setVmSessionProgressCallback:(id /* block */)arg1;
- (void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(id /* block */)arg3;
- (void)syncSession:(id)arg1 didEndWithError:(id)arg2;
- (unsigned int)syncSession:(id)arg1 enqueueChanges:(id /* block */)arg2 error:(id*)arg3;
- (bool)syncSession:(id)arg1 resetDataStoreWithError:(id*)arg2;
- (id)vmSessionDelegate;
- (id /* block */)vmSessionProgressCallback;

@end
