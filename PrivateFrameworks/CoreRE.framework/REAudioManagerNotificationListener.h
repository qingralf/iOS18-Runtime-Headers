/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE
 */

@interface REAudioManagerNotificationListener : NSObject {
    struct UnfairLock { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } m_lock; 
    }  _audioSessionMutex;
    AVAudioSession * _audioSessionToFollow;
    struct AudioSceneService { int (**x1)(); } * _owner;
}

@property (readonly) AVAudioSession *audioSessionToFollow;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)audioSessionToFollow;
- (void)dealloc;
- (id)initWithOwner:(void*)arg1;
- (void)servicesLost:(id)arg1;
- (void)servicesReset:(id)arg1;
- (void)sessionInterrupted:(id)arg1;
- (void)stop;

@end