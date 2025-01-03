/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVMutableCaptionRegion : AVCaptionRegion {
    AVMutableCaptionRegionInternal * _mutableInternal;
}

@property (nonatomic) long long displayAlignment;
@property (nonatomic, copy) AVCaptionPosition *endPosition;
@property (nonatomic, copy) AVCaptionLength *height;
@property (nonatomic) struct AVCaptionPoint { struct AVCaptionDimension { double x_1_1_1; long long x_1_1_2; } x1; struct AVCaptionDimension { double x_2_1_1; long long x_2_1_2; } x2; } origin;
@property (nonatomic, copy) AVCaptionPosition *position;
@property (nonatomic) long long scroll;
@property (nonatomic) struct AVCaptionSize { struct AVCaptionDimension { double x_1_1_1; long long x_1_1_2; } x1; struct AVCaptionDimension { double x_2_1_1; long long x_2_1_2; } x2; } size;
@property (nonatomic) long long writingMode;

- (long long)displayAlignment;
- (id)endPosition;
- (id)height;
- (id)init;
- (id)initWithFigMutableCaptionRegion:(struct OpaqueFigCaptionRegion { }*)arg1;
- (id)initWithIdentifier:(id)arg1;
- (struct AVCaptionPoint { struct AVCaptionDimension { double x_1_1_1; long long x_1_1_2; } x1; struct AVCaptionDimension { double x_2_1_1; long long x_2_1_2; } x2; })origin;
- (id)position;
- (long long)scroll;
- (void)setDisplayAlignment:(long long)arg1;
- (void)setEndPosition:(id)arg1;
- (void)setHeight:(id)arg1;
- (void)setOrigin:(struct AVCaptionPoint { struct AVCaptionDimension { double x_1_1_1; long long x_1_1_2; } x1; struct AVCaptionDimension { double x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (void)setPosition:(id)arg1;
- (void)setScroll:(long long)arg1;
- (void)setSize:(struct AVCaptionSize { struct AVCaptionDimension { double x_1_1_1; long long x_1_1_2; } x1; struct AVCaptionDimension { double x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (void)setWritingMode:(long long)arg1;
- (struct AVCaptionSize { struct AVCaptionDimension { double x_1_1_1; long long x_1_1_2; } x1; struct AVCaptionDimension { double x_2_1_1; long long x_2_1_2; } x2; })size;
- (long long)writingMode;

@end
