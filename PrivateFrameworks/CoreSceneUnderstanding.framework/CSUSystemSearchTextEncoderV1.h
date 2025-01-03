/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSceneUnderstanding.framework/CoreSceneUnderstanding
 */

@interface CSUSystemSearchTextEncoderV1 : NSObject {
    NSDictionary * _additionalLayers;
    CSUSystemSearchTextEncoderV1Configuration * _configuration;
    struct unique_ptr<ik::EspressoNet, std::default_delete<ik::EspressoNet>> { 
        struct __compressed_pair<ik::EspressoNet *, std::default_delete<ik::EspressoNet>> { 
            struct EspressoNet {} *__value_; 
        } __ptr_; 
    }  _textEncoderNet;
    struct unique_ptr<ik::EspressoNet, std::default_delete<ik::EspressoNet>> { 
        struct __compressed_pair<ik::EspressoNet *, std::default_delete<ik::EspressoNet>> { 
            struct EspressoNet {} *__value_; 
        } __ptr_; 
    }  _tokenEmbeddingNet;
    NSArray * _tokenSegments;
    struct unique_ptr<csu::SentencePieceVocabulary, std::default_delete<csu::SentencePieceVocabulary>> { 
        struct __compressed_pair<csu::SentencePieceVocabulary *, std::default_delete<csu::SentencePieceVocabulary>> { 
            struct SentencePieceVocabulary {} *__value_; 
        } __ptr_; 
    }  _vocabulary;
}

@property (nonatomic, retain) NSDictionary *additionalLayers;
@property (nonatomic, readonly) CSUSystemSearchTextEncoderV1Configuration *configuration;
@property (retain) NSArray *tokenSegments;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_unsafeRunOnInput:(id)arg1 completion:(id /* block */)arg2;
- (void)_unsafeRunOnInputText:(id)arg1 completion:(id /* block */)arg2;
- (id)additionalLayers;
- (bool)checkIfEmbeddingInDstBufferIsContiguous:(const void*)arg1;
- (bool)checkIfEmbeddingInSrcBufferIsContiguous:(id)arg1;
- (id)configuration;
- (struct EspressoTensor { int (**x1)(); int x2; struct TensorShape { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x_1_2_1; unsigned long long *x_1_2_2; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x_3_3_1; } x_1_2_3; } x_3_1_1; } x3; struct shared_ptr<ik::TensorStorage> { struct TensorStorage {} *x_4_1_1; struct __shared_weak_count {} *x_4_1_2; } x4; })getTokenEmbeddingsforChunks:(struct vector<std::vector<unsigned int>, std::allocator<std::vector<unsigned int>>> { void *x1; void *x2; struct __compressed_pair<std::vector<unsigned int> *, std::allocator<std::vector<unsigned int>>> { void *x_3_1_1; } x3; })arg1 error:(id*)arg2;
- (struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *x1; unsigned int *x2; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *x_3_1_1; } x3; })getTokensOnText:(id)arg1 withBOS:(bool)arg2 withEOS:(bool)arg3 withError:(id*)arg4;
- (id)initWithConfiguration:(id)arg1;
- (bool)loadResources:(id*)arg1;
- (void)runOnInput:(id)arg1 completion:(id /* block */)arg2;
- (void)runOnInputText:(id)arg1 completion:(id /* block */)arg2;
- (void)setAdditionalLayers:(id)arg1;
- (void)setTokenSegments:(id)arg1;
- (id)tokenSegments;

@end
