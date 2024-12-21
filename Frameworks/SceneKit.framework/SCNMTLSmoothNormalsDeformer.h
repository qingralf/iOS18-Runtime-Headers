/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNMTLSmoothNormalsDeformer : NSObject <SCNMTLDeformer> {
    unsigned int  _baseVertexCount;
    unsigned long long  _currentFrameHash;
    <MTLBuffer> * _perVertexTrianglesIndices;
    <MTLBuffer> * _perVertexTrianglesOffsets;
    SCNMTLComputePipeline * _smoothNormalsPipeline;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned long long)requiredInputs;
+ (unsigned long long)requiredOutputs;
+ (unsigned long long)supportedOutputs;

- (void)dealloc;
- (unsigned long long)updateWithComputeContext:(id)arg1 buffers:(const struct { id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; }*)arg2;

@end