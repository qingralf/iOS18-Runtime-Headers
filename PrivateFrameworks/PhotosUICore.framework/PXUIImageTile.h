/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXUIImageTile : NSObject <PXChangeObserver, PXReusableObject, PXUIViewBasicTile> {
    long long  __animationCount;
    struct CGSize { 
        double width; 
        double height; 
    }  __contentSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __contentsRect;
    double  __displayScale;
    PXImageViewSpec * __spec;
    unsigned long long  _animationFlags;
    bool  _drawsFocusRing;
    PXImageRequester * _imageRequester;
    PXImageUIView * _imageView;
    bool  _isPerformingChanges;
    bool  _isPerformingUpdates;
    struct { 
        bool imageView; 
        bool imageRequester; 
        bool image; 
    }  _needsUpdateFlags;
}

@property (setter=_setAnimationCount:, nonatomic) long long _animationCount;
@property (setter=_setContentSize:, nonatomic) struct CGSize { double x1; double x2; } _contentSize;
@property (setter=_setContentsRect:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _contentsRect;
@property (setter=_setDisplayScale:, nonatomic) double _displayScale;
@property (setter=_setSpec:, nonatomic, retain) PXImageViewSpec *_spec;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool drawsFocusRing;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXImageRequester *imageRequester;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (long long)_animationCount;
- (struct CGSize { double x1; double x2; })_contentSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentsRect;
- (double)_displayScale;
- (void)_invalidateImage;
- (void)_invalidateImageRequester;
- (void)_invalidateImageView;
- (bool)_needsUpdate;
- (void)_performChanges:(id /* block */)arg1;
- (void)_setAnimationCount:(long long)arg1;
- (void)_setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setDisplayScale:(double)arg1;
- (void)_setNeedsUpdate;
- (void)_setSpec:(id)arg1;
- (id)_spec;
- (void)_updateIfNeeded;
- (void)_updateImageIfNeeded;
- (void)_updateImageRequesterIfNeeded;
- (void)_updateImageViewIfNeeded;
- (void)becomeReusable;
- (void)didAnimateToGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; })arg1 toUserData:(id)arg2 withOptions:(id)arg3;
- (void)didApplyGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; })arg1 withUserData:(id)arg2;
- (bool)drawsFocusRing;
- (id)imageRequester;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)prepareForReuse;
- (void)setDrawsFocusRing:(bool)arg1;
- (void)setImageRequester:(id)arg1;
- (id)view;
- (void)willAnimateToGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; })arg1 toUserData:(id)arg2 withOptions:(id)arg3;

@end
