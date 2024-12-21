/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGWallpaperLibraryAnalysisSummary : NSObject {
    bool  _libraryIsEmpty;
    bool  _libraryIsProcessedEnough;
    double  _ratioOfAssetsAtOrAboveFaceAnalysisVersion;
    double  _ratioOfAssetsAtOrAboveSceneAnalysisVersion;
}

@property (nonatomic, readonly) bool libraryIsEmpty;
@property (nonatomic, readonly) bool libraryIsProcessedEnough;
@property (nonatomic, readonly) double ratioOfAssetsAtOrAboveFaceAnalysisVersion;
@property (nonatomic, readonly) double ratioOfAssetsAtOrAboveSceneAnalysisVersion;

- (id)initWithPhotoLibrary:(id)arg1;
- (bool)libraryIsEmpty;
- (bool)libraryIsProcessedEnough;
- (double)ratioOfAssetsAtOrAboveFaceAnalysisVersion;
- (double)ratioOfAssetsAtOrAboveSceneAnalysisVersion;

@end