/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreAudio.framework/CoreAudio
 */

@interface DSP_HALBypass_IOProcessor : NSObject <HAL_DSP_IOProcessor> {
    void * _dspCallbacks;
    <HAL_DSP_HostCallbacks> * _hostCallbacks;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) void*dspCallbacks;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <HAL_DSP_HostCallbacks> *hostCallbacks;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)adaptToConfigurationChange:(id)arg1 withCallbacks:(void*)arg2 error:(id*)arg3;
- (void)dealloc;
- (void*)dspCallbacks;
- (id)getProcessorPropertySet;
- (id)hostCallbacks;
- (id)init;
- (id)negotiateConfigurationChange:(id)arg1 error:(id*)arg2;
- (void)setDspCallbacks:(void*)arg1;
- (void)setHostCallbacks:(id)arg1;
- (id)simulateConfigurationChange:(id)arg1 error:(id*)arg2;

@end
