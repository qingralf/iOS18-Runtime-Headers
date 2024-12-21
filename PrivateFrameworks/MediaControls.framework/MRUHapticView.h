/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MRUHapticView : UIView <MRUVisualStylingProviderObserver> {
    UIImage * _artworkImage;
    bool  _artworkIsHapticsUnavailableImage;
    CALayer * _contentLayer;
    unsigned long long  _context;
    bool  _dimmed;
    CALayer * _fallbackLayer;
    UIColor * _fillColor;
    UIView * _hapticContainerView;
    CALayer * _hapticDimLayer;
    UIImageView * _hapticImageView;
    UIView * _hapticImageViewHolder;
    CALayer * _hapticLayer;
    CALayer * _hapticLightenLayer;
    MAMusicHapticsManager * _musicHapticsManager;
    <NSCopying> * _musicHapticsToken;
    MRUVisualStylingProvider * _stylingProvider;
    NSTimer * _transitionTimer;
}

@property (nonatomic, retain) UIImage *artworkImage;
@property (nonatomic) bool artworkIsHapticsUnavailableImage;
@property (nonatomic, retain) CALayer *contentLayer;
@property (nonatomic) unsigned long long context;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (getter=isDimmed, nonatomic) bool dimmed;
@property (nonatomic, retain) CALayer *fallbackLayer;
@property (nonatomic, retain) UIColor *fillColor;
@property (nonatomic, retain) UIView *hapticContainerView;
@property (nonatomic, retain) CALayer *hapticDimLayer;
@property (nonatomic, retain) UIImageView *hapticImageView;
@property (nonatomic, retain) UIView *hapticImageViewHolder;
@property (nonatomic, retain) CALayer *hapticLayer;
@property (nonatomic, retain) CALayer *hapticLightenLayer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MAMusicHapticsManager *musicHapticsManager;
@property (nonatomic, retain) <NSCopying> *musicHapticsToken;
@property (nonatomic, retain) MRUVisualStylingProvider *stylingProvider;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSTimer *transitionTimer;

- (void).cxx_destruct;
- (void)_hapticImageTap:(id)arg1;
- (void)applyContext:(unsigned long long)arg1;
- (id)artworkImage;
- (bool)artworkIsHapticsUnavailableImage;
- (id)contentLayer;
- (unsigned long long)context;
- (id)fallbackLayer;
- (id)fillColor;
- (void)handleDarkenSystemColorsNotification:(id)arg1;
- (void)handleHapticEnabledStatusChangedNotification:(id)arg1;
- (id)hapticContainerView;
- (id)hapticDimLayer;
- (id)hapticImageView;
- (id)hapticImageViewHolder;
- (id)hapticLayer;
- (id)hapticLightenLayer;
- (id)initWithContext:(unsigned long long)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)initializeSubviews;
- (bool)isDimmed;
- (void)layoutSubviews;
- (id)musicHapticsManager;
- (id)musicHapticsToken;
- (void)registerHapticObserver;
- (void)registerSystemColorsObserver;
- (void)setArtworkImage:(id)arg1;
- (void)setArtworkIsHapticsUnavailableImage:(bool)arg1;
- (void)setContentLayer:(id)arg1;
- (void)setContext:(unsigned long long)arg1;
- (void)setDimmed:(bool)arg1;
- (void)setFallbackLayer:(id)arg1;
- (void)setFillColor:(id)arg1;
- (void)setHapticContainerView:(id)arg1;
- (void)setHapticDimLayer:(id)arg1;
- (void)setHapticImageView:(id)arg1;
- (void)setHapticImageViewHolder:(id)arg1;
- (void)setHapticLayer:(id)arg1;
- (void)setHapticLightenLayer:(id)arg1;
- (void)setMusicHapticsManager:(id)arg1;
- (void)setMusicHapticsToken:(id)arg1;
- (void)setStylingProvider:(id)arg1;
- (void)setTransitionTimer:(id)arg1;
- (id)stylingProvider;
- (id)transitionTimer;
- (void)updateArtworkFilters;
- (void)updateArtworkImageForHapticStatus:(unsigned int)arg1;
- (void)updateLayers;
- (void)updateMusicHapticsStatus;
- (void)updateVisualStyle;
- (void)visualStylingProviderDidChange:(id)arg1;

@end