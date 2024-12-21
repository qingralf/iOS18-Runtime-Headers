/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Hands.framework/Hands
 */

@interface MonoPoseEstimatorWrapper : NSObject {
    struct unique_ptr<MonoPoseEstimator, std::default_delete<MonoPoseEstimator>> { 
        struct __compressed_pair<MonoPoseEstimator *, std::default_delete<MonoPoseEstimator>> { 
            struct MonoPoseEstimator {} *__value_; 
        } __ptr_; 
    }  _estimator;
}

+ (id)defaultTransformsWithHandScale:(float)arg1 isLeft:(bool)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)computeTransformsWithHandScale:(void *)arg1 globalHandCenter:(void *)arg2 estimatorInput:(void *)arg3 enrollment:(void *)arg4; // needs 4 arg types, found 3: float, id, bool
- (float)getHandScale;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })getWristAccuracy;
- (id)initWithHandScale:(float)arg1 boneScale:(const float*)arg2 isLeft:(bool)arg3 useKalman:(bool)arg4;
- (bool)isLeft;
- (void)predict:(float)arg1;
- (void)reset;

@end