/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriTTSTraining.framework/SiriTTSTraining
 */

@interface SiriTTSTrainer : NSObject {
    <SiriTTSTrainerTaskDelegate> * _delegate;
    struct shared_ptr<SiriTTS::TTSTrainer> { 
        struct TTSTrainer {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _trainer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithPaths:(id)arg1 dataAssetPath:(id)arg2 inferenceAssetPath:(id)arg3;
- (id)initWithPaths:(id)arg1 dataAssetPath:(id)arg2 inferenceAssetPath:(id)arg3 taskId:(id)arg4;
- (void)pause;
- (long long)start_preprocess:(id)arg1;
- (long long)start_train:(long long)arg1 delegate:(id)arg2;
- (void)stop;

@end