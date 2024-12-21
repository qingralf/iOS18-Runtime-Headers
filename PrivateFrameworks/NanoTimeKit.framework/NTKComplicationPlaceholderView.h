/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKit.framework/NanoTimeKit
 */

@interface NTKComplicationPlaceholderView : UIView <CLKFullColorImageView> {
    NSString * _complicationAppIdentifier;
    NTKComplicationVariant * _complicationVariant;
    CLKDevice * _device;
    CALayer * _strokesLayer;
    <CLKMonochromeFilterProvider> * filterProvider;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) <CLKMonochromeFilterProvider> *filterProvider;
@property (nonatomic, copy) UIFontDescriptor *fontDescriptor; /* unknown property attribute: ? */
@property (nonatomic) double fontSizeFactor; /* unknown property attribute: ? */
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_circleDiameter;
- (id)_createCircularLayer;
- (id)_createCircularLayersWithDiameter:(double)arg1;
- (id)_createDownloadMaskLayer;
- (id)_createDownloadProgressMaskWithDiameter:(double)arg1 progress:(double)arg2 contained:(bool)arg3;
- (id)_createRectangularLayer;
- (void)_updateLayers;
- (void)configureWithImageProvider:(id)arg1 reason:(long long)arg2;
- (id)filterProvider;
- (id)initFullColorImageViewWithDevice:(id)arg1;
- (void)layoutSubviews;
- (void)pauseLiveFullColorImageView;
- (void)resumeLiveFullColorImageView;
- (void)setFilterProvider:(id)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end