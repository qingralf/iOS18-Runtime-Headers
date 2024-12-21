/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface OverlayLayerDataSourceRenderTargetSizeObserver : NSObject <MDRenderTargetSizeObserver> {
    struct read_write_lock { 
        struct _opaque_pthread_rwlock_t { 
            long long __sig; 
            BOOL __opaque[192]; 
        } _lock; 
    }  _mtx;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })size;
- (void)sizeDidChange:(struct CGSize { double x1; double x2; })arg1;

@end