/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBSystemApertureDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) bool alwaysRenderSystemApertureFillOnGPU;
@property (nonatomic, readonly) bool alwaysShowSystemApertureInSnapshots;
@property (nonatomic) bool alwaysShowSystemApertureOnClonedDisplays;
@property (nonatomic) bool enableSystemApertureStateCollection;
@property (nonatomic) bool neverRenderSystemApertureFillOnGPU;
@property (nonatomic) bool suppressDynamicIslandCompletely;

- (void)_addStateCaptureHandlers;
- (void)_bindAndRegisterDefaults;

@end
