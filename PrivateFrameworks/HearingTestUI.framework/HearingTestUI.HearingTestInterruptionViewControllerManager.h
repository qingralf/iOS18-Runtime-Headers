/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HearingTestUI.framework/HearingTestUI
 */

@interface HearingTestUI.HearingTestInterruptionViewControllerManager : NSObject <FitNoiseCheckDelegate> {
    void activeInterruption;
    void activeInterruptions;
    void analyticsManager;
    void deviceManager;
    void encounteredInterruptionRequiringFitCheck;
    void interruptionListener;
    void interruptionManager;
    void interruptionViewControllerDelegate;
    void requirementStatusManager;
}

- (void).cxx_destruct;
- (void)fitNoiseCheckCancelled:(id)arg1;
- (void)fitNoiseCheckCompleted:(id)arg1 status:(unsigned long long)arg2;
- (id)init;

@end
