/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSAccidentalActivationMitigationSessionServiceClient : NSObject <SBSAccidentalActivationMitigationSessionServerToClientInterface> {
    <SBSAccidentalActivationMitigationSessionServiceClientDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    BSServiceConnection * _lock_connection;
}

@property (setter=_setConnection:, retain) BSServiceConnection *_connection;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <SBSAccidentalActivationMitigationSessionServiceClientDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_connection;
- (id)_createConnection;
- (void)_setConnection:(id)arg1;
- (void)activateSessionForBundleIdentifier:(id)arg1 duration:(double)arg2 accidentalActivationMitigationSessionCancellationPolicyClassName:(id)arg3;
- (id)delegate;
- (id)init;
- (oneway void)mitigationSessionDidTransitionToState:(id)arg1;
- (void)requestSessionCancellation;
- (void)setDelegate:(id)arg1;

@end
