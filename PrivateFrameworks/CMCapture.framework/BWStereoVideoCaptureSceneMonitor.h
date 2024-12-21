/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWStereoVideoCaptureSceneMonitor : NSObject {
    double  _focusDistanceThreshold;
    double  _lastSuperWideFocusDistance;
    double  _lastWideFocusDistance;
    int  _luxLevelThreshold;
    float  _normalizedSNRThreshold;
    bool  _oneShotFocusScanInProgress;
    bool  _sceneIsTooDark;
    bool  _sceneTooDarkMonitoringEnabled;
    bool  _subjectIsTooClose;
    bool  _subjectTooCloseMonitoringEnabled;
    double  _wideMinimumValidFocusDistance;
}

+ (void)initialize;

- (void)dealloc;
- (void)focusScanDidComplete;
- (id)initWithTuningParametersByPortType:(id)arg1 attachDebugFrameStatistics:(bool)arg2;
- (bool)resolveStereoVideoCaptureStatusWithFrameStatistics:(id)arg1 sceneFlags:(unsigned long long)arg2 stereoVideoCaptureStatusOut:(int*)arg3;
- (void)setAutoFocusInProgress:(bool)arg1 focusLocked:(bool)arg2 oneShotFocusScanInProgress:(bool)arg3;

@end