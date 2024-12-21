/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PassKitCore.ProvisioningStepReadCard : NSObject <PKSTSTapToProvisionDelegate> {
    void commonCompletion;
    void context;
    void credential;
    void eventCooldownTimer;
    void onDidFindCard;
    void onDidStartPolling;
    void onFailedToReadCard;
    void readFailureTimeoutTimer;
    void reader;
    void sharedState;
    void tearEventCount;
    void timeoutEventCount;
}

- (void).cxx_destruct;
- (id)init;
- (void)tapToProvisionReader:(id)arg1 didUpdateWithEvent:(long long)arg2;

@end