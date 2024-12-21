/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHRecognitionSessionTask : NSObject {
    NSObject<OS_dispatch_queue> * __recognizersQueue;
    bool  _allowContributionToStyle;
    NSDictionary * _cachedRecognitionResultsFromPostProcessing;
    <CHCalculateDocumentProvider> * _calculateDocumentProvider;
    bool  _cancelled;
    <CHRecognitionSessionTaskDelegate> * _delegate;
    bool  _disableMathTextSwapping;
    NSSet * _forceRecognitionStrokeGroupIdentifiers;
    CHRecognitionSessionResult * _inputResult;
    NSMutableSet * _intermediateDeclaredVariables;
    bool  _isHighResponsivenessTask;
    bool  _leverageAllProvidedVariables;
    CHRecognitionSessionResult * _outputResult;
    id /* block */  _partialResultBlock;
    NSArray * _preferredLocales;
    long long  _principalLineRequirement;
    long long  _recognitionEnvironment;
    NSArray * _recognitionLocales;
    NSDictionary * _recognitionOptions;
    bool  _saveInputDrawings;
    long long  _sessionMode;
    long long  _status;
    CHStrokeClassificationModel * _strokeClassificationModel;
    CHGroupingModel * _strokeGroupingModel;
    bool  _strokeGroupingOnly;
    long long  _strokeGroupingRequirement;
    <CHStrokeProvider> * _strokeProvider;
    CHStrokeClassificationResult * _subjectStrokeClassificationResult;
    NSArray * _subjectStrokeIdentifiers;
    struct SymbolTokenPropertiesHelper { 
        struct unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { 
            struct __hash_table<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { 
                struct unique_ptr<std::__hash_node_base<std::__hash_node<std::string, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> { 
                    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> { 
                        void **__value_; 
                        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> { 
                            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> { 
                                unsigned long long __value_; 
                            } __data_; 
                        } __value_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *>, std::allocator<std::__hash_node<std::string, void *>>> { 
                    struct __hash_node_base<std::__hash_node<std::string, void *> *> { 
                        void *__next_; 
                    } __value_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::hash<std::string>> { 
                    unsigned long long __value_; 
                } __p2_; 
                struct __compressed_pair<float, std::equal_to<std::string>> { 
                    float __value_; 
                } __p3_; 
            } __table_; 
        } structuralSymbols; 
        struct unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { 
            struct __hash_table<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { 
                struct unique_ptr<std::__hash_node_base<std::__hash_node<std::string, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> { 
                    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> { 
                        void **__value_; 
                        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> { 
                            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> { 
                                unsigned long long __value_; 
                            } __data_; 
                        } __value_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *>, std::allocator<std::__hash_node<std::string, void *>>> { 
                    struct __hash_node_base<std::__hash_node<std::string, void *> *> { 
                        void *__next_; 
                    } __value_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::hash<std::string>> { 
                    unsigned long long __value_; 
                } __p2_; 
                struct __compressed_pair<float, std::equal_to<std::string>> { 
                    float __value_; 
                } __p3_; 
            } __table_; 
        } digitSymbols; 
        struct unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { 
            struct __hash_table<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { 
                struct unique_ptr<std::__hash_node_base<std::__hash_node<std::string, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> { 
                    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> { 
                        void **__value_; 
                        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> { 
                            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> { 
                                unsigned long long __value_; 
                            } __data_; 
                        } __value_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *>, std::allocator<std::__hash_node<std::string, void *>>> { 
                    struct __hash_node_base<std::__hash_node<std::string, void *> *> { 
                        void *__next_; 
                    } __value_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::hash<std::string>> { 
                    unsigned long long __value_; 
                } __p2_; 
                struct __compressed_pair<float, std::equal_to<std::string>> { 
                    float __value_; 
                } __p3_; 
            } __table_; 
        } separatorSymbols; 
        struct unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { 
            struct __hash_table<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { 
                struct unique_ptr<std::__hash_node_base<std::__hash_node<std::string, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> { 
                    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> { 
                        void **__value_; 
                        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> { 
                            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> { 
                                unsigned long long __value_; 
                            } __data_; 
                        } __value_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *>, std::allocator<std::__hash_node<std::string, void *>>> { 
                    struct __hash_node_base<std::__hash_node<std::string, void *> *> { 
                        void *__next_; 
                    } __value_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::hash<std::string>> { 
                    unsigned long long __value_; 
                } __p2_; 
                struct __compressed_pair<float, std::equal_to<std::string>> { 
                    float __value_; 
                } __p3_; 
            } __table_; 
        } operatorSymbols; 
        struct unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { 
            struct __hash_table<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { 
                struct unique_ptr<std::__hash_node_base<std::__hash_node<std::string, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> { 
                    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> { 
                        void **__value_; 
                        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> { 
                            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> { 
                                unsigned long long __value_; 
                            } __data_; 
                        } __value_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *>, std::allocator<std::__hash_node<std::string, void *>>> { 
                    struct __hash_node_base<std::__hash_node<std::string, void *> *> { 
                        void *__next_; 
                    } __value_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::hash<std::string>> { 
                    unsigned long long __value_; 
                } __p2_; 
                struct __compressed_pair<float, std::equal_to<std::string>> { 
                    float __value_; 
                } __p3_; 
            } __table_; 
        } currencySymbols; 
        struct unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { 
            struct __hash_table<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { 
                struct unique_ptr<std::__hash_node_base<std::__hash_node<std::string, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> { 
                    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> { 
                        void **__value_; 
                        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> { 
                            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> { 
                                unsigned long long __value_; 
                            } __data_; 
                        } __value_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *>, std::allocator<std::__hash_node<std::string, void *>>> { 
                    struct __hash_node_base<std::__hash_node<std::string, void *> *> { 
                        void *__next_; 
                    } __value_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::hash<std::string>> { 
                    unsigned long long __value_; 
                } __p2_; 
                struct __compressed_pair<float, std::equal_to<std::string>> { 
                    float __value_; 
                } __p3_; 
            } __table_; 
        } exponentSymbols; 
        struct unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { 
            struct __hash_table<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { 
                struct unique_ptr<std::__hash_node_base<std::__hash_node<std::string, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> { 
                    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> { 
                        void **__value_; 
                        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> { 
                            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> { 
                                unsigned long long __value_; 
                            } __data_; 
                        } __value_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *>, std::allocator<std::__hash_node<std::string, void *>>> { 
                    struct __hash_node_base<std::__hash_node<std::string, void *> *> { 
                        void *__next_; 
                    } __value_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::hash<std::string>> { 
                    unsigned long long __value_; 
                } __p2_; 
                struct __compressed_pair<float, std::equal_to<std::string>> { 
                    float __value_; 
                } __p3_; 
            } __table_; 
        } constantSymbols; 
        struct unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { 
            struct __hash_table<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { 
                struct unique_ptr<std::__hash_node_base<std::__hash_node<std::string, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> { 
                    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> { 
                        void **__value_; 
                        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> { 
                            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> { 
                                unsigned long long __value_; 
                            } __data_; 
                        } __value_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *>, std::allocator<std::__hash_node<std::string, void *>>> { 
                    struct __hash_node_base<std::__hash_node<std::string, void *> *> { 
                        void *__next_; 
                    } __value_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::hash<std::string>> { 
                    unsigned long long __value_; 
                } __p2_; 
                struct __compressed_pair<float, std::equal_to<std::string>> { 
                    float __value_; 
                } __p3_; 
            } __table_; 
        } openeingBracketSymbols; 
        struct unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { 
            struct __hash_table<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { 
                struct unique_ptr<std::__hash_node_base<std::__hash_node<std::string, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> { 
                    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> { 
                        void **__value_; 
                        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> { 
                            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> { 
                                unsigned long long __value_; 
                            } __data_; 
                        } __value_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *>, std::allocator<std::__hash_node<std::string, void *>>> { 
                    struct __hash_node_base<std::__hash_node<std::string, void *> *> { 
                        void *__next_; 
                    } __value_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::hash<std::string>> { 
                    unsigned long long __value_; 
                } __p2_; 
                struct __compressed_pair<float, std::equal_to<std::string>> { 
                    float __value_; 
                } __p3_; 
            } __table_; 
        } closingBracketSymbols; 
        struct unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { 
            struct __hash_table<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { 
                struct unique_ptr<std::__hash_node_base<std::__hash_node<std::string, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> { 
                    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> { 
                        void **__value_; 
                        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> { 
                            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> { 
                                unsigned long long __value_; 
                            } __data_; 
                        } __value_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *>, std::allocator<std::__hash_node<std::string, void *>>> { 
                    struct __hash_node_base<std::__hash_node<std::string, void *> *> { 
                        void *__next_; 
                    } __value_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::hash<std::string>> { 
                    unsigned long long __value_; 
                } __p2_; 
                struct __compressed_pair<float, std::equal_to<std::string>> { 
                    float __value_; 
                } __p3_; 
            } __table_; 
        } functionCallSymbols; 
        struct unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { 
            struct __hash_table<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { 
                struct unique_ptr<std::__hash_node_base<std::__hash_node<std::string, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> { 
                    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> { 
                        void **__value_; 
                        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> { 
                            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> { 
                                unsigned long long __value_; 
                            } __data_; 
                        } __value_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *>, std::allocator<std::__hash_node<std::string, void *>>> { 
                    struct __hash_node_base<std::__hash_node<std::string, void *> *> { 
                        void *__next_; 
                    } __value_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::hash<std::string>> { 
                    unsigned long long __value_; 
                } __p2_; 
                struct __compressed_pair<float, std::equal_to<std::string>> { 
                    float __value_; 
                } __p3_; 
            } __table_; 
        } spaceSymbols; 
        struct unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { 
            struct __hash_table<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { 
                struct unique_ptr<std::__hash_node_base<std::__hash_node<std::string, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> { 
                    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> { 
                        void **__value_; 
                        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> { 
                            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> { 
                                unsigned long long __value_; 
                            } __data_; 
                        } __value_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *>, std::allocator<std::__hash_node<std::string, void *>>> { 
                    struct __hash_node_base<std::__hash_node<std::string, void *> *> { 
                        void *__next_; 
                    } __value_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::hash<std::string>> { 
                    unsigned long long __value_; 
                } __p2_; 
                struct __compressed_pair<float, std::equal_to<std::string>> { 
                    float __value_; 
                } __p3_; 
            } __table_; 
        } lineBreakSymbols; 
    }  _tokenPropertiesHelper;
    CalculateUnitsTrie * _unitsTrie;
    bool  _wantsAutoRefine;
}

@property (nonatomic, readonly) <CHCalculateDocumentProvider> *calculateDocumentProvider;
@property (readonly) bool cancelled;
@property (nonatomic) <CHRecognitionSessionTaskDelegate> *delegate;
@property (nonatomic) bool disableMathTextSwapping;
@property (nonatomic, copy) NSSet *forceRecognitionStrokeGroupIdentifiers;
@property (nonatomic, readonly) CHRecognitionSessionResult *inputResult;
@property (nonatomic, readonly) bool isHighResponsivenessTask;
@property (nonatomic, readonly) bool isNonRecognitionTask;
@property (nonatomic) bool leverageAllProvidedVariables;
@property (nonatomic, readonly) CHRecognitionSessionResult *outputResult;
@property (nonatomic, readonly, copy) NSArray *preferredLocales;
@property (nonatomic, readonly) long long principalLineRequirement;
@property (nonatomic, readonly) long long recognitionEnvironment;
@property (nonatomic, readonly, copy) NSArray *recognitionLocales;
@property (nonatomic, readonly) NSDictionary *recognitionOptions;
@property (nonatomic) bool saveInputDrawings;
@property (nonatomic, readonly) long long sessionMode;
@property (nonatomic, readonly) long long status;
@property (nonatomic) bool strokeGroupingOnly;
@property (nonatomic, readonly) long long strokeGroupingRequirement;
@property (nonatomic, readonly) <CHStrokeProvider> *strokeProvider;

+ (bool)isGroupAcceptableForInventory:(id)arg1 textSynthesizer:(id)arg2 strokeProvider:(id)arg3 recognitionResult:(id)arg4 strokeClassificationResult:(id)arg5 allowSyntheticStrokes:(bool)arg6;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)calculateDocumentProvider;
- (void)cancel;
- (bool)cancelled;
- (id)clutterFilter;
- (id)delegate;
- (bool)disableMathTextSwapping;
- (id)forceRecognitionStrokeGroupIdentifiers;
- (id)init;
- (id)initWithSessionMode:(long long)arg1 locales:(id)arg2 preferredLocales:(id)arg3 strokeProvider:(id)arg4 calculateDocumentProvider:(id)arg5 inputResult:(id)arg6 recognitionQOSClass:(unsigned int)arg7 recognitionEnvironment:(long long)arg8 isHighResponsivenessTask:(bool)arg9 strokeClassificationModel:(id)arg10 strokeGroupingModel:(id)arg11 strokeGroupingRequirement:(long long)arg12 principalLineRequirement:(long long)arg13 subjectStrokeIdentifiers:(id)arg14 subjectStrokeClassificationResult:(id)arg15 recognitionOptions:(id)arg16 partialResultBlock:(id /* block */)arg17 wantsAutoRefine:(bool)arg18;
- (id)inputResult;
- (bool)isHighResponsivenessTask;
- (bool)isNonRecognitionTask;
- (bool)leverageAllProvidedVariables;
- (void)main;
- (id)newGroupingManager;
- (id)newGroupingPostProcessingManagerWithGroupingManager:(id)arg1;
- (id)newStrokeClassifier;
- (id)outputResult;
- (id)preferredLocales;
- (long long)principalLineRequirement;
- (long long)recognitionEnvironment;
- (id)recognitionLocales;
- (id)recognitionOptions;
- (id)recognitionResultsForGroupingResult:(id)arg1 groupingManager:(id)arg2 strokeGroupsToProcess:(id)arg3 strokeClassificationResult:(id)arg4 strokeGroupReplacements:(id*)arg5;
- (bool)saveInputDrawings;
- (long long)sessionMode;
- (void)setDelegate:(id)arg1;
- (void)setDisableMathTextSwapping:(bool)arg1;
- (void)setForceRecognitionStrokeGroupIdentifiers:(id)arg1;
- (void)setLeverageAllProvidedVariables:(bool)arg1;
- (void)setSaveInputDrawings:(bool)arg1;
- (void)setStrokeGroupingOnly:(bool)arg1;
- (bool)shouldCancelTaskGivenNewTask:(id)arg1;
- (long long)status;
- (bool)strokeGroupingOnly;
- (long long)strokeGroupingRequirement;
- (id)strokeProvider;
- (id)textCorrectionResultsForGroupingResult:(id)arg1 groupingManager:(id)arg2;

@end