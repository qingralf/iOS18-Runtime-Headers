/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

@interface SNDSPGraph : NSObject {
    struct shared_ptr<DSPGraph::Graph> { 
        struct Graph {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _graph;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;
- (bool)preflight:(long long)arg1 outputFrameCount:(long long*)arg2 error:(id*)arg3;
- (bool)processInputBufferList:(struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; }*)arg1 inputFrameCount:(unsigned int)arg2 atSourcePosition:(long long)arg3 to:(struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; }*)arg4 outputFrameCapacity:(unsigned int)arg5 outputFrameCount:(unsigned int*)arg6 atDestinationPosition:(long long*)arg7 error:(id*)arg8;

@end