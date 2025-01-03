/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PVFaceCrop : PVObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedImageDimensions;
    NSData * _faceCropData;
    PVFace * _originatingFace;
    short  _state;
}

@property (nonatomic) short state;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)faceCropData;
- (struct CGSize { double x1; double x2; })imageDimensions;
- (id)initWithFaceCropData:(id)arg1 originatingFace:(id)arg2;
- (id)initWithLocalIdentifier:(id)arg1 faceCropData:(id)arg2;
- (id)originatingFace;
- (void)setState:(short)arg1;
- (short)state;

@end
