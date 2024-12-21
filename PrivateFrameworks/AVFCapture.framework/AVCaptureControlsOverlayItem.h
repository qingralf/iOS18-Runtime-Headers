/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
 */

@interface AVCaptureControlsOverlayItem : NSObject {
    AVCaptureControl * _control;
    CAMAbstractOverlayServiceControl * _overlayControl;
}

@property (nonatomic, readonly) AVCaptureControl *control;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) CAMAbstractOverlayServiceControl *overlayControl;

- (id)control;
- (void)dealloc;
- (id)identifier;
- (id)initWithControl:(id)arg1 overlayControl:(id)arg2;
- (id)overlayControl;

@end