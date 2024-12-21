/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSDCTranslationClock : NSObject <TSDClockSyncGeneralSyncClient, TSDKernelClockClient> {
    _TSF_TSDClockSync * _clockSync;
    TSXTranslationClock * _translationClock;
    _TSF_TSDKernelClock * _translationKernelClock;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TSXTranslationClock *translationClock;
@property (nonatomic, readonly) _TSF_TSDKernelClock *translationKernelClock;

- (void).cxx_destruct;
- (void)dealloc;
- (void)didChangeClockMasterForClock:(id)arg1;
- (void)didChangeLockStateTo:(int)arg1 forClock:(id)arg2;
- (void)getInitialSyncInfo;
- (id)initWithClockIdentifier:(unsigned long long)arg1;
- (id)translationClock;
- (id)translationKernelClock;
- (void)updateTimeSyncTime:(unsigned long long)arg1 timeSyncInterval:(unsigned long long)arg2 domainTime:(unsigned long long)arg3 domainInterval:(unsigned long long)arg4;

@end