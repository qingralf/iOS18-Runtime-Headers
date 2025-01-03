/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIColorCurves : CIFilter {
    CIImage * _curvesImage;
    id  inputColorSpace;
    NSData * inputCurvesData;
    CIVector * inputCurvesDomain;
    CIImage * inputImage;
}

@property (nonatomic, retain) id inputColorSpace;
@property (nonatomic, copy) NSData *inputCurvesData;
@property (nonatomic, retain) CIVector *inputCurvesDomain;
@property (nonatomic, retain) CIImage *inputImage;

+ (id)customAttributes;

- (bool)_checkInputs;
- (id)curvesImage;
- (void)dealloc;
- (id)inputColorSpace;
- (id)inputCurvesData;
- (id)inputCurvesDomain;
- (id)inputImage;
- (id)outputImage;
- (void)setInputColorSpace:(id)arg1;
- (void)setInputCurvesData:(id)arg1;
- (void)setInputCurvesDomain:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
