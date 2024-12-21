/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SensitiveContentAnalysisML.framework/SensitiveContentAnalysisML
 */

@interface SCMLImageSanitizer : NSObject {
    unsigned long long  _backends;
    struct vector<std::pair<unsigned long, std::unique_ptr<scml::ClipEmbeddingClassifier>>, std::allocator<std::pair<unsigned long, std::unique_ptr<scml::ClipEmbeddingClassifier>>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::pair<unsigned long, std::unique_ptr<scml::ClipEmbeddingClassifier>> *, std::allocator<std::pair<unsigned long, std::unique_ptr<scml::ClipEmbeddingClassifier>>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _clipEmbeddingClassifiers;
    struct unordered_map<MADUnifiedEmbeddingVersion, std::unique_ptr<scml::ClipImageEncoder>, std::hash<MADUnifiedEmbeddingVersion>, std::equal_to<MADUnifiedEmbeddingVersion>, std::allocator<std::pair<const MADUnifiedEmbeddingVersion, std::unique_ptr<scml::ClipImageEncoder>>>> { 
        struct __hash_table<std::__hash_value_type<MADUnifiedEmbeddingVersion, std::unique_ptr<scml::ClipImageEncoder>>, std::__unordered_map_hasher<MADUnifiedEmbeddingVersion, std::__hash_value_type<MADUnifiedEmbeddingVersion, std::unique_ptr<scml::ClipImageEncoder>>, std::hash<MADUnifiedEmbeddingVersion>, std::equal_to<MADUnifiedEmbeddingVersion>>, std::__unordered_map_equal<MADUnifiedEmbeddingVersion, std::__hash_value_type<MADUnifiedEmbeddingVersion, std::unique_ptr<scml::ClipImageEncoder>>, std::equal_to<MADUnifiedEmbeddingVersion>, std::hash<MADUnifiedEmbeddingVersion>>, std::allocator<std::__hash_value_type<MADUnifiedEmbeddingVersion, std::unique_ptr<scml::ClipImageEncoder>>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MADUnifiedEmbeddingVersion, std::unique_ptr<scml::ClipImageEncoder>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MADUnifiedEmbeddingVersion, std::unique_ptr<scml::ClipImageEncoder>>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MADUnifiedEmbeddingVersion, std::unique_ptr<scml::ClipImageEncoder>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MADUnifiedEmbeddingVersion, std::unique_ptr<scml::ClipImageEncoder>>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MADUnifiedEmbeddingVersion, std::unique_ptr<scml::ClipImageEncoder>>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MADUnifiedEmbeddingVersion, std::unique_ptr<scml::ClipImageEncoder>>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MADUnifiedEmbeddingVersion, std::unique_ptr<scml::ClipImageEncoder>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MADUnifiedEmbeddingVersion, std::unique_ptr<scml::ClipImageEncoder>>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<MADUnifiedEmbeddingVersion, std::unique_ptr<scml::ClipImageEncoder>>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<MADUnifiedEmbeddingVersion, std::__hash_value_type<MADUnifiedEmbeddingVersion, std::unique_ptr<scml::ClipImageEncoder>>, std::hash<MADUnifiedEmbeddingVersion>, std::equal_to<MADUnifiedEmbeddingVersion>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<MADUnifiedEmbeddingVersion, std::__hash_value_type<MADUnifiedEmbeddingVersion, std::unique_ptr<scml::ClipImageEncoder>>, std::equal_to<MADUnifiedEmbeddingVersion>, std::hash<MADUnifiedEmbeddingVersion>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _clipImageEncoders;
    unsigned int  _granularity;
    SCMLHandler * _handler;
    struct unordered_map<std::string, (anonymous namespace)::IVSThresholdInfo, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, (anonymous namespace)::IVSThresholdInfo>>>="__table_"{__hash_table<std::__hash_value_type<std::string, (anonymous namespace)::IVSThresholdInfo>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, (anonymous namespace)::IVSThresholdInfo>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, (anonymous namespace)::IVSThresholdInfo>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, (anonymous namespace)::IVSThresholdInfo>>>="__bucket_list_"{unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, (anonymous namespace)::IVSThresholdInfo>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, (anonymous namespace)::IVSThresholdInfo>, void *> *> *>>>="__ptr_"{__compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, (anonymous namespace)::IVSThresholdInfo>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, (anonymous namespace)::IVSThresholdInfo>, void *> *> *>>>="__value_"^^v"__value_"{__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, (anonymous namespace)::IVSThresholdInfo>, void *> *> *>>="__data_"{__compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, (anonymous namespace)::IVSThresholdInfo>, void *> *> *>>="__value_"Q {}  _ivsThresholds;
    unsigned int  _mode;
    struct unordered_map<std::string, float, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, float>>> { 
        struct __hash_table<std::__hash_value_type<std::string, float>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, float>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, float>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, float>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, float>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, float>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, float>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, float>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, float>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, float>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, float>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, float>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, float>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, float>, std::hash<std::string>, std::equal_to<std::string>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, float>, std::equal_to<std::string>, std::hash<std::string>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _tabooThresholds;
    VNSession * _vnSession;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_sanitizeRequest:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithConfiguration:(id)arg1 error:(id*)arg2;
- (id)sanitizePixelBuffer:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
- (id)sanitizePixelBuffer:(struct __CVBuffer { }*)arg1 keepGoing:(bool)arg2 error:(id*)arg3;
- (id)sanitizeRequest:(id)arg1 error:(id*)arg2;
- (void)updateSanitization:(id)arg1 withAnalysisResult:(id)arg2 forStyle:(unsigned int)arg3 isChildPresent:(bool)arg4;
- (void)updateSanitization:(id)arg1 withObservations:(id)arg2;

@end