/* Generated by RuntimeBrowser.
 */

@protocol TSDKernelClockClient <NSObject>

@optional

- (void)didBeginClockGrandmasterChangeForClock:(_TSF_TSDKernelClock *)arg1;
- (void)didBeginClockGrandmasterChangeWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2 forClock:(_TSF_TSDKernelClock *)arg3;
- (void)didChangeClockMasterForClock:(_TSF_TSDKernelClock *)arg1;
- (void)didChangeLocalPortWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2 forClock:(_TSF_TSDKernelClock *)arg3;
- (void)didChangeLockStateTo:(int)arg1 forClock:(_TSF_TSDKernelClock *)arg2;
- (void)didEndClockGrandmasterChangeForClock:(_TSF_TSDKernelClock *)arg1;
- (void)didEndClockGrandmasterChangeWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2 forClock:(_TSF_TSDKernelClock *)arg3;
- (void)didProcessSync:(_TSF_TSDKernelClock *)arg1;
- (void)didResetClock:(_TSF_TSDKernelClock *)arg1;

@end
