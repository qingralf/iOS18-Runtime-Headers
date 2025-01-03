/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UnityPoster.framework/UnityPoster
 */

@interface UPQuiltViewPhone : UPQuiltView {
    UIColor * _bottomLeftQuiltColor;
    CAShapeLayer * _bottomLeftQuiltPieceLayer;
    struct CGPath { } * _bottomLeftQuiltPieceTargetPathRef;
    UIColor * _bottomRightQuiltColor;
    CAShapeLayer * _bottomRightQuiltPieceLayer;
    UPQuiltConfigurationPhone * _configuration;
    UIColor * _intersectionPieceColor;
    CAShapeLayer * _intersectionPieceLayer;
    struct CGPath { } * _intersectionPieceTargetPathRef;
    struct CGPath { } * _thirdPieceTargetPathRef;
    UIColor * _topQuiltColor;
    CAShapeLayer * _topQuiltPieceLayer;
    struct CGPath { } * _topQuiltPieceTargetPathRef;
}

@property (nonatomic, retain) UIColor *bottomLeftQuiltColor;
@property (nonatomic, readonly) struct CGPath { }*bottomLeftQuiltPathRef;
@property (nonatomic, retain) CAShapeLayer *bottomLeftQuiltPieceLayer;
@property (nonatomic, retain) UIColor *bottomRightQuiltColor;
@property (nonatomic, retain) CAShapeLayer *bottomRightQuiltPieceLayer;
@property (nonatomic, retain) UPQuiltConfigurationPhone *configuration;
@property (nonatomic, retain) UIColor *intersectionPieceColor;
@property (nonatomic, retain) UIColor *topQuiltColor;
@property (nonatomic, readonly) struct CGPath { }*topQuiltPathRef;
@property (nonatomic, retain) CAShapeLayer *topQuiltPieceLayer;

- (void).cxx_destruct;
- (id)bottomLeftQuiltColor;
- (struct CGPath { }*)bottomLeftQuiltPathRef;
- (id)bottomLeftQuiltPieceLayer;
- (id)bottomRightQuiltColor;
- (id)bottomRightQuiltPieceLayer;
- (id)configuration;
- (void)dealloc;
- (id)description;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)intersectionPieceColor;
- (void)layoutSubviews;
- (void)setBottomLeftQuiltColor:(id)arg1;
- (void)setBottomLeftQuiltPieceLayer:(id)arg1;
- (void)setBottomRightQuiltColor:(id)arg1;
- (void)setBottomRightQuiltPieceLayer:(id)arg1;
- (void)setColors;
- (void)setConfiguration:(id)arg1;
- (void)setIntersectionPieceColor:(id)arg1;
- (void)setTopQuiltColor:(id)arg1;
- (void)setTopQuiltPieceLayer:(id)arg1;
- (id)topQuiltColor;
- (struct CGPath { }*)topQuiltPathRef;
- (id)topQuiltPieceLayer;
- (void)updateQuiltsWithUnlockProgress:(double)arg1 wakeProgress:(double)arg2;

@end
