/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IsolatedCoreAudioClient.framework/IsolatedCoreAudioClient
 */

@interface IsolatedCoreAudioXPCService : IsolatedCoreAudioClientNSXPCListenerDelegate <IsolatedCoreAudioServerProtocol> {
    struct shared_ptr<ServerSideAudioSwitchboard> { 
        struct ServerSideAudioSwitchboard {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _mServerSideSwitchboard;
}

@property (nonatomic) struct shared_ptr<ServerSideAudioSwitchboard> { struct ServerSideAudioSwitchboard {} *x1; struct __shared_weak_count {} *x2; } mServerSideSwitchboard;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)checkInForIsolatedAudioSharedResources:(unsigned int)arg1 with:(id /* block */)arg2;
- (void)checkOutForIsolatedAudioSharedResources:(unsigned int)arg1;
- (void)getWorkgroupForIsolatedAudio:(unsigned int)arg1 with:(id /* block */)arg2;
- (id)init;
- (id)initWithClientReaper:(struct function<void (int)>={__value_func<void (int)>={type=[24C] {})arg1;
- (struct shared_ptr<ServerSideAudioSwitchboard> { struct ServerSideAudioSwitchboard {} *x1; struct __shared_weak_count {} *x2; })mServerSideSwitchboard;
- (void)setMServerSideSwitchboard:(struct shared_ptr<ServerSideAudioSwitchboard> { struct ServerSideAudioSwitchboard {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)startIsolatedAudioForUseCase:(unsigned int)arg1 atTime:(unsigned long long)arg2 with:(id /* block */)arg3;
- (void)startIsolatedAudioForUseCase:(unsigned int)arg1 with:(id /* block */)arg2;
- (void)stopIsolatedAudioForUseCase:(unsigned int)arg1 with:(id /* block */)arg2;

@end
