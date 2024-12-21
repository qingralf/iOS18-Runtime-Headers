/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BacklightServicesHost.framework/BacklightServicesHost
 */

@interface BLSHFlipbook : NSObject <BLSHFlipbook> {
    CAFlipBook * _flipbook;
    bool  _hangDetected;
    NSObject<OS_dispatch_queue> * _hangDetectorQueue;
    unsigned long long  _hangDetectorStartTimestamp;
    BSAbsoluteMachTimer * _hangDetectorTimer;
    NSObject<OS_dispatch_workloop> * _hangDetectorWorkloop;
    bool  _inverted;
    bool  _wantsTransform;
}

@property (nonatomic, readonly) NSArray *activeFrames;
@property (nonatomic) bool cachesFramesOnExit;
@property (nonatomic, readonly) <BLSHRenderedFlipbookFrame> *captureFrameOnGlass;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <BLSHRenderedFlipbookFrame> *frameOnGlass;
@property bool hangDetected;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <BLSHRenderedFlipbookFrame> *lastRenderedFrame;
@property (nonatomic, readonly) unsigned long long memoryUsage;
@property (getter=is1HzFlipbook, setter=set1HzFlipbook:, nonatomic) bool oneHzFlipbook;
@property (getter=isPowerSavingEnabled, nonatomic) bool powerSavingEnabled;
@property (readonly) Class superclass;

+ (id)createWithPlatformProvider:(id)arg1;

- (void).cxx_destruct;
- (id)activeFrames;
- (bool)cachesFramesOnExit;
- (id)cancelAllFrames;
- (id)captureFrameOnGlass;
- (void)collect;
- (void)dealloc;
- (id)frameOnGlass;
- (bool)hangDetected;
- (id)initWithPlatformProvider:(id)arg1;
- (void)invalidate;
- (bool)is1HzFlipbook;
- (bool)isPowerSavingEnabled;
- (id)lastRenderedFrame;
- (unsigned long long)memoryUsage;
- (void)purge;
- (void)renderFrameForPresentation:(id)arg1 dateSpecifier:(id)arg2 completion:(id /* block */)arg3;
- (void)set1HzFlipbook:(bool)arg1;
- (void)setCachesFramesOnExit:(bool)arg1;
- (void)setHangDetected:(bool)arg1;
- (void)setPowerSavingEnabled:(bool)arg1;

@end