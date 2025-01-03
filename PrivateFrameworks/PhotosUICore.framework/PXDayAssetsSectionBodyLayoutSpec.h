/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXDayAssetsSectionBodyLayoutSpec : PXFeatureSpec {
    bool  _allowsVideoPlaybackAtAnySize;
    struct { 
        union { 
            struct { 
                float topLeft; 
                float topRight; 
                float bottomLeft; 
                float bottomRight; 
            } ; 
            float byIndex[4]; 
        } ; 
    }  _bodyCornerRadius;
    double  _horizontalMargin;
    double  _interitemSpacing;
    long long  _numberOfColumns;
    bool  _useHorizontalContentGuideInsets;
}

@property (nonatomic, readonly) bool allowsVideoPlaybackAtAnySize;
@property (nonatomic, readonly) struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; } bodyCornerRadius;
@property (nonatomic, readonly) double horizontalMargin;
@property (nonatomic, readonly) double interitemSpacing;
@property (nonatomic, readonly) long long numberOfColumns;
@property (nonatomic, readonly) bool useHorizontalContentGuideInsets;

- (bool)allowsVideoPlaybackAtAnySize;
- (struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; })bodyCornerRadius;
- (double)horizontalMargin;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (double)interitemSpacing;
- (long long)numberOfColumns;
- (bool)useHorizontalContentGuideInsets;

@end
