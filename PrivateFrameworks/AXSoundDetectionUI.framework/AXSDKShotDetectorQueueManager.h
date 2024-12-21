/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXSoundDetectionUI.framework/AXSoundDetectionUI
 */

@interface AXSDKShotDetectorQueueManager : AXSDDetectorQueueManager <AXSDUltronModelAssetManagerDelegate> {
    NSMutableSet * _detectorQueue;
    bool  _queueGeneralDetector;
    bool  _ready;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addGeneralApplianceDetector;
- (void)assetsNotReadyForUltronManager:(id)arg1;
- (void)assetsReadyForUltronManager:(id)arg1;
- (bool)currentGeneralDetectorIsValid;
- (id)init;
- (void)removeGeneralApplianceDetector;

@end