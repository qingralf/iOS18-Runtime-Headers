/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

@interface ETTapMessage : ETMessage {
    double  _baseTime;
    NSMutableArray * _colors;
    SKFieldNode * _noiseField;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _noiseFieldLock;
    struct vector<CGPoint, std::allocator<CGPoint>> { 
        struct CGPoint {} *__begin_; 
        struct CGPoint {} *__end_; 
        struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { 
            struct CGPoint {} *__value_; 
        } __end_cap_; 
    }  _points;
    SKScene * _preVisualizeScene;
    unsigned long long  _soundIndex;
    NSTimer * _soundTimer;
    struct vector<double, std::allocator<double>> { 
        double *__begin_; 
        double *__end_; 
        struct __compressed_pair<double *, std::allocator<double>> { 
            double *__value_; 
        } __end_cap_; 
    }  _times;
}

@property (nonatomic, readonly) unsigned long long tapCount;

+ (unsigned short)messageType;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_animateCircleInner0:(double)arg1 inner1:(double)arg2 outer0:(double)arg3 outer1:(double)arg4 duration:(double)arg5;
- (void)_displayInScene:(id)arg1 point:(struct CGPoint { double x1; double x2; })arg2 color:(id)arg3 filled:(bool)arg4 withWisp:(bool)arg5;
- (void)addTapAtPoint:(struct CGPoint { double x1; double x2; })arg1 time:(double)arg2 color:(id)arg3;
- (id)archiveData;
- (void)displayInScene:(id)arg1;
- (id)init;
- (id)initWithArchiveData:(id)arg1;
- (double)messageDuration;
- (id)messageTypeAsString;
- (struct CGPoint { double x1; double x2; })pointAtIndex:(unsigned long long)arg1;
- (void)preVisualizeInScene:(id)arg1;
- (bool)reachedSizeLimit;
- (unsigned long long)tapCount;
- (double)timeDeltaAtIndex:(unsigned long long)arg1;

@end
