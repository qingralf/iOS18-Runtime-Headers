/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
 */

@interface USKPropertyIterator : NSObject <USKIterator> {
    struct __wrap_iter<pxrInternal__aapl__pxrReserved__::UsdProperty *> { 
        struct UsdProperty {} *__i_; 
    }  _it;
    struct vector<pxrInternal__aapl__pxrReserved__::UsdProperty, std::allocator<pxrInternal__aapl__pxrReserved__::UsdProperty>> { 
        struct UsdProperty {} *__begin_; 
        struct UsdProperty {} *__end_; 
        struct __compressed_pair<pxrInternal__aapl__pxrReserved__::UsdProperty *, std::allocator<pxrInternal__aapl__pxrReserved__::UsdProperty>> { 
            struct UsdProperty {} *__value_; 
        } __end_cap_; 
    }  _properties;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithProperties:(const void*)arg1;
- (id)nextObject;

@end
