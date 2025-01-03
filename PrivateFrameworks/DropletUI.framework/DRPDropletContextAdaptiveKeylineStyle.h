/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DropletUI.framework/DropletUI
 */

@interface DRPDropletContextAdaptiveKeylineStyle : NSObject <DRPDropletContextKeylineStyle> {
    void adaptiveColorMatrix;
    void innerWidth;
    void keylineFadeLengths;
    void keylineOutsets;
    void normalizedStartLocation;
    void normalizedStopLocation;
    void outerWidth;
}

@property (nonatomic) struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; } adaptiveColorMatrix;
@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic) double innerWidth;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } keylineFadeLengths;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } keylineOutsets;
@property (nonatomic) double normalizedStartLocation;
@property (nonatomic) double normalizedStopLocation;
@property (nonatomic) double outerWidth;
@property (nonatomic) double width;

- (struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; })adaptiveColorMatrix;
- (id)copy;
- (id)debugDescription;
- (id)description;
- (id)init;
- (id)initWithInnerWidth:(double)arg1 outerWidth:(double)arg2 keylineOutsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3 keylineFadeLengths:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg4 adaptiveColorMatrix:(struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; })arg5;
- (id)initWithInnerWidth:(double)arg1 outerWidth:(double)arg2 keylineOutsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3 keylineFadeLengths:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg4 normalizedStartLocation:(double)arg5 normalizedStopLocation:(double)arg6 adaptiveColorMatrix:(struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; })arg7;
- (id)initWithWidth:(double)arg1 boundaryFadeLength:(double)arg2 adaptiveColorMatrix:(struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; })arg3;
- (double)innerWidth;
- (bool)isEqual:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })keylineFadeLengths;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })keylineOutsets;
- (double)normalizedStartLocation;
- (double)normalizedStopLocation;
- (double)outerWidth;
- (void)setAdaptiveColorMatrix:(struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; })arg1;
- (void)setInnerWidth:(double)arg1;
- (void)setKeylineFadeLengths:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setKeylineOutsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setNormalizedStartLocation:(double)arg1;
- (void)setNormalizedStopLocation:(double)arg1;
- (void)setOuterWidth:(double)arg1;
- (void)setWidth:(double)arg1;
- (double)width;

@end
