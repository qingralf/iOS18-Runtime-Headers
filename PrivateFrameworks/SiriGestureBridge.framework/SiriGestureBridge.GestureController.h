/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriGestureBridge.framework/SiriGestureBridge
 */

@interface SiriGestureBridge.GestureController : NSObject <AFNotifyObserverDelegate, HGHeadGesturesDelegateInternal> {
    void announcementState;
    void announcingIncomingCall;
    void audioSessionConfigured;
    void delegate;
    void expectingSiriClassicConfirmation;
    void expectingSiriIEConfirmation;
    void expectingSiriPommesConfirmation;
    void expectingSiriXConfirmation;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  gestureMapping;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  headGestureDeduper;
    void headGestureQueue;
    void hgManager;
    void isListening;
    void isReady;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastActionEventId;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastPromptInfo;
    void promptedForConfirmation;
    void readingAnnouncement;
    void recognizing;
    void requestActive;
    void serviceHelper;
    void sessionActive;
    void sessionState;
    void siriObserver;
    void siriObserverQueue;
    void ttsActive;
    void useOwnAudioSession;
    void userIntent;
    void waitingForTTS;
}

- (void).cxx_destruct;
- (void)didDetectedError;
- (void)didDetectedWithHeadGesture:(id)arg1;
- (void)didStartStreamingWithIsStreaming:(bool)arg1;
- (id)init;
- (void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;

@end