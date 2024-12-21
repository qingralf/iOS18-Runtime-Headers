/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

@interface ISSegmentTintEffect : NSObject <ISEffect> {
    IFColor * _color;
    CIImage * _segmentedImage;
}

@property (retain) IFColor *color;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) CIImage *segmentedImage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)color;
- (id)filterWithBackgroundImage:(id)arg1 inputImage:(id)arg2;
- (id)initWithColor:(id)arg1;
- (void)prepareSegmentedImageFromImage:(id)arg1;
- (id)segmentedImage;
- (void)setColor:(id)arg1;
- (void)setSegmentedImage:(id)arg1;

@end