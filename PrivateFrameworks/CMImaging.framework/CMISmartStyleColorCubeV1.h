/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMImaging.framework/CMImaging
 */

@interface CMISmartStyleColorCubeV1 : NSObject {
    <MTLTexture> * _backgroundCube;
    <MTLTexture> * _foregroundCube;
    bool  _needsUpdate;
}

@property (nonatomic, readonly) <MTLTexture> *backgroundCube;
@property (nonatomic, readonly) <MTLTexture> *foregroundCube;
@property (nonatomic) bool needsUpdate;

- (void).cxx_destruct;
- (id)backgroundCube;
- (void)dealloc;
- (id)foregroundCube;
- (id)initWithBackgroundCube:(id)arg1 foregroundCube:(id)arg2;
- (bool)needsUpdate;
- (void)setNeedsUpdate:(bool)arg1;

@end