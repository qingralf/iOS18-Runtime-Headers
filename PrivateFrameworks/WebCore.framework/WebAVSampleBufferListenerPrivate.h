/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebAVSampleBufferListenerPrivate : NSObject {
    struct Vector<WTF::RetainPtr<AVSampleBufferAudioRenderer>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { 
        void *m_buffer; 
        unsigned int m_capacity; 
        unsigned int m_size; 
    }  _audioRenderers;
    struct WeakPtr<WebCore::WebAVSampleBufferListenerClient, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { 
        struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { 
            struct DefaultWeakPtrImpl {} *m_ptr; 
        } m_impl; 
    }  _client;
    struct Vector<WTF::RetainPtr<NSObject<WebSampleBufferVideoRendering>>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { 
        void *m_buffer; 
        unsigned int m_capacity; 
        unsigned int m_size; 
    }  _videoRenderers;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)audioRendererWasAutomaticallyFlushed:(id)arg1;
- (void)beginObservingAudioRenderer:(id)arg1;
- (void)beginObservingVideoRenderer:(id)arg1;
- (id)initWithClient:(void*)arg1;
- (void)invalidate;
- (void)layerFailedToDecode:(id)arg1;
- (void)layerReadyForDisplayChanged:(id)arg1;
- (void)layerRequiresFlushToResumeDecodingChanged:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)stopObservingAudioRenderer:(id)arg1;
- (void)stopObservingVideoRenderer:(id)arg1;

@end