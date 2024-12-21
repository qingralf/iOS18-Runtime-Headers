/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/LiveCommunicationKit.framework/LiveCommunicationKit
 */

@interface LiveCommunicationKit.CallProviderWrapper : NSObject <CXProviderDelegate> {
    void onProviderDidActivateAudioSession;
    void onProviderDidBegin;
    void onProviderDidDeactivateAudioSession;
    void onProviderDidReset;
    void onProviderPerformAction;
    void onProviderPerformAnswerCallAction;
    void onProviderPerformEndCallAction;
    void onProviderPerformPlayDTMFCallAction;
    void onProviderPerformSetGroupCallAction;
    void onProviderPerformSetHeldCallAction;
    void onProviderPerformSetMutedCallAction;
    void onProviderPerformStartCallAction;
    void onProviderTimedOutPerformingAction;
}

- (void).cxx_destruct;
- (id)init;
- (void)provider:(id)arg1 didActivateAudioSession:(id)arg2;
- (void)provider:(id)arg1 didDeactivateAudioSession:(id)arg2;
- (void)provider:(id)arg1 performAnswerCallAction:(id)arg2;
- (void)provider:(id)arg1 performEndCallAction:(id)arg2;
- (void)provider:(id)arg1 performPlayDTMFCallAction:(id)arg2;
- (void)provider:(id)arg1 performSetGroupCallAction:(id)arg2;
- (void)provider:(id)arg1 performSetHeldCallAction:(id)arg2;
- (void)provider:(id)arg1 performSetMutedCallAction:(id)arg2;
- (void)provider:(id)arg1 performStartCallAction:(id)arg2;
- (void)provider:(id)arg1 timedOutPerformingAction:(id)arg2;
- (void)providerDidBegin:(id)arg1;
- (void)providerDidReset:(id)arg1;

@end