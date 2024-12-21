/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHGeneratedAssetDescription : PHObject {
    long long  _analysisSourceType;
    short  _analysisVersion;
    NSString * _descriptionText;
}

@property (nonatomic) long long analysisSourceType;
@property (nonatomic) short analysisVersion;
@property (nonatomic, copy) NSString *descriptionText;

+ (id)entityKeyMap;
+ (id)fetchGeneratedAssetDescriptionsGroupedByAssetLocalIdentifierWithType:(long long)arg1 forAssets:(id)arg2;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)managedEntityName;

- (void).cxx_destruct;
- (long long)analysisSourceType;
- (short)analysisVersion;
- (id)debugDescription;
- (id)description;
- (id)descriptionText;
- (id)initWithNodeContainer:(id)arg1 photoLibrary:(id)arg2;
- (void)setAnalysisSourceType:(long long)arg1;
- (void)setAnalysisVersion:(short)arg1;
- (void)setDescriptionText:(id)arg1;

@end