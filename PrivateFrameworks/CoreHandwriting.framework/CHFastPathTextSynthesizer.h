/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHFastPathTextSynthesizer : NSObject <CHSynthesizingText> {
    struct CHFastPathCharacterInventory { 
        struct vector<std::shared_ptr<CoreHandwriting::synthesis::fast_path::CHAbstractFastPathCharacterHolder>, std::allocator<std::shared_ptr<CoreHandwriting::synthesis::fast_path::CHAbstractFastPathCharacterHolder>>> { 
            void *__begin_; 
            void *__end_; 
            struct __compressed_pair<std::shared_ptr<CoreHandwriting::synthesis::fast_path::CHAbstractFastPathCharacterHolder> *, std::allocator<std::shared_ptr<CoreHandwriting::synthesis::fast_path::CHAbstractFastPathCharacterHolder>>> { 
                void *__value_; 
            } __end_cap_; 
        } _holders; 
        struct vector<std::shared_ptr<CoreHandwriting::synthesis::fast_path::CHAbstractFastPathCharacterInventoryExtension>, std::allocator<std::shared_ptr<CoreHandwriting::synthesis::fast_path::CHAbstractFastPathCharacterInventoryExtension>>> { 
            void *__begin_; 
            void *__end_; 
            struct __compressed_pair<std::shared_ptr<CoreHandwriting::synthesis::fast_path::CHAbstractFastPathCharacterInventoryExtension> *, std::allocator<std::shared_ptr<CoreHandwriting::synthesis::fast_path::CHAbstractFastPathCharacterInventoryExtension>>> { 
                void *__value_; 
            } __end_cap_; 
        } _extensions; 
    }  _inventory;
    struct unique_ptr<CoreHandwriting::synthesis::fast_path::CHAbstractFastPathStitchingStrategy, std::default_delete<CoreHandwriting::synthesis::fast_path::CHAbstractFastPathStitchingStrategy>> { 
        struct __compressed_pair<CoreHandwriting::synthesis::fast_path::CHAbstractFastPathStitchingStrategy *, std::default_delete<CoreHandwriting::synthesis::fast_path::CHAbstractFastPathStitchingStrategy>> { 
            struct CHAbstractFastPathStitchingStrategy {} *__value_; 
        } __ptr_; 
    }  _stitchingStrategy;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)generateDrawingForText:(id)arg1 options:(id)arg2;
- (id)initWithStyleInventory:(id)arg1;
- (id)refineDrawing:(id)arg1 transcription:(id)arg2 options:(id)arg3 shouldCancel:(id /* block */)arg4 error:(id*)arg5;
- (id)replaceDrawing:(id)arg1 originalTranscription:(id)arg2 replacementTranscription:(id)arg3 options:(id)arg4 shouldCancel:(id /* block */)arg5 error:(id*)arg6;
- (bool)shouldUsePersonalization;
- (id)supportedCharacterIndexesForString:(id)arg1 options:(id)arg2;
- (id)supportedCharacters;
- (id)synthesizeDrawingForString:(id)arg1 options:(id)arg2 shouldCancel:(id /* block */)arg3 error:(id*)arg4;

@end