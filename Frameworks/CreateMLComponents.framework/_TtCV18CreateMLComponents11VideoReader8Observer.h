/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CreateMLComponents.framework/CreateMLComponents
 */

@interface _TtCV18CreateMLComponents11VideoReader8Observer : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate> {
    void captureSession;
    void configuration;
    void queue;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  state;
    void task;
}

- (void).cxx_destruct;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (void)dealloc;
- (id)init;

@end
