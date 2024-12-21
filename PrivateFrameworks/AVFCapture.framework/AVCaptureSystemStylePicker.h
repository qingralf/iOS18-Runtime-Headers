/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
 */

@interface AVCaptureSystemStylePicker : AVCaptureControl {
    id /* block */  _action;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _actionLock;
    bool  _changeSmartStyleInProcess;
    bool  _observing;
    CAMOverlayServicePicker * _overlayControl;
    AVCaptureSmartStyle * _selectedStyle;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _selectedStyleLock;
    AVWeakReference * _sessionReference;
    bool  _smartStyleHasChanged;
    NSArray * _styles;
    NSArray * _titles;
}

+ (void)initialize;

- (id)_automaticStylesWithSystemSmartStyle:(id)arg1;
- (id)actionQueue;
- (void)dealloc;
- (void)enqueueActionWithUpdate:(id)arg1;
- (id)initWithSession:(id)arg1;
- (id)initWithSession:(id)arg1 action:(id /* block */)arg2;
- (id)initWithSession:(id)arg1 styles:(id)arg2 action:(id /* block */)arg3;
- (void)installObservers;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)overlayControl;
- (id)overlayUpdate;
- (void)overlayVisibilityDidChange:(bool)arg1;
- (void)removeObservers;

@end