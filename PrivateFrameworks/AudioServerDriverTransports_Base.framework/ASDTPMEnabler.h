/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AudioServerDriverTransports_Base.framework/AudioServerDriverTransports_Base
 */

@interface ASDTPMEnabler : ASDTPMDevice {
    int  _disableTransition;
    int  _enableTransition;
}

@property (nonatomic) int disableTransition;
@property (nonatomic) int enableTransition;

- (bool)asdtHandlesPowerTransition:(int)arg1;
- (int)asdtPowerStateChange:(int)arg1;
- (int)disableTransition;
- (int)enable:(bool)arg1;
- (int)enableTransition;
- (id)initWithConfig:(id)arg1 forSequencer:(id)arg2;
- (void)setDisableTransition:(int)arg1;
- (void)setEnableTransition:(int)arg1;

@end
