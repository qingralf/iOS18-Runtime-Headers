/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalPerformanceShadersGraph.framework/MetalPerformanceShadersGraph
 */

@interface MPSGraphExecutableConstantData : MPSGraphObject <NSSecureCoding> {
    NSDictionary * _ioSurfaces;
    NSURL * _mpsgraphPackageURL;
}

@property (retain) NSDictionary *ioSurfaces;
@property (retain) NSURL *mpsgraphPackageURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)extendWithRequest:(id)arg1;
- (id)initForRequest:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)ioSurfaces;
- (void)loadIntoResourceManager:(void*)arg1;
- (void)loadResources:(id)arg1;
- (id)mpsgraphPackageURL;
- (void)setIoSurfaces:(id)arg1;
- (void)setMpsgraphPackageURL:(id)arg1;

@end