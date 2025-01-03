/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VFX.framework/VFX
 */

@interface VFXRenderOptions : NSObject {
    <MTLCommandBuffer> * _commandBuffer;
    unsigned long long  _coordinateSpace;
    <MTLRasterizationRateMap> * _rasterizationRateMap;
    NSArray * _viewpoints;
    bool  _waitUntilCompleted;
}

@property (nonatomic, retain) <MTLCommandBuffer> *commandBuffer;
@property (nonatomic) unsigned long long coordinateSpace;
@property (nonatomic, retain) <MTLRasterizationRateMap> *rasterizationRateMap;
@property (nonatomic, retain) NSArray *viewpoints;
@property (nonatomic) bool waitUntilCompleted;

- (id)commandBuffer;
- (unsigned long long)coordinateSpace;
- (id)rasterizationRateMap;
- (void)setCommandBuffer:(id)arg1;
- (void)setCoordinateSpace:(unsigned long long)arg1;
- (void)setRasterizationRateMap:(id)arg1;
- (void)setViewpoints:(id)arg1;
- (void)setWaitUntilCompleted:(bool)arg1;
- (id)viewpoints;
- (bool)waitUntilCompleted;

@end
