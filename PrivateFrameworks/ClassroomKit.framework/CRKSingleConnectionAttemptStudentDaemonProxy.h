/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKSingleConnectionAttemptStudentDaemonProxy : NSObject <CATTaskClientDelegate, CRKRequestPerformingProtocol> {
    bool  mDidAttemptToConnect;
    NSError * mError;
    CATTaskClient * mTaskClient;
    <CRKTransportProviding> * mTransportProvider;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)client:(id)arg1 didInterruptWithError:(id)arg2;
- (void)connect;
- (void)connectIfNeeded;
- (void)dealloc;
- (void)failWithError:(id)arg1;
- (id)init;
- (id)initWithTransportProvider:(id)arg1;
- (id)operationForRequest:(id)arg1;

@end
