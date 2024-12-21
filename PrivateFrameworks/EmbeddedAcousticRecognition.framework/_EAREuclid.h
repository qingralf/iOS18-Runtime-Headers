/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

@interface _EAREuclid : NSObject {
    struct unique_ptr<quasar::QuasarEuclid, std::default_delete<quasar::QuasarEuclid>> { 
        struct __compressed_pair<quasar::QuasarEuclid *, std::default_delete<quasar::QuasarEuclid>> { 
            struct QuasarEuclid {} *__value_; 
        } __ptr_; 
    }  _quasarEuclid;
}

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)computeEmbedding:(id)arg1;
- (id)computeEmbeddings:(id)arg1;
- (id)distanceBetweenSource:(id)arg1 target:(id)arg2;
- (id)embeddingDim;
- (id)findNearestNeighbors:(id)arg1 numberOfNeighbors:(long long)arg2;
- (id)fullVersion;
- (id)initWithConfiguration:(id)arg1 euclidEncoderType:(long long)arg2;
- (id)initWithConfiguration:(id)arg1 euclidEncoderType:(long long)arg2 initFlag:(long long)arg3;
- (id)initWithConfiguration:(id)arg1 euclidEncoderType:(long long)arg2 initFlag:(long long)arg3 overrides:(id)arg4;
- (id)majorVersion;
- (id)maxInputLength;
- (id)minorVersion;
- (id)patchVersion;

@end