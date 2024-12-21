/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VFX.framework/VFX
 */

@interface CFXVFXRenderTargetInfo : NSObject <VFXRenderTargetInfo> {
    void __renderTargetSize;
    MTLRenderPassDescriptor * _descriptor;
}

@property (nonatomic) void _renderTargetSize;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) unsigned long long depthPixelFormat; /* unknown property attribute: ? */
@property (nonatomic, readonly) unsigned long long depthStencilPixelFormat;
@property (readonly, copy) NSString *description;
@property (nonatomic) MTLRenderPassDescriptor *descriptor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long sampleCount;
@property (nonatomic, readonly) unsigned long long stencilPixelFormat; /* unknown property attribute: ? */
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool vrrEnabled;

- (void)_renderTargetSize;
- (unsigned long long)colorPixelFormatAtIndex:(long long)arg1;
- (unsigned long long)depthStencilPixelFormat;
- (id)descriptor;
- (id)init;
- (void)renderTargetSize;
- (long long)sampleCount;
- (void)setDescriptor:(id)arg1;
- (void)set_renderTargetSize;
- (bool)vrrEnabled;

@end