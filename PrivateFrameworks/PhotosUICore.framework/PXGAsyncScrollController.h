/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXGAsyncScrollController : NSObject <PXScrollController> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _activeRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentBounds;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    bool  _delegateRespondsToDidScroll;
    bool  _isActive;
    bool  _needsUpdate;
    struct CGSize { 
        double width; 
        double height; 
    }  _presentedContentSize;
    NSObject<OS_dispatch_queue> * _queue;
    struct CGSize { 
        double width; 
        double height; 
    }  _referenceSize;
    bool  _respectsContentZOrder;
    PXScrollInfo * _scrollInfo;
    <PXScrollControllerUpdateDelegate> * _updateDelegate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleRect;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } activeRect;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } constrainedVisibleRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentBounds;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isActive;
@property (nonatomic) struct CGSize { double x1; double x2; } presentedContentSize;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) struct CGSize { double x1; double x2; } referenceSize;
@property (nonatomic) bool respectsContentZOrder;
@property (nonatomic, copy) PXScrollInfo *scrollInfo;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } targetRect;
@property (nonatomic) <PXScrollControllerUpdateDelegate> *updateDelegate;
@property (nonatomic) struct CGPoint { double x1; double x2; } visibleOrigin;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRect;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })activeRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })constrainedVisibleRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBounds;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (void)didScroll;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (bool)isActive;
- (struct CGSize { double x1; double x2; })presentedContentSize;
- (id)queue;
- (struct CGSize { double x1; double x2; })referenceSize;
- (bool)respectsContentZOrder;
- (id)scrollInfo;
- (void)setContentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIsActive:(bool)arg1;
- (void)setNeedsUpdate;
- (void)setPresentedContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRespectsContentZOrder:(bool)arg1;
- (void)setScrollInfo:(id)arg1;
- (void)setUpdateDelegate:(id)arg1;
- (void)setVisibleOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetRect;
- (id)updateDelegate;
- (void)updateIfNeeded;
- (struct CGPoint { double x1; double x2; })visibleOrigin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;

@end