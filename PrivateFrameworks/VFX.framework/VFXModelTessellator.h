/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VFX.framework/VFX
 */

@interface VFXModelTessellator : NSObject <NSCopying, NSSecureCoding> {
    bool  _adaptive;
    NSMutableSet * _clients;
    float  _edgeTessellationFactor;
    float  _insideTessellationFactor;
    float  _maximumEdgeLength;
    unsigned long long  _partitionMode;
    bool  _screenSpace;
    long long  _smoothingMode;
    float  _tessellationFactorScale;
}

@property (getter=isAdaptive, nonatomic) bool adaptive;
@property (nonatomic) float edgeTessellationFactor;
@property (nonatomic) float insideTessellationFactor;
@property (nonatomic) float maximumEdgeLength;
@property (getter=isScreenSpace, nonatomic) bool screenSpace;
@property (nonatomic) long long smoothingMode;
@property (nonatomic) float tessellationFactorScale;
@property (nonatomic) unsigned long long tessellationPartitionMode;

+ (id)modelTessellator;
+ (bool)supportsSecureCoding;

- (struct { unsigned char x1; float x2; unsigned int x3; unsigned char x4; union { struct { float x_1_2_1; float x_1_2_2; } x_5_1_1; struct { float x_2_2_1; } x_5_1_2; struct { float x_3_2_1; } x_5_1_3; struct { unsigned char x_4_2_1; unsigned int x_4_2_2 : 1; unsigned int x_4_2_3 : 1; } x_5_1_4; } x5; })_tessellatorValueForGeometry:(id)arg1;
- (bool)adaptive;
- (void)addClient:(id)arg1;
- (void)clientWillDie:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (float)edgeTessellationFactor;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (float)insideTessellationFactor;
- (bool)isAdaptive;
- (bool)isScreenSpace;
- (float)maximumEdgeLength;
- (void)removeClient:(id)arg1;
- (bool)screenSpace;
- (void)setAdaptive:(bool)arg1;
- (void)setEdgeTessellationFactor:(float)arg1;
- (void)setInsideTessellationFactor:(float)arg1;
- (void)setMaximumEdgeLength:(float)arg1;
- (void)setScreenSpace:(bool)arg1;
- (void)setSmoothingMode:(long long)arg1;
- (void)setTessellationFactorScale:(float)arg1;
- (void)setTessellationPartitionMode:(unsigned long long)arg1;
- (long long)smoothingMode;
- (float)tessellationFactorScale;
- (unsigned long long)tessellationPartitionMode;
- (void)tessellatorValueDidChange;
- (void)tessellatorValueDidChangeForClient:(id)arg1;

@end
