/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKProvisioningBackgroundCoordinator : NSObject {
    _PKProvisioningBackgroundCoordinator * _coordinator;
}

- (void).cxx_destruct;
- (id)archivedState;
- (void)cancel;
- (void)cleanUpArchivedProvisioningAndInvalidateWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithSetupContext:(id)arg1 credential:(id)arg2 previouslyAcceptedTerms:(bool)arg3;
- (void)invalidate;
- (void)startWithCompletion:(id /* block */)arg1;

@end
