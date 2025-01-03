/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUKeybagInterface : NSObject {
    NSObject<OS_dispatch_queue> * _observerCalloutQueue;
    int  _passcodeChangedNotifyToken;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _queue_hasPasscodeSet;
    bool  _queue_isPasscodeLocked;
    NSHashTable * _queue_observers;
    int  _stateChangedNotifyToken;
}

@property (nonatomic, readonly) bool hasPasscodeSet;
@property (nonatomic, readonly) bool isPasscodeLocked;

// Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (int)_queue_fetchKeybagState;
- (bool)_queue_hasPasscodeSetFromLockState:(int)arg1;
- (bool)_queue_isPasscodeLockedFromLockState:(int)arg1;
- (void)_queue_passcodeChanged;
- (void)_queue_refreshState;
- (void)_queue_setHasPasscodeSet:(bool)arg1;
- (void)_queue_setIsPasscodeLocked:(bool)arg1;
- (void)addObserver:(id)arg1;
- (bool)createInstallationKeybagForDescriptor:(id)arg1 withLASecret:(id)arg2 forUnattendedInstall:(bool)arg3;
- (bool)createInstallationKeybagForDescriptor:(id)arg1 withSecret:(id)arg2 forUnattendedInstall:(bool)arg3;
- (id)createPreventLockAssertionWithDuration:(double)arg1;
- (bool)disableKeybagStash;
- (bool)hadFirstUnlock;
- (bool)hasPasscodeSet;
- (id)init;
- (int)installationKeybagStateForDescriptor:(id)arg1;
- (bool)isPasscodeLocked;
- (bool)persistKeybagStash;
- (void)removeObserver:(id)arg1;
- (id)stringForStashMode:(int)arg1;

// Image: /System/Library/PrivateFrameworks/SoftwareUpdateServicesUI.framework/SoftwareUpdateServicesUI

- (bool)authenticate:(id)arg1;
- (double)backOffTime;
- (void)lockDevice;

@end
