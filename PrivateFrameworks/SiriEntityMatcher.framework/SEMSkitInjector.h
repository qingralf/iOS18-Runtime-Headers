/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriEntityMatcher.framework/SiriEntityMatcher
 */

@interface SEMSkitInjector : NSObject <SEMSkitAccessProvider, SEMSkitReadAccess> {
    struct vector<std::pair<semskitbridge::SearchGroup, std::vector<std::byte>>, std::allocator<std::pair<semskitbridge::SearchGroup, std::vector<std::byte>>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::pair<semskitbridge::SearchGroup, std::vector<std::byte>> *, std::allocator<std::pair<semskitbridge::SearchGroup, std::vector<std::byte>>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _documents;
    struct Indexer { 
        struct ContextV2 { 
            struct shared_ptr<skit::internal::ContextImpl> { 
                struct ContextImpl {} *__ptr_; 
                struct __shared_weak_count {} *__cntrl_; 
            } pimpl; 
        } context; 
        struct IndexWriter { 
            struct unique_ptr<skit::internal::IndexWriterImpl, std::default_delete<skit::internal::IndexWriterImpl>> { 
                struct __compressed_pair<skit::internal::IndexWriterImpl *, std::default_delete<skit::internal::IndexWriterImpl>> { 
                    struct IndexWriterImpl {} *__value_; 
                } __ptr_; 
            } pimpl; 
        } index_writer; 
        long long index_locale; 
        struct basic_string<char16_t, std::char_traits<char16_t>, std::allocator<char16_t>> { 
            struct __compressed_pair<std::basic_string<char16_t>::__rep, std::allocator<char16_t>> { 
                struct __rep { 
                    union { 
                        struct __short { 
                            unsigned short __data_[11]; 
                            unsigned char __padding_[1]; 
                            unsigned int __size_ : 7; 
                            unsigned int __is_long_ : 1; 
                        } __s; 
                        struct __long { 
                            unsigned short *__data_; 
                            unsigned long long __size_; 
                            unsigned int __cap_ : 63; 
                            unsigned int __is_long_ : 1; 
                        } __l; 
                        struct __raw { 
                            unsigned long long __words[3]; 
                        } __r; 
                    } ; 
                } __value_; 
            } __r_; 
        } index_locale_id; 
        struct shared_ptr<semskitbridge::Tokenizer> { 
            struct Tokenizer {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } tokenizer; 
        struct shared_ptr<semskitbridge::Analyzer> { 
            struct Analyzer {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } analyzer; 
        struct Alias { 
            struct shared_ptr<skit::internal::AliasImpl> { 
                struct AliasImpl {} *__ptr_; 
                struct __shared_weak_count {} *__cntrl_; 
            } pimpl; 
        } alias; 
        struct TrialFactors { 
            bool use_contact_aliases; 
            bool use_contact_emoji_matches; 
            bool use_contact_diacritics_stripping; 
            bool use_contact_prefix_matching; 
            bool use_contact_phonetic_search; 
            bool use_token_lemmatization; 
            int phonetic_search_n_gram_order; 
            bool use_media_threshold_filtering; 
        } trial_factors; 
        unsigned short index_features; 
    }  _indexer;
    struct Searcher { 
        struct ContextV2 { 
            struct shared_ptr<skit::internal::ContextImpl> { 
                struct ContextImpl {} *__ptr_; 
                struct __shared_weak_count {} *__cntrl_; 
            } pimpl; 
        } context; 
        struct IndexReader { 
            struct shared_ptr<skit::internal::IndexReaderImpl> { 
                struct IndexReaderImpl {} *__ptr_; 
                struct __shared_weak_count {} *__cntrl_; 
            } pimpl; 
        } index_reader; 
        struct Alias { 
            struct shared_ptr<skit::internal::AliasImpl> { 
                struct AliasImpl {} *__ptr_; 
                struct __shared_weak_count {} *__cntrl_; 
            } pimpl; 
        } alias; 
    }  _searcher;
    SEMTokenizer * _tokenizer;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_analyzeCascadeEntity:(id)arg1 outSearchGroup:(unsigned short*)arg2 indexTokens:(void*)arg3 builder:(void*)arg4 error:(id*)arg5;
- (bool)_buildDocumentsFromEntities:(id)arg1 error:(id*)arg2;
- (id)accessDescription;
- (id)description;
- (id)indexLocale;
- (id)init;
- (id)initWithTokenizer:(id)arg1 error:(id*)arg2;
- (bool)isEmpty;
- (id)matchSpans:(id)arg1 error:(id*)arg2;
- (void)prewarm;
- (bool)setEntityPool:(id)arg1 error:(id*)arg2;
- (id)skitReadAccessWithIndexSiteType:(unsigned char)arg1;
- (bool)supportsIndexSiteType:(unsigned char)arg1;

@end
