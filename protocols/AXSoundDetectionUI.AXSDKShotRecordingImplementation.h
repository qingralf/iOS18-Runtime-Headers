/* Generated by RuntimeBrowser.
 */

@protocol AXSoundDetectionUI.AXSDKShotRecordingImplementation <AXSoundDetectionUI.AXSDControllerImplementation>

@required

- (void)deregisterWithListener:(NSNumber *)arg1;
- (bool)kickoffMLTrainingOfDetector:(AXSDKShotDetector *)arg1 error:(id*)arg2;
- (void)registerWithListener:(void *)arg1 forRecordingUpdates:(void *)arg2; // needs 2 arg types, found 7: NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AXSDKShotDetector *, void*
- (bool)retrainModelWithIdentifier:(NSString *)arg1;
- (void)startListeningToTrainDetector:(AXSDKShotDetector *)arg1;

@end