/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
 */

@interface USKNodeSubtreeIterator : NSObject <USKIterator> {
    struct iterator { 
        struct Usd_PrimData {} *_underlyingIterator; 
        struct UsdPrimRange {} *_range; 
        struct SdfPath { 
            struct Sdf_PathNodeHandleImpl<pxrInternal__aapl__pxrReserved__::Sdf_Pool<pxrInternal__aapl__pxrReserved__::Sdf_PathPrimTag, 24, 8>::Handle, true, const pxrInternal__aapl__pxrReserved__::Sdf_PathNode> { 
                struct Handle { 
                    unsigned int value; 
                } _poolHandle; 
            } _primPart; 
            struct Sdf_PathNodeHandleImpl<pxrInternal__aapl__pxrReserved__::Sdf_Pool<pxrInternal__aapl__pxrReserved__::Sdf_PathPropTag, 24, 8>::Handle, false, const pxrInternal__aapl__pxrReserved__::Sdf_PathNode> { 
                struct Handle { 
                    unsigned int value; 
                } _poolHandle; 
            } _propPart; 
        } _proxyPrimPath; 
        unsigned int _depth; 
        bool _pruneChildrenFlag; 
        bool _isPost; 
    }  _it;
    struct UsdPrimRange { 
        struct Usd_PrimData {} *_begin; 
        struct Usd_PrimData {} *_end; 
        struct SdfPath { 
            struct Sdf_PathNodeHandleImpl<pxrInternal__aapl__pxrReserved__::Sdf_Pool<pxrInternal__aapl__pxrReserved__::Sdf_PathPrimTag, 24, 8>::Handle, true, const pxrInternal__aapl__pxrReserved__::Sdf_PathNode> { 
                struct Handle { 
                    unsigned int value; 
                } _poolHandle; 
            } _primPart; 
            struct Sdf_PathNodeHandleImpl<pxrInternal__aapl__pxrReserved__::Sdf_Pool<pxrInternal__aapl__pxrReserved__::Sdf_PathPropTag, 24, 8>::Handle, false, const pxrInternal__aapl__pxrReserved__::Sdf_PathNode> { 
                struct Handle { 
                    unsigned int value; 
                } _poolHandle; 
            } _propPart; 
        } _initProxyPrimPath; 
        struct Usd_PrimFlagsPredicate { 
            struct bitset<15UL> { 
                unsigned long long __first_; 
            } _mask; 
            struct bitset<15UL> { 
                unsigned long long __first_; 
            } _values; 
            bool _negate; 
        } _predicate; 
        unsigned int _initDepth; 
        bool _postOrder; 
    }  _range;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithPrim:(const void*)arg1;
- (id)initWithPrim:(const void*)arg1 withPredicate:(struct Usd_PrimFlagsPredicate { struct bitset<15UL> { unsigned long long x_1_1_1; } x1; struct bitset<15UL> { unsigned long long x_2_1_1; } x2; bool x3; })arg2;
- (id)initWithScene:(const void*)arg1;
- (id)initWithScene:(const void*)arg1 withPredicate:(struct Usd_PrimFlagsPredicate { struct bitset<15UL> { unsigned long long x_1_1_1; } x1; struct bitset<15UL> { unsigned long long x_2_1_1; } x2; bool x3; })arg2;
- (id)initWithSubtreeRange:(const void*)arg1;
- (id)nextObject;

@end
