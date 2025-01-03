/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLModelAssetResourceFactoryInMemoryImpl : NSObject <MLModelAssetResourceFactoryImpl> {
    struct unique_ptr<_MLModelInputArchiver, std::default_delete<_MLModelInputArchiver>> { 
        struct __compressed_pair<_MLModelInputArchiver *, std::default_delete<_MLModelInputArchiver>> { 
            struct _MLModelInputArchiver {} *__value_; 
        } __ptr_; 
    }  _inputArchiver;
}

@property (nonatomic, readonly, copy) NSURL *compiledModelURL;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)compiledModelURL;
- (id)initWithArchiveData:(id)arg1;
- (id)modelAssetDescriptionWithError:(id*)arg1;
- (id)modelStructureWithError:(id*)arg1;
- (id)modelWithConfiguration:(id)arg1 error:(id*)arg2;

@end
