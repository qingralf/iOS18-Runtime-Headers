/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
 */

@interface AVCaptureControl : NSObject {
    bool  _enabled;
    NSString * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    AVWeakReference * _overlayReference;
    AVWeakReference * _sessionReference;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *actionQueue;
@property (nonatomic, readonly) AVCaptureDevice *device;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic) AVCaptureControlsOverlay *overlay;
@property (nonatomic, readonly) CAMAbstractOverlayServiceControl *overlayControl;
@property (nonatomic) AVCaptureSession *session;

- (id)_enabledUpdateWithEnabled:(bool)arg1;
- (id)actionQueue;
- (void)dealloc;
- (id)device;
- (id)enabledUpdate;
- (void)enqueueActionWithUpdate:(id)arg1;
- (id)identifier;
- (id)initSubclass;
- (void)installObservers;
- (bool)isEnabled;
- (id)overlay;
- (id)overlayControl;
- (id)overlayUpdate;
- (void)overlayVisibilityDidChange:(bool)arg1;
- (void)removeObservers;
- (id)session;
- (void)setEnabled:(bool)arg1;
- (void)setOverlay:(id)arg1;
- (void)setSession:(id)arg1;

@end