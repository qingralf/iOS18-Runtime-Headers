/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSCaptureButtonAppConfigurationClient : NSObject <SBSCaptureButtonAppConfigurationServerToClientInterface> {
    <SBSCaptureButtonAppConfigurationClientDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    BSServiceConnection * _lock_connection;
}

@property (setter=_setConnection:, nonatomic, retain) BSServiceConnection *_connection;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <SBSCaptureButtonAppConfigurationClientDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_connection;
- (void)_setConnection:(id)arg1;
- (id)delegate;
- (void)establishConnectionIfNeeded;
- (id)init;
- (oneway void)receiveInitialOrUpdatedAssociatedAppBundleIdentifier:(id)arg1;
- (oneway void)receiveInitialOrUpdatedEligibleApps:(id)arg1;
- (void)setCurrentAssociatedAppUsingBundleIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
