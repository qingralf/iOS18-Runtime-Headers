/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLVisualSearchAttributes : PLManagedObject

@property (nonatomic, retain) NSDate *adjustmentVersion;
@property (nonatomic, readonly) short algorithmVersion;
@property (nonatomic, retain) PLMediaAnalysisAssetAttributes *mediaAnalysisAssetAttributes;
@property (nonatomic, readonly) short stickerConfidenceAlgorithmVersion;
@property (nonatomic, readonly) float stickerConfidenceScore;
@property (nonatomic, retain) NSData *visualSearchData;

+ (id)algorithmVersionKey;
+ (id)entityName;
+ (id)stickerConfidenceAlgorithmVersionKey;
+ (id)stickerConfidenceScoreKey;

@end
