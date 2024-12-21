/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PhotosUICore.TungstenFirstFrameObserver : _TtCs12_SwiftObject <PXGHostingControllerFrameObserver> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _$observationRegistrar;
    void __didRenderFirstFrame;
    void __hostingController;
}

@property (nonatomic, readonly) OS_dispatch_queue *hostingControllerObservationQueue;

- (void)hostingController:(id)arg1 didRenderFrame:(id)arg2;
- (id)hostingControllerObservationQueue;

@end