/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDAccountDataSecurityObserver : NSObject {
    long long  _cachedWalrusStatusForLoggedInAccount;
    CKDLogicalDeviceContext * _deviceContext;
    NSError * _lastCDPErrorForManateeStatus;
    NSError * _lastCDPErrorForWalrusStatus;
    long long  _manateeAvailableForLoggedInAccount;
    NSObject<OS_dispatch_queue> * _statusQueue;
    <NSObject> * _walrusStatusChangeObserver;
}

@property (nonatomic) long long cachedWalrusStatusForLoggedInAccount;
@property (nonatomic) CKDLogicalDeviceContext *deviceContext;
@property (nonatomic, copy) NSError *lastCDPErrorForManateeStatus;
@property (nonatomic, copy) NSError *lastCDPErrorForWalrusStatus;
@property (setter=_lockedSetManateeAvailableForLoggedInAccount:, nonatomic) long long manateeAvailableForLoggedInAccount;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *statusQueue;
@property (nonatomic, retain) <NSObject> *walrusStatusChangeObserver;

+ (id)sharedWalrusController;

- (void).cxx_destruct;
- (long long)_fetchManateeAvailability:(id*)arg1;
- (void)_lockedFetchAndUpdateManateeAvailability;
- (void)_lockedSetManateeAvailableForLoggedInAccount:(long long)arg1;
- (bool)accountSupportsManatee:(id)arg1;
- (long long)cachedWalrusStatusForLoggedInAccount;
- (void)dealloc;
- (id)deviceContext;
- (void)handleManateeStatusUpdateNotificationWithAvailability:(id)arg1;
- (void)handleWalrusStateChanged;
- (id)initWithDeviceContext:(id)arg1;
- (bool)isManateeAvailableForAccount:(id)arg1 isSecondaryAccount:(bool)arg2 error:(id*)arg3;
- (bool)isWalrusEnabledForAccount:(id)arg1 allowBlockingFetch:(bool)arg2;
- (bool)isWalrusEnabledForAccount:(id)arg1 isSecondaryAccount:(bool)arg2 allowBlockingFetch:(bool)arg3 error:(id*)arg4;
- (id)lastCDPErrorForManateeStatus;
- (id)lastCDPErrorForWalrusStatus;
- (long long)manateeAvailableForLoggedInAccount;
- (void)manateeStatusForAccount:(id)arg1 isSecondaryAccount:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)postClouddWalrusUpdateNotification;
- (void)setCachedWalrusStatusForLoggedInAccount:(long long)arg1;
- (void)setDeviceContext:(id)arg1;
- (void)setLastCDPErrorForManateeStatus:(id)arg1;
- (void)setLastCDPErrorForWalrusStatus:(id)arg1;
- (void)setStatusQueue:(id)arg1;
- (void)setWalrusStatusChangeObserver:(id)arg1;
- (id)statusQueue;
- (id)walrusStatusChangeObserver;
- (void)walrusStatusForAccount:(id)arg1 isSecondaryAccount:(bool)arg2 checkCache:(bool)arg3 allowFetch:(bool)arg4 completionHandler:(id /* block */)arg5;

@end
