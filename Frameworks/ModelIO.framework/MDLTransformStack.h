/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLTransformStack : NSObject <MDLTransformComponent, NSCopying> {
    NSMutableDictionary * _animatedValues;
    bool  _resetsTransform;
    NSMutableArray * _transformOps;
}

@property (nonatomic, retain) NSMutableDictionary *animatedValues;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *keyTimes;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } matrix;
@property (nonatomic, readonly) double maximumTime;
@property (nonatomic, readonly) double minimumTime;
@property (nonatomic) bool resetsTransform;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CAAnimation *transformAnimation;
@property (nonatomic, copy) NSMutableArray *transformOps;

+ (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })globalTransformWithObject:(id)arg1 atTime:(double)arg2;
+ (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })localTransformWithObject:(id)arg1 atTime:(double)arg2;

- (void).cxx_destruct;
- (id)addMatrixOp:(id)arg1 inverse:(bool)arg2;
- (id)addOrientOp:(id)arg1 inverse:(bool)arg2;
- (id)addRotateOp:(id)arg1 order:(unsigned long long)arg2 inverse:(bool)arg3;
- (id)addRotateXOp:(id)arg1 inverse:(bool)arg2;
- (id)addRotateYOp:(id)arg1 inverse:(bool)arg2;
- (id)addRotateZOp:(id)arg1 inverse:(bool)arg2;
- (id)addScaleOp:(id)arg1 inverse:(bool)arg2;
- (id)addTranslateOp:(id)arg1 inverse:(bool)arg2;
- (id)animatedMatrix4x4WithName:(id)arg1 shouldCreateIfMissing:(bool)arg2;
- (id)animatedQuaternionWithName:(id)arg1 shouldCreateIfMissing:(bool)arg2;
- (id)animatedScalarWithName:(id)arg1 shouldCreateIfMissing:(bool)arg2;
- (id)animatedValueWithName:(id)arg1;
- (id)animatedValues;
- (id)animatedVector3WithName:(id)arg1 shouldCreateIfMissing:(bool)arg2;
- (id)animatedVector4WithName:(id)arg1 shouldCreateIfMissing:(bool)arg2;
- (void)clearTransformStack;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)decomposedTransformAnimation;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })double4x4AtTime:(double)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })float4x4AtTime:(double)arg1;
- (id)init;
- (bool)isScaleRotateTransformOrder;
- (id)keyTimes;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })localTransformAtTime:(double)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })matrix;
- (double)maximumTime;
- (double)minimumTime;
- (bool)resetsTransform;
- (void)setAnimatedValues:(id)arg1;
- (void)setLocalTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setLocalTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 forTime:(double)arg2;
- (void)setMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setResetsTransform:(bool)arg1;
- (void)setTransformOps:(id)arg1;
- (id)transformAnimation;
- (id)transformOps;

@end
