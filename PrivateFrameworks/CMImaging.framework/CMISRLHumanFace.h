/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMImaging.framework/CMImaging
 */

@interface CMISRLHumanFace : NSObject {
    unsigned long long  _FaceID;
    float  _FilteredSkinToneLevels;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _Rect;
    float  _RectLargestSide;
    float  _SkinToneLevelMapped;
    float  _SkinToneLevels;
    NSDictionary * _faceMetadata;
}

@property (readonly) unsigned long long FaceID;
@property (readonly) float*FilteredSkinToneLevels;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } Rect;
@property (readonly) float RectLargestSide;
@property (readonly) float SkinToneLevelMapped;
@property (readonly) float*SkinToneLevels;

+ (float)mappedSkinToneLevel:(float*)arg1;

- (void).cxx_destruct;
- (unsigned long long)FaceID;
- (float*)FilteredSkinToneLevels;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })Rect;
- (float)RectLargestSide;
- (float)SkinToneLevelMapped;
- (float*)SkinToneLevels;
- (bool)areSkinToneLevelsEqualTo:(id)arg1;
- (id)asDictionary;
- (id)initWithFaceObject:(id)arg1;
- (void)setFilteredSkinToneLevels:(float*)arg1;

@end
