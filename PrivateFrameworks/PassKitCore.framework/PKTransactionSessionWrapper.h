/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKTransactionSessionWrapper : NSObject {
    <NFSession> * _nfSession;
    STSSession * _stsSession;
}

@property (nonatomic, readonly) <NFSession> *nfSession;
@property (nonatomic, readonly) STSSession *stsSession;

- (void).cxx_destruct;
- (void)endSession;
- (void)endSessionWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithNFSession:(id)arg1;
- (id)initWithSTSSession:(id)arg1;
- (id)nfSession;
- (id)stsSession;

@end
