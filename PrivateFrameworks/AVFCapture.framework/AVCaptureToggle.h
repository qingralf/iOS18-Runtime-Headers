/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
 */

@interface AVCaptureToggle : AVCaptureControl {
    NSString * _accessibilityIdentifier;
    id /* block */  _action;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _actionLock;
    NSObject<OS_dispatch_queue> * _actionQueue;
    NSString * _localizedTitle;
    NSString * _offSymbolName;
    bool  _on;
    NSString * _onSymbolName;
    CAMOverlayServiceToggle * _overlayControl;
}

@property (nonatomic, copy) NSString *accessibilityIdentifier;
@property (nonatomic, copy) id /* block */ action;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *actionQueue;
@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (nonatomic, readonly, copy) NSString *offSymbolName;
@property (getter=isOn, nonatomic) bool on;
@property (nonatomic, readonly, copy) NSString *onSymbolName;

+ (void)initialize;

- (id)accessibilityIdentifier;
- (id /* block */)action;
- (id)actionQueue;
- (void)dealloc;
- (id)description;
- (void)enqueueActionWithUpdate:(id)arg1;
- (id)initWithLocalizedTitle:(id)arg1 onSymbolName:(id)arg2 offSymbolName:(id)arg3;
- (bool)isOn;
- (id)localizedTitle;
- (id)offSymbolName;
- (id)onSymbolName;
- (id)overlayControl;
- (id)overlayUpdate;
- (void)setAccessibilityIdentifier:(id)arg1;
- (void)setAction:(id /* block */)arg1;
- (void)setActionQueue:(id)arg1;
- (void)setActionQueue:(id)arg1 action:(id /* block */)arg2;
- (void)setOn:(bool)arg1;

@end
