/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE
 */

@interface VFXRERenderTargetInfoImpl : NSObject <VFXRERenderTargetInfo> {
    const struct RenderTargetInfo { struct RenderPipelineDescriptorData { unsigned int x_1_1_1; int x_1_1_2[8]; int x_1_1_3; int x_1_1_4; } x1; bool x2; unsigned int x3; } * __renderTargetInfo;
}

@property (nonatomic) const struct RenderTargetInfo { struct RenderPipelineDescriptorData { unsigned int x_1_1_1; int x_1_1_2[8]; int x_1_1_3; int x_1_1_4; } x1; bool x2; unsigned int x3; }*_renderTargetInfo;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) unsigned long long depthPixelFormat; /* unknown property attribute: ? */
@property (nonatomic, readonly) unsigned long long depthStencilPixelFormat;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long sampleCount;
@property (nonatomic, readonly) unsigned long long stencilPixelFormat; /* unknown property attribute: ? */
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool vrrEnabled;

- (const struct RenderTargetInfo { struct RenderPipelineDescriptorData { unsigned int x_1_1_1; int x_1_1_2[8]; int x_1_1_3; int x_1_1_4; } x1; bool x2; unsigned int x3; }*)_renderTargetInfo;
- (unsigned long long)colorPixelFormatAtIndex:(long long)arg1;
- (unsigned long long)depthPixelFormat;
- (unsigned long long)depthStencilPixelFormat;
- (long long)sampleCount;
- (void)set_renderTargetInfo:(const struct RenderTargetInfo { struct RenderPipelineDescriptorData { unsigned int x_1_1_1; int x_1_1_2[8]; int x_1_1_3; int x_1_1_4; } x1; bool x2; unsigned int x3; }*)arg1;
- (unsigned long long)stencilPixelFormat;
- (bool)vrrEnabled;

@end
