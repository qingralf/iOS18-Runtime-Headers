/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleCVA.framework/AppleCVA
 */

@interface CVABilinearSampler : NSObject {
    <MTLDevice> * _device;
    int  _mode;
    struct { 
        struct { 
            /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
        } transform; 
    }  _perspectiveWarpFragmentData;
    MTLRenderPassDescriptor * _renderPassDescriptor;
    MTLRenderPipelineDescriptor * _renderPipelineDescriptor;
    <MTLRenderPipelineState> * _renderPipelineState;
    struct { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*position; 
    }  _vertexData;
}

- (void).cxx_destruct;
- (id)_initWithDevice:(id)arg1 pipelineLabel:(id)arg2 fragmentFunction:(id)arg3;
- (void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 transform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg3 destinationTexture:(id)arg4 destinationBoundingBox:(const void*)arg5;
- (id)initWithDevice:(id)arg1 mode:(int)arg2;

@end