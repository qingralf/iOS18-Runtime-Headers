/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAMetalDrawable : NSObject <CAMetalDrawable, CAMetalDrawableSPI, MTLDrawableSPI> {
    <MTLTexture> * _cachedTexture;
    float  _clientPreferredLatency;
    bool  _didComposite;
    bool  _didFinish;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _dirtyRect;
    unsigned long long  _drawableID;
    bool  _hasExplicitDeadlines;
    unsigned int  _insertSeed;
    CAMetalLayer * _layer;
    double  _minimumPresentationDuration;
    bool  _needsLowLatency;
    struct CATimingFramePacingLatency { 
        double latency; 
        double frame_duration; 
    }  _preferredLatency;
    double  _presentDeadline;
    NSMutableArray * _presentScheduledHandlers;
    unsigned int  _presentScheduledInsertSeed;
    bool  _presentScheduledInsertSeedValid;
    NSMutableArray * _presentedHandlers;
    double  _presentedTime;
    struct _CAMetalDrawablePrivate { struct Atomic { struct { int x_1_2_1; } x_1_1_1; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; double x9; struct _CAMetalLayerPrivate {} *x10; struct __IOSurface {} *x11; id x12; id x13; struct CGColorSpace {} *x14; id x15; id x16; unsigned char x17; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; } * _priv;
    IOSurfaceSharedEvent * _sharedEvent;
    unsigned long long  _status;
    unsigned int  _surfaceID;
    double  _targetPresentationTimestamp;
    double  _targetSamplingTimestamp;
    double  _targetTimestamp;
    double  _timeAcquired;
    double  _timePresentCalled;
    unsigned int  _updateSeed;
}

@property (nonatomic) float clientPreferredLatency;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didComposite;
@property (nonatomic) bool didFinish;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } dirtyRect;
@property (nonatomic) unsigned long long drawableID;
@property (nonatomic) bool hasExplicitDeadlines;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int insertSeed;
@property (readonly) CAMetalLayer *layer;
@property (nonatomic) double minimumPresentationDuration;
@property (nonatomic) bool needsLowLatency;
@property (nonatomic) struct CATimingFramePacingLatency { double x1; double x2; } preferredLatency;
@property (nonatomic) double presentDeadline;
@property (nonatomic) unsigned int presentScheduledInsertSeed;
@property (nonatomic) bool presentScheduledInsertSeedValid;
@property (nonatomic) double presentedTime;
@property (nonatomic, retain) IOSurfaceSharedEvent *sharedEvent;
@property (nonatomic) unsigned long long status;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int surfaceID;
@property (nonatomic) double targetPresentationTimestamp;
@property (nonatomic) double targetSamplingTimestamp;
@property (nonatomic) double targetTimestamp;
@property (readonly) <MTLTexture> *texture;
@property (nonatomic) double timeAcquired;
@property (nonatomic) double timePresentCalled;
@property (nonatomic) unsigned int updateSeed;

- (void).cxx_destruct;
- (void)addPresentScheduledHandler:(id /* block */)arg1;
- (void)addPresentedHandler:(id /* block */)arg1;
- (id)cachedTexture;
- (float)clientPreferredLatency;
- (void)dealloc;
- (bool)didComposite;
- (bool)didFinish;
- (void)didPresentAtTime:(double)arg1;
- (void)didScheduledPresent;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })dirtyRect;
- (unsigned long long)drawableID;
- (void)estimateTargets;
- (bool)hasExplicitDeadlines;
- (bool)hasPresentedHandlers;
- (id)initWithDrawablePrivate:(struct _CAMetalDrawablePrivate { struct Atomic { struct { int x_1_2_1; } x_1_1_1; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; double x9; struct _CAMetalLayerPrivate {} *x10; struct __IOSurface {} *x11; id x12; id x13; struct CGColorSpace {} *x14; id x15; id x16; unsigned char x17; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; }*)arg1 layer:(id)arg2 waitStart:(double)arg3;
- (unsigned int)insertSeed;
- (id)layer;
- (double)minimumPresentationDuration;
- (bool)needsLowLatency;
- (id)newTextureWithResourceIndex:(unsigned long long)arg1;
- (struct CATimingFramePacingLatency { double x1; double x2; })preferredLatency;
- (void)present;
- (void)presentAfterMinimumDuration:(double)arg1;
- (void)presentAtTime:(double)arg1;
- (double)presentDeadline;
- (unsigned int)presentScheduledInsertSeed;
- (bool)presentScheduledInsertSeedValid;
- (void)presentWithOptions:(id)arg1;
- (double)presentedTime;
- (struct _CAMetalDrawablePrivate { struct Atomic { struct { int x_1_2_1; } x_1_1_1; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; double x9; struct _CAMetalLayerPrivate {} *x10; struct __IOSurface {} *x11; id x12; id x13; struct CGColorSpace {} *x14; id x15; id x16; unsigned char x17; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; }*)priv;
- (void)releasePrivateReferences:(void*)arg1;
- (void)setClientPreferredLatency:(float)arg1;
- (void)setDidComposite:(bool)arg1;
- (void)setDidFinish:(bool)arg1;
- (void)setDirtyRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDrawableID:(unsigned long long)arg1;
- (void)setHasExplicitDeadlines:(bool)arg1;
- (void)setInsertSeed:(unsigned int)arg1;
- (void)setMinimumPresentationDuration:(double)arg1;
- (void)setNeedsLowLatency:(bool)arg1;
- (void)setPreferredLatency:(struct CATimingFramePacingLatency { double x1; double x2; })arg1;
- (void)setPresentDeadline:(double)arg1;
- (void)setPresentScheduledInsertSeed:(unsigned int)arg1;
- (void)setPresentScheduledInsertSeedValid:(bool)arg1;
- (void)setPresentedTime:(double)arg1;
- (void)setSharedEvent:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (void)setSurfaceID:(unsigned int)arg1;
- (void)setTargetPresentationTimestamp:(double)arg1;
- (void)setTargetSamplingTimestamp:(double)arg1;
- (void)setTargetTimestamp:(double)arg1;
- (void)setTimeAcquired:(double)arg1;
- (void)setTimePresentCalled:(double)arg1;
- (void)setUpdateSeed:(unsigned int)arg1;
- (id)sharedEvent;
- (unsigned long long)status;
- (unsigned int)surfaceID;
- (double)targetPresentationTimestamp;
- (double)targetSamplingTimestamp;
- (double)targetTimestamp;
- (id)texture;
- (double)timeAcquired;
- (double)timePresentCalled;
- (unsigned int)updateSeed;

@end
