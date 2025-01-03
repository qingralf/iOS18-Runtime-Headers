/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PISemanticStyleRenderer : NSObject {
    FigMetalContext * _ctx;
    <MTLCommandQueue> * _metalCommandQueue;
    int  _processingType;
    CMISmartStyleMetalRendererV1 * _processor;
    unsigned long long  _sid;
    bool  _useStyleEngine;
}

@property (nonatomic, readonly) <MTLCommandQueue> *metalCommandQueue;
@property (nonatomic, readonly) int processingType;
@property (nonatomic, readonly) CMISmartStyleMetalRendererV1 *processor;
@property (nonatomic, readonly) bool useStyleEngine;

+ (bool)usingSharedSemanticStyleRendererWithMetalCommandQueue:(id)arg1 processingType:(int)arg2 useStyleEngine:(bool)arg3 perform:(id /* block */)arg4;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithMetalCommandQueue:(id)arg1 processingType:(int)arg2 useStyleEngine:(bool)arg3;
- (bool)matchesMetalCommandQueue:(id)arg1 processingType:(int)arg2 useStyleEngine:(bool)arg3;
- (id)metalCommandQueue;
- (bool)prepareProcessor;
- (int)processingType;
- (id)processor;
- (bool)useStyleEngine;

@end
