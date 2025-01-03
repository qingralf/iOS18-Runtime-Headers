/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalPerformanceShadersGraph.framework/MetalPerformanceShadersGraph
 */

@interface MPSGraphShapedType : MPSGraphType {
    unsigned int  _dataType;
    NSArray * _shape;
}

@property unsigned int dataType;
@property (copy) NSArray *shape;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dataType;
- (id)debugDescription;
- (id)initWithShape:(id)arg1 dataType:(unsigned int)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualTo:(id)arg1;
- (void)setDataType:(unsigned int)arg1;
- (void)setShape:(id)arg1;
- (id)shape;

@end
