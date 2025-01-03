/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebCoreAVVideoCaptureSourceObserver : NSObject <AVCapturePhotoCaptureDelegate, AVCaptureVideoDataOutputSampleBufferDelegate> {
    struct ThreadSafeWeakPtr<WebCore::AVVideoCaptureSource> { 
        struct RefPtr<WTF::ThreadSafeWeakPtrControlBlock, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock>, WTF::ThreadSafeWeakPtrControlBlockRefDerefTraits> { 
            struct ThreadSafeWeakPtrControlBlock {} *m_ptr; 
        } m_controlBlock; 
        struct AVVideoCaptureSource {} *m_objectOfCorrectType; 
    }  m_captureSource;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addNotificationObservers;
- (void)beginSessionInterrupted:(id)arg1;
- (void)captureOutput:(id)arg1 didFinishProcessingPhoto:(id)arg2 error:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (void)deviceConnectedDidChange:(id)arg1;
- (void)disconnect;
- (void)endSessionInterrupted:(id)arg1;
- (id)initWithCaptureSource:(void*)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeNotificationObservers;
- (void)sessionRuntimeError:(id)arg1;

@end
