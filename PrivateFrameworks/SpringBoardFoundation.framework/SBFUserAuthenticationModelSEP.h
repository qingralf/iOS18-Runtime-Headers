/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFUserAuthenticationModelSEP : NSObject <SBFUserAuthenticationModel> {
    <SBFUserAuthenticationModelDelegate> * _delegate;
    SBFMobileKeyBag * _keybag;
    bool  _pendingWipe;
    bool  _permanentlyBlocked;
    MCProfileConnection * _profileConnection;
    SBSecurityDefaults * _securityDefaults;
    double  _unblockTime;
    bool  _userRequestedEraseEnabled;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <SBFUserAuthenticationModelDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPermanentlyBlocked, nonatomic, readonly) bool permanentlyBlocked;
@property (readonly) Class superclass;
@property (getter=isTemporarilyBlocked, nonatomic, readonly) bool temporarilyBlocked;
@property (nonatomic, readonly) double timeUntilUnblockedSinceReferenceDate;
@property (getter=isUserRequestedEraseEnabled, nonatomic, readonly) bool userRequestedEraseEnabled;

- (void).cxx_destruct;
- (id)_initWithKeyBag:(id)arg1 profileConnection:(id)arg2;
- (bool)_isDeviceWipePreferenceEnabled;
- (void)_refreshStateAndNotify:(bool)arg1;
- (void)_refreshStateForMkbState:(id)arg1 notify:(bool)arg2;
- (void)clearBlockedState;
- (id)delegate;
- (id)description;
- (id)descriptionBuilder;
- (id)initWithKeyBag:(id)arg1;
- (bool)isPermanentlyBlocked;
- (bool)isTemporarilyBlocked;
- (bool)isUserRequestedEraseEnabled;
- (void)noteNewMkbDeviceLockState:(id)arg1;
- (void)notePasscodeEntryBegan;
- (void)notePasscodeEntryCancelled;
- (void)notePasscodeUnlockFailedWithError:(id)arg1;
- (void)notePasscodeUnlockSucceeded;
- (void)performPasswordTest:(id /* block */)arg1;
- (void)refreshBlockedState;
- (void)setDelegate:(id)arg1;
- (void)synchronize;
- (double)timeUntilUnblockedSinceReferenceDate;

@end
