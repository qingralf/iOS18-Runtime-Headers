/* Generated by RuntimeBrowser.
 */

@protocol _SCNSceneRendererMainPassCustomPostProcessHelper <NSObject>

@required

- (<MTLCommandBuffer> *)commandBuffer;
- (<MTLTexture> *)destinationTexture;
- (void)drawSceneBackgroundUsingEncoder:(id <MTLRenderCommandEncoder>)arg1 commandBuffer:(id <MTLCommandBuffer>)arg2 renderPassDescriptor:(MTLRenderPassDescriptor *)arg3;
- (<MTLTexture> *)mainPassColorTextureAtIndex:(unsigned long long)arg1;
- (<MTLRenderCommandEncoder> *)renderCommandEncoder;

@end
