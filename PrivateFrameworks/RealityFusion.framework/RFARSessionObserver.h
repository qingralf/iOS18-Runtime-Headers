/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RealityFusion.framework/RealityFusion
 */

@interface RFARSessionObserver : NSObject <ARInternalSessionObserver> {
    NSObject<OS_dispatch_queue> * _backgroundComputeQueue;
    NSObject<OS_dispatch_group> * _dispatchGroup;
    bool  _pinchLeft;
    bool  _pinchRight;
    bool  isUsingV1;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  m_addAnchorsRequestLock;
    struct queue<__kindof ARAnchor *, std::deque<__kindof ARAnchor *>> { 
        struct deque<__kindof ARAnchor *, std::allocator<__kindof ARAnchor *>> { 
            /* Warning: unhandled struct encoding: '{__split_buffer<__kindof ARAnchor *__strong *, std::allocator<__kindof ARAnchor *__strong *>>="__first_"^^@"__begin_"^^@"__end_"^^@"__end_cap_"{__compressed_pair<__kindof ARAnchor *__strong **, std::allocator<__kindof ARAnchor *__strong *>>="__value_"^^@}}"__start_"Q"__size_"{__compressed_pair<unsigned long, std::allocator<__kindof ARAnchor *>>="__value_"Q}}}' */ struct __split_buffer<__kindof ARAnchor *__strong *, std::allocator<__kindof ARAnchor *__strong *>> { 
                __begin_ ***__first_; 
            } __map_; 
        } c; 
        unsigned long long __start_; 
        struct __compressed_pair<unsigned long, std::allocator<__kindof ARAnchor *>> { 
            unsigned long long __value_; 
        } __size_; 
    }  m_addAnchorsRequestQueue;
    struct function<void (rf::data_flow::provider::InputData &&)>="__f_"{__value_func<void (rf::data_flow::provider::InputData &&)>="__buf_"{type="__lx"[24C] {}  m_callback;
    bool  m_isTrackingAvailable;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *backgroundComputeQueue;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *dispatchGroup;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool pinchLeft;
@property (nonatomic, readonly) bool pinchRight;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)backgroundComputeQueue;
- (void)dealloc;
- (id)dispatchGroup;
- (id)init;
- (bool)pinchLeft;
- (bool)pinchRight;
- (void)processAddedAnchors:(id)arg1;
- (void)processRemovedAnchors:(id)arg1;
- (void)processUpdatedAnchors:(id)arg1;
- (void)processUpdatedExternalAnchors:(id)arg1;
- (void)session:(id)arg1 didAddAnchors:(id)arg2;
- (void)session:(id)arg1 didFailToAddAnchor:(id)arg2 withError:(id)arg3;
- (void)session:(id)arg1 didRemoveAnchors:(id)arg2;
- (void)session:(id)arg1 didUpdateAnchors:(id)arg2;
- (void)session:(id)arg1 didUpdateExternalAnchors:(id)arg2;
- (void)setBackgroundComputeQueue:(id)arg1;
- (void)setCallback:(struct function<void (rf::data_flow::provider::InputData &&)>={__value_func<void (rf::data_flow::provider::InputData &&)>={type=[24C] {})arg1;
- (void)setDispatchGroup:(id)arg1;
- (void)updateSession:(id)arg1 withTime:(double)arg2;

@end
