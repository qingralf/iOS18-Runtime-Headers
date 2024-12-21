/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIMutableTextSelectionRect : UITextSelectionRect {
    UITextSelectionRectCustomHandleInfo * __customHandleInfo;
    bool  __drawsOwnHighlight;
    UIBezierPath * __path;
    bool  _containsEnd;
    bool  _containsStart;
    bool  _isVertical;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rect;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
    long long  _writingDirection;
}

@property (nonatomic, retain) UITextSelectionRectCustomHandleInfo *_customHandleInfo;
@property (setter=_setDrawsOwnHighlight:, nonatomic) bool _drawsOwnHighlight;
@property (nonatomic, retain) UIBezierPath *_path;
@property (nonatomic) bool containsEnd;
@property (nonatomic) bool containsStart;
@property (nonatomic) bool isVertical;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;
@property (nonatomic) long long writingDirection;

+ (id)selectionRectWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromView:(id)arg2;

- (void).cxx_destruct;
- (id)_customHandleInfo;
- (bool)_drawsOwnHighlight;
- (id)_path;
- (void)_setDrawsOwnHighlight:(bool)arg1;
- (bool)_ui_isKindOfTextSelectionRect;
- (bool)containsEnd;
- (bool)containsStart;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isVertical;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rect;
- (void)setContainsEnd:(bool)arg1;
- (void)setContainsStart:(bool)arg1;
- (void)setIsVertical:(bool)arg1;
- (void)setRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromView:(id)arg2;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setWritingDirection:(long long)arg1;
- (void)set_customHandleInfo:(id)arg1;
- (void)set_path:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (long long)writingDirection;

@end