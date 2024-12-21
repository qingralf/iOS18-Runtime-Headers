/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriCrossDeviceArbitrationFeedback.framework/SiriCrossDeviceArbitrationFeedback
 */

@interface SiriCrossDeviceArbitrationFeedback.FeedbackServiceImpl : NSObject <SiriCrossDeviceArbitrationFeedback.FeedbackService> {
    void $__lazy_storage_$_globals;
    void $__lazy_storage_$_notificationService;
    void $__lazy_storage_$_userfeedbackController;
    void delegate;
}

@property (nonatomic, retain) <_TtP34SiriCrossDeviceArbitrationFeedback23FeedbackServiceDelegate_> *delegate;
@property (nonatomic, retain) <_TtP34SiriCrossDeviceArbitrationFeedback7Globals_> *globals;

+ (id)receivedArbitrationsDirectoryURL;
+ (id)sharedService;

- (void).cxx_destruct;
- (void)add:(id)arg1;
- (void)addWithParticipation:(id)arg1 directoryPath:(id)arg2;
- (id)delegate;
- (id)globals;
- (void)handleAssistantDismissed;
- (void)handleWithResponse:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)setGlobals:(id)arg1;

@end