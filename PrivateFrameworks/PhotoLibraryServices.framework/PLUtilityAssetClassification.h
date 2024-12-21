/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLUtilityAssetClassification : NSObject <NSCopying, PNSceneClassification> {
    long long  _classificationType;
    double  _confidence;
    unsigned long long  _extendedSceneIdentifier;
    long long  _packedBoundingBox;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBox;
@property (nonatomic) long long classificationType;
@property (nonatomic) double confidence;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long extendedSceneIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long packedBoundingBox;
@property (readonly) Class superclass;

- (void)_prepareForRecycle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (long long)classificationType;
- (double)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)extendedSceneIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)packedBoundingBox;
- (void)setClassificationType:(long long)arg1;
- (void)setConfidence:(double)arg1;
- (void)setExtendedSceneIdentifier:(unsigned long long)arg1;
- (void)setPackedBoundingBox:(long long)arg1;

@end