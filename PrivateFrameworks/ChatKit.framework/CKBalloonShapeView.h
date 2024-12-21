/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKBalloonShapeView : UIView {
    void configuration;
    void descriptor;
    void drawingMode;
    void imageGenerator;
}

@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } alignmentRectInsets;
@property (nonatomic) struct CKBalloonDescriptor_t { BOOL x1; BOOL x2; BOOL x3; BOOL x4; unsigned long long x5; BOOL x6; struct CKColor_t { double x_7_1_1; double x_7_1_2; double x_7_1_3; double x_7_1_4; } x7; long long x8; long long x9; bool x10; bool x11; bool x12; bool x13; } descriptor;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;

- (void).cxx_destruct;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (struct CKBalloonDescriptor_t { BOOL x1; BOOL x2; BOOL x3; BOOL x4; unsigned long long x5; BOOL x6; struct CKColor_t { double x_7_1_1; double x_7_1_2; double x_7_1_3; double x_7_1_4; } x7; long long x8; long long x9; bool x10; bool x11; bool x12; bool x13; })descriptor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)initWithCoder:(id)arg1;
- (id)initWithDescriptor:(struct CKBalloonDescriptor_t { BOOL x1; BOOL x2; BOOL x3; BOOL x4; unsigned long long x5; BOOL x6; struct CKColor_t { double x_7_1_1; double x_7_1_2; double x_7_1_3; double x_7_1_4; } x7; long long x8; long long x9; bool x10; bool x11; bool x12; bool x13; })arg1 imageGenerator:(id /* block */)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)layoutSubviews;
- (void)setDescriptor:(struct CKBalloonDescriptor_t { BOOL x1; BOOL x2; BOOL x3; BOOL x4; unsigned long long x5; BOOL x6; struct CKColor_t { double x_7_1_1; double x_7_1_2; double x_7_1_3; double x_7_1_4; } x7; long long x8; long long x9; bool x10; bool x11; bool x12; bool x13; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end