/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPersistedPersonFaceMetadata : NSObject <NSSecureCoding, PLDetectionAdditionalDescription, PLFaceRebuildDescription> {
    NSString * _assetCloudGUID;
    NSString * _assetUUID;
    double  _bodyCenterX;
    double  _bodyCenterY;
    double  _bodyHeight;
    double  _bodyWidth;
    double  _centerX;
    double  _centerY;
    int  _cloudNameSource;
    bool  _clusterRejected;
    NSNumber * _detectionType;
    int  _faceAlgorithmVersion;
    bool  _hidden;
    bool  _isHidden;
    bool  _manual;
    int  _nameSource;
    bool  _representative;
    double  _size;
}

@property (nonatomic, copy) NSString *assetCloudGUID;
@property (nonatomic, copy) NSString *assetUUID;
@property (nonatomic) double bodyCenterX;
@property (nonatomic) double bodyCenterY;
@property (nonatomic) double bodyHeight;
@property (nonatomic) double bodyWidth;
@property (nonatomic) double centerX;
@property (nonatomic) double centerY;
@property (nonatomic) int cloudNameSource;
@property (getter=isClusterRejected, nonatomic) bool clusterRejected;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) NSNumber *detectionType;
@property (nonatomic) int faceAlgorithmVersion;
@property (readonly) unsigned long long hash;
@property (getter=isHidden, nonatomic) bool hidden;
@property (getter=isHidden, nonatomic, readonly) bool isHidden;
@property (getter=isManual, nonatomic) bool manual;
@property (nonatomic) int nameSource;
@property (getter=isRepresentative, nonatomic) bool representative;
@property (nonatomic) double size;
@property (readonly) Class superclass;

+ (id)_detectedFacePropertiesToFetch;
+ (id)_detectedFaceRelationshipKeyPathsToPrefetch;
+ (id)_migrateDetectedFaces:(id)arg1 forPersonMetadata:(id)arg2 fromVersion:(unsigned long long)arg3;
+ (id)_persistedFaceMetadataWithDetectedFace:(id)arg1 isKeyFace:(bool)arg2 isClusterRejected:(bool)arg3;
+ (id)_persistedFacesWithUnarchiver:(id)arg1 key:(id)arg2;
+ (void)enumerateMatchedAssetsWithMetadata:(id)arg1 inContext:(id)arg2 withBlock:(id /* block */)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_identifier;
- (id)_insertDeferredRebuildFaceFromDataInManagedObjectContext:(id)arg1 personUUID:(id)arg2 isRejected:(bool)arg3;
- (id)additionalDescription;
- (id)assetCloudGUID;
- (id)assetUUID;
- (double)bodyCenterX;
- (double)bodyCenterY;
- (double)bodyHeight;
- (double)bodyWidth;
- (double)centerX;
- (double)centerY;
- (int)cloudNameSource;
- (id)description;
- (id)detectionType;
- (void)encodeWithCoder:(id)arg1;
- (int)faceAlgorithmVersion;
- (id)initWithCoder:(id)arg1;
- (bool)isClusterRejected;
- (bool)isDeferrable;
- (bool)isHidden;
- (bool)isHidden;
- (bool)isManual;
- (bool)isRepresentative;
- (id)jsonDictionary;
- (bool)matchesEntityInLibraryBackedByManagedObjectContext:(id)arg1 forConfirmedPersonUUID:(id)arg2 diff:(id*)arg3;
- (bool)matchesEntityInLibraryBackedByManagedObjectContext:(id)arg1 forRejectedPersonUUID:(id)arg2 diff:(id*)arg3;
- (id)matchingFaceInManagedObejctContext:(id)arg1;
- (int)nameSource;
- (void)setAssetCloudGUID:(id)arg1;
- (void)setAssetUUID:(id)arg1;
- (void)setBodyCenterX:(double)arg1;
- (void)setBodyCenterY:(double)arg1;
- (void)setBodyHeight:(double)arg1;
- (void)setBodyWidth:(double)arg1;
- (void)setCenterX:(double)arg1;
- (void)setCenterY:(double)arg1;
- (void)setCloudNameSource:(int)arg1;
- (void)setClusterRejected:(bool)arg1;
- (void)setDetectionType:(id)arg1;
- (void)setFaceAlgorithmVersion:(int)arg1;
- (void)setHidden:(bool)arg1;
- (void)setManual:(bool)arg1;
- (void)setNameSource:(int)arg1;
- (void)setRepresentative:(bool)arg1;
- (void)setSize:(double)arg1;
- (double)size;

@end