/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPWebLinkPresentationProperties : NSObject <LPLinkPresentationPropertyProvider> {
    NSArray * _alternateImages;
    LPARAsset * _arAsset;
    LPAudio * _audio;
    UIColor * _backgroundColor;
    LPImage * _backgroundImage;
    LPImagePresentationProperties * _backgroundImageProperties;
    LPCaptionBarPresentationProperties * _captionBar;
    NSString * _domainNameForIndicator;
    UIColor * _dominantImageBackgroundColor;
    LPImage * _image;
    LPImagePresentationProperties * _imageProperties;
    LPInlineMediaPlaybackInformation * _inlinePlaybackInformation;
    LPCaptionBarPresentationProperties * _mediaBottomCaptionBar;
    LPCaptionBarPresentationProperties * _mediaTopCaptionBar;
    NSNumber * _minimumHeight;
    NSNumber * _overrideAllowOpeningSensitiveURLs;
    NSURL * _overrideURL;
    bool  _preliminary;
    LPIndeterminateProgressSpinnerPresentationProperties * _progressSpinner;
    NSString * _quotedText;
    long long  _style;
    LPVideo * _video;
}

@property (nonatomic, retain) NSArray *alternateImages;
@property (nonatomic, retain) LPARAsset *arAsset;
@property (nonatomic, retain) LPAudio *audio;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) LPImage *backgroundImage;
@property (nonatomic, retain) LPImagePresentationProperties *backgroundImageProperties;
@property (nonatomic, retain) LPCaptionBarPresentationProperties *captionBar;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *domainNameForIndicator;
@property (nonatomic, retain) UIColor *dominantImageBackgroundColor;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) LPImage *image;
@property (nonatomic, retain) LPImagePresentationProperties *imageProperties;
@property (nonatomic, retain) LPInlineMediaPlaybackInformation *inlinePlaybackInformation;
@property (nonatomic, retain) LPCaptionBarPresentationProperties *mediaBottomCaptionBar;
@property (nonatomic, retain) LPCaptionBarPresentationProperties *mediaTopCaptionBar;
@property (nonatomic, retain) NSNumber *minimumHeight;
@property (nonatomic, copy) NSNumber *overrideAllowOpeningSensitiveURLs;
@property (nonatomic, copy) NSURL *overrideURL;
@property (getter=isPreliminary, nonatomic) bool preliminary;
@property (nonatomic, retain) LPIndeterminateProgressSpinnerPresentationProperties *progressSpinner;
@property (nonatomic, copy) NSString *quotedText;
@property (nonatomic) long long style;
@property (readonly) Class superclass;
@property (nonatomic, retain) LPVideo *video;

- (void).cxx_destruct;
- (id)alternateImages;
- (id)arAsset;
- (id)audio;
- (id)backgroundColor;
- (id)backgroundImage;
- (id)backgroundImageProperties;
- (id)captionBar;
- (id)domainNameForIndicator;
- (id)dominantImageBackgroundColor;
- (id)image;
- (id)imageProperties;
- (id)inlinePlaybackInformation;
- (bool)isPreliminary;
- (id)mediaBottomCaptionBar;
- (id)mediaTopCaptionBar;
- (id)minimumHeight;
- (id)overrideAllowOpeningSensitiveURLs;
- (id)overrideURL;
- (id)progressSpinner;
- (id)quotedText;
- (void)setAlternateImages:(id)arg1;
- (void)setArAsset:(id)arg1;
- (void)setAudio:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)setBackgroundImageProperties:(id)arg1;
- (void)setCaptionBar:(id)arg1;
- (void)setDomainNameForIndicator:(id)arg1;
- (void)setDominantImageBackgroundColor:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageProperties:(id)arg1;
- (void)setInlinePlaybackInformation:(id)arg1;
- (void)setMediaBottomCaptionBar:(id)arg1;
- (void)setMediaTopCaptionBar:(id)arg1;
- (void)setMinimumHeight:(id)arg1;
- (void)setOverrideAllowOpeningSensitiveURLs:(id)arg1;
- (void)setOverrideURL:(id)arg1;
- (void)setPreliminary:(bool)arg1;
- (void)setProgressSpinner:(id)arg1;
- (void)setQuotedText:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setVideo:(id)arg1;
- (long long)style;
- (id)video;

@end