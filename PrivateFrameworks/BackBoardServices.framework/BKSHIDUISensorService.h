/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSHIDUISensorService : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    BKSHIDUISensorMode * _lock_prevailingMode;
    BSCompoundAssertion * _modeAssertion;
    BSCompoundAssertion * _suppressionAssertion;
}

@property (nonatomic, readonly) BKSHIDUISensorCharacteristics *sensorCharacteristics;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_lock_pushCurrentModeToServer;
- (id)init;
- (void)proximityDidUnoccludeAfterWake;
- (id)requestUISensorMode:(id)arg1;
- (id)sensorCharacteristics;
- (id)suppressUISensorChangesForReason:(id)arg1;

@end
