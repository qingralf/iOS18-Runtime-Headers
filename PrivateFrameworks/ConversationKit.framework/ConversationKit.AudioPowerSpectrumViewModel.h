/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
 */

@interface ConversationKit.AudioPowerSpectrumViewModel : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _localPowerSpectrum;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _remotePowerSpectrum;
    void audioPowerTapQueue;
    void call;
    void callCenter;
    void cancellables;
    void downlinkPowerTap;
    void hasActiveWaveform;
    void localParticipantStreamToken;
    void localWaveformFilter;
    void needsBackdropFilterLayer;
    void notificationCenter;
    void remoteParticipantStreamToken;
    void remoteWaveformFilter;
    void uplinkPowerTap;
    void waveformColorLocal;
    void waveformColorRemote;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)handleCallRecordingStateChanged:(id)arg1;
- (void)handleCallStatusChanged:(id)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;

@end
