/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNUIAvatarLayoutItemConfiguration : NSObject {
    double  _baseSize;
    <CNGroupAvatarLayerLayoutDelegate> * _layoutDelegate;
    double  _size;
    double  _x;
    double  _y;
}

@property (nonatomic) double baseSize;
@property (nonatomic) <CNGroupAvatarLayerLayoutDelegate> *layoutDelegate;
@property (nonatomic) double size;
@property (nonatomic) double x;
@property (nonatomic) double y;

- (void).cxx_destruct;
- (double)baseSize;
- (id)initWithSize:(double)arg1 x:(double)arg2 y:(double)arg3 baseSize:(double)arg4;
- (id)initWithSize:(double)arg1 x:(double)arg2 y:(double)arg3 baseSize:(double)arg4 withLayoutDelegate:(id)arg5;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })itemFrameInContainingBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isRTL:(bool)arg2;
- (id)layoutDelegate;
- (void)setBaseSize:(double)arg1;
- (void)setLayoutDelegate:(id)arg1;
- (void)setSize:(double)arg1;
- (void)setX:(double)arg1;
- (void)setY:(double)arg1;
- (double)size;
- (void)updateLayer:(id)arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 atIndex:(long long)arg3 isRTL:(bool)arg4;
- (double)x;
- (double)y;

@end
