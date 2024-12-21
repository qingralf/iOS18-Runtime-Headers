/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AudioDSPGraph.framework/AudioDSPGraph
 */

@interface CADSPGraphInterpreter : NSObject {
    struct Interpreter { 
        int (**_vptr$Interpreter)(); 
        struct unique_ptr<AudioDSPGraph::Graph, std::default_delete<AudioDSPGraph::Graph>> { 
            struct __compressed_pair<AudioDSPGraph::Graph *, std::default_delete<AudioDSPGraph::Graph>> { 
                struct Graph {} *__value_; 
            } __ptr_; 
        } mGraph; 
        struct NewBoxRegistry { 
            int (**_vptr$Base)(); 
            struct unordered_map<std::string, std::function<AudioDSPGraph::Box *(unsigned int, unsigned int)>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::function<AudioDSPGraph::Box *(unsigned int, unsigned int)>>>>="__table_"{__hash_table<std::__hash_value_type<std::string, std::function<AudioDSPGraph::Box *(unsigned int, unsigned int)>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::function<AudioDSPGraph::Box *(unsigned int, unsigned int)>>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::function<AudioDSPGraph::Box *(unsigned int, unsigned int)>>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::function<AudioDSPGraph::Box *(unsigned int, unsigned int)>>>>="__bucket_list_"{unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::function<AudioDSPGraph::Box *(unsigned int, unsigned int)>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::function<AudioDSPGraph::Box *(unsigned int, unsigned int)>>, void *> *> *>>>="__ptr_"{__compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::function<AudioDSPGraph::Box *(unsigned int, unsigned int)>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::function<AudioDSPGraph::Box *(unsigned int, unsigned int)>>, void *> *> *>>>="__value_"^^v"__value_"{__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::function<AudioDSPGraph::Box *(unsigned int, unsigned int)>>, void *> *> *>>="__data_"{__compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::function<AudioDSPGraph::Box *(unsigned int, unsigned int)>>, void *> *> *>>="__value_"Q {} mNewBoxMap; 
        } mNewBoxRegistry; 
    }  _interpreter;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end