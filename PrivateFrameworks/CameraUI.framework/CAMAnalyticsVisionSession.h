/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMAnalyticsVisionSession : CAMAnalyticsEvent {
    bool  __MRCDetectionEnabled;
    unsigned long long  __appClipButtonPressCount;
    unsigned long long  __appClipPillPressCount;
    unsigned long long  __countDocumentScanningCanceledScans;
    unsigned long long  __countDocumentScanningCompletedScans;
    unsigned long long  __countDocumentScanningPressCount;
    unsigned long long  __countObservedDocuments;
    bool  __documentScanningEnabled;
    unsigned long long  __maxAppClipCodeCount;
    unsigned long long  __maxQRCodeCount;
    unsigned long long  __maxTextRegionCount;
    NSMutableSet * __pressedQRTypes;
    unsigned long long  __qrButtonPressCount;
    unsigned long long  __qrPillPressCount;
    double  __startTime;
    unsigned long long  __textButtonPressCount;
    bool  __textDetectionEnabled;
}

@property (getter=_isMRCDetectionEnabled, nonatomic, readonly) bool _MRCDetectionEnabled;
@property (setter=_setAppClipButtonPressCount:, nonatomic) unsigned long long _appClipButtonPressCount;
@property (setter=_setAppClipPillPressCount:, nonatomic) unsigned long long _appClipPillPressCount;
@property (setter=_setCountDocumentScanningCanceleddScans:, nonatomic) unsigned long long _countDocumentScanningCanceledScans;
@property (setter=_setCountDocumentScanningCompletedScans:, nonatomic) unsigned long long _countDocumentScanningCompletedScans;
@property (setter=_setCountDocumentScanningPressCount:, nonatomic) unsigned long long _countDocumentScanningPressCount;
@property (setter=_setCountObservedDocuments:, nonatomic) unsigned long long _countObservedDocuments;
@property (getter=_isDocumentScanningEnabled, nonatomic, readonly) bool _documentScanningEnabled;
@property (setter=_setMaxAppClipCodeCount:, nonatomic) unsigned long long _maxAppClipCodeCount;
@property (setter=_setMaxQRCodeCount:, nonatomic) unsigned long long _maxQRCodeCount;
@property (setter=_setMaxTextRegionCount:, nonatomic) unsigned long long _maxTextRegionCount;
@property (setter=_setPressedMRCTypes:, nonatomic, retain) NSMutableSet *_pressedQRTypes;
@property (setter=_setQRButtonPressCount:, nonatomic) unsigned long long _qrButtonPressCount;
@property (setter=_setQRPillPressCount:, nonatomic) unsigned long long _qrPillPressCount;
@property (setter=_setStartTime:, nonatomic) double _startTime;
@property (setter=_setTextButtonPressCount:, nonatomic) unsigned long long _textButtonPressCount;
@property (getter=_isTextDetectionEnabled, nonatomic, readonly) bool _textDetectionEnabled;
@property (nonatomic, readonly) unsigned long long totalMRCInteractions;
@property (nonatomic, readonly) unsigned long long totalTextInteractions;

- (void).cxx_destruct;
- (id)_analyticsValueForQRType:(long long)arg1;
- (id)_analyticsValueForQRTypes:(id)arg1;
- (unsigned long long)_appClipButtonPressCount;
- (unsigned long long)_appClipPillPressCount;
- (long long)_bucketedCount:(long long)arg1;
- (unsigned long long)_countDocumentScanningCanceledScans;
- (unsigned long long)_countDocumentScanningCompletedScans;
- (unsigned long long)_countDocumentScanningPressCount;
- (void)_countMRCTypeForAction:(id)arg1;
- (unsigned long long)_countObservedDocuments;
- (bool)_isDocumentScanningEnabled;
- (bool)_isMRCDetectionEnabled;
- (bool)_isTextDetectionEnabled;
- (unsigned long long)_maxAppClipCodeCount;
- (unsigned long long)_maxQRCodeCount;
- (unsigned long long)_maxTextRegionCount;
- (id)_pressedQRTypes;
- (unsigned long long)_qrButtonPressCount;
- (unsigned long long)_qrPillPressCount;
- (void)_setAppClipButtonPressCount:(unsigned long long)arg1;
- (void)_setAppClipPillPressCount:(unsigned long long)arg1;
- (void)_setCountDocumentScanningCanceleddScans:(unsigned long long)arg1;
- (void)_setCountDocumentScanningCompletedScans:(unsigned long long)arg1;
- (void)_setCountDocumentScanningPressCount:(unsigned long long)arg1;
- (void)_setCountObservedDocuments:(unsigned long long)arg1;
- (void)_setMaxAppClipCodeCount:(unsigned long long)arg1;
- (void)_setMaxQRCodeCount:(unsigned long long)arg1;
- (void)_setMaxTextRegionCount:(unsigned long long)arg1;
- (void)_setPressedMRCTypes:(id)arg1;
- (void)_setQRButtonPressCount:(unsigned long long)arg1;
- (void)_setQRPillPressCount:(unsigned long long)arg1;
- (void)_setStartTime:(double)arg1;
- (void)_setTextButtonPressCount:(unsigned long long)arg1;
- (double)_startTime;
- (unsigned long long)_textButtonPressCount;
- (void)countButtonPressForDocumentScanning;
- (void)countButtonPressForMRC:(id)arg1 action:(id)arg2;
- (void)countDocumentScanningCanceledScans;
- (void)countDocumentScanningCompletedScans;
- (void)countObservedDocumentScanning;
- (void)countObservedSignficantMRCs:(id)arg1;
- (void)countObservedSignficantTextRegionCount:(unsigned long long)arg1;
- (void)countPillPressForMRC:(id)arg1 action:(id)arg2;
- (void)countTextButtonPress;
- (id)eventName;
- (id)initWithTextDetectionEnabled:(bool)arg1 MRCDetectionEnabled:(bool)arg2 documentScanningEnabled:(bool)arg3;
- (void)publish;
- (unsigned long long)totalMRCInteractions;
- (unsigned long long)totalTextInteractions;

@end
