/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHSceneClassification : NSObject <PNSceneClassification> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundingBox;
    long long  _classificationType;
    double  _confidence;
    double  _duration;
    unsigned long long  _extendedSceneIdentifier;
    long long  _packedBoundingBoxRect;
    double  _startTime;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBox;
@property (nonatomic, readonly) long long classificationType;
@property (nonatomic, readonly) double confidence;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) unsigned long long extendedSceneIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long packedBoundingBoxRect;
@property (nonatomic, readonly) unsigned int sceneIdentifier;
@property (nonatomic, readonly) double startTime;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (id)_fetchSceneClassificationsGroupedByAssetLocalIdentifierForAssets:(id)arg1 includeTemporalClassifications:(bool)arg2 sceneClassificationTypePredicate:(id)arg3;
+ (id)fetchSceneClassificationsGroupedByAssetLocalIdentifierForAssets:(id)arg1;
+ (id)fetchSceneClassificationsGroupedByAssetLocalIdentifierForAssets:(id)arg1 includeTemporalClassifications:(bool)arg2;
+ (id)fetchSceneClassificationsGroupedByAssetLocalIdentifierForAssets:(id)arg1 sceneClassificationType:(long long)arg2;
+ (id)fetchSceneClassificationsGroupedByAssetLocalIdentifierForAssets:(id)arg1 sceneClassificationType:(long long)arg2 includeTemporalClassifications:(bool)arg3;

- (bool)_validateStartTime:(double)arg1 duration:(double)arg2 classificationType:(long long)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (long long)classificationType;
- (double)confidence;
- (id)description;
- (id)dictionaryRepresentation;
- (double)duration;
- (unsigned long long)extendedSceneIdentifier;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithExtendedSceneIdentifier:(unsigned long long)arg1 confidence:(double)arg2 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 startTime:(double)arg4 duration:(double)arg5 classificationType:(long long)arg6;
- (id)initWithExtendedSceneIdentifier:(unsigned long long)arg1 confidence:(double)arg2 classificationType:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSceneClassification:(id)arg1;
- (long long)packedBoundingBoxRect;
- (unsigned int)sceneIdentifier;
- (void)setPackedBoundingBoxRect:(long long)arg1;
- (void)setSceneIdentifier:(unsigned int)arg1;
- (double)startTime;

// Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis

+ (short)mad_CSUIdTypeFromType:(long long)arg1;
+ (id)mad_pecTypes;
+ (long long)mad_typeFromCSUIdType:(short)arg1;
+ (id)vcp_instanceWithExtendedSceneIdentifier:(unsigned long long)arg1 confidence:(double)arg2;

@end