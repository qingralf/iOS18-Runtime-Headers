/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TokenGenerationInference.framework/TokenGenerationInference
 */

@interface TGIE5BaseModelObjC : NSObject {
    TGIE5ANESessionObjC * _aneSession;
    struct shared_ptr<cgm::token_generation_inference::espresso_inference::AJAXE5MLModelBase> { 
        struct AJAXE5MLModelBase {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _baseModel;
    NSObject<OS_os_log> * _log;
    NSURL * _modelURL;
    bool  _useEnergyEfficientMode;
}

@property (retain) TGIE5ANESessionObjC *aneSession;
@property struct shared_ptr<cgm::token_generation_inference::espresso_inference::AJAXE5MLModelBase> { struct AJAXE5MLModelBase {} *x1; struct __shared_weak_count {} *x2; } baseModel;
@property (readonly) NSURL *modelURL;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{unordered_map<std::string' */ struct  sharedConstants; /* unknown property attribute:  std::hash<std::string>>>=f}}} */
@property (readonly) bool useEnergyEfficientMode;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)aneSession;
- (struct shared_ptr<cgm::token_generation_inference::espresso_inference::AJAXE5MLModelBase> { struct AJAXE5MLModelBase {} *x1; struct __shared_weak_count {} *x2; })baseModel;
- (id)initWithModelConfiguration:(id)arg1;
- (bool)load:(id*)arg1;
- (id)modelURL;
- (void)moveToDynamicState;
- (void)moveToFullyLoadedState;
- (void)setAneSession:(id)arg1;
- (void)setBaseModel:(struct shared_ptr<cgm::token_generation_inference::espresso_inference::AJAXE5MLModelBase> { struct AJAXE5MLModelBase {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (struct unordered_map<std::string, std::shared_ptr<E5RT::MemoryObject>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<E5RT::MemoryObject>>>> { struct __hash_table<std::__hash_value_type<std::string, std::shared_ptr<E5RT::MemoryObject>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<E5RT::MemoryObject>>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<E5RT::MemoryObject>>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::shared_ptr<E5RT::MemoryObject>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::MemoryObject>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::MemoryObject>>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::MemoryObject>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::MemoryObject>>, void *> *> *>>> { void **x_1_3_1; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::MemoryObject>>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::MemoryObject>>, void *> *> *>> { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; })sharedConstants;
- (bool)useEnergyEfficientMode;

@end
