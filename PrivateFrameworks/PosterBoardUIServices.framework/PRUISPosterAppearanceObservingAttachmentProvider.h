/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterBoardUIServices.framework/PosterBoardUIServices
 */

@interface PRUISPosterAppearanceObservingAttachmentProvider : NSObject {
    PRPosterAppearance * _currentAppearance;
    UIView * _obscurableContentContainerView;
    BSUIVibrancyEffectView * _obscurableContentVibrancyView;
    UIView * _obscurableOverlayView;
    UIView * _overlayContentView;
    PFServerPosterPath * _path;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _primaryContentTightFrame;
    PRPosterTitleStyleConfiguration * _titleStyleConfiguration;
    PRPosterContentStyleVibrantContentRenderer * _vibrantContentRenderer;
}

@property (nonatomic, readonly) PRUISPosterAttachment *obscurableContentAttachment;
@property (nonatomic, retain) BSUIVibrancyView *obscurableContentVibrancyView;
@property (nonatomic, readonly) UIView *obscurableContentView;
@property (nonatomic, readonly) UIView *obscurableOverlayView;
@property (nonatomic, readonly) PRUISPosterAttachment *overlayContentAttachment;
@property (nonatomic, readonly) UIView *overlayContentView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } primaryContentTightFrame;
@property (nonatomic, readonly) UIView *vibrantObscurableContentView;

+ (long long)obscurableContentAttachmentLevel;
+ (long long)overlayContentAttachmentLevel;

- (void).cxx_destruct;
- (id)_currentAppearance;
- (void)_loadTitleStyleConfigurationIfNeeded;
- (id)_updateContentStyleWithTitleStyleConfiguration:(id)arg1 initialAppearance:(id)arg2;
- (void)applyPosterAppearanceToObserver:(id)arg1;
- (id)initWithPRSConfiguration:(id)arg1;
- (id)initWithPoster:(id)arg1;
- (id)obscurableContentAttachment;
- (id)obscurableContentVibrancyView;
- (id)obscurableContentView;
- (id)obscurableOverlayView;
- (id)overlayContentAttachment;
- (id)overlayContentView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })primaryContentTightFrame;
- (void)setObscurableContentVibrancyView:(id)arg1;
- (void)setPrimaryContentTightFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateLayoutForChangedObscuredSubviewBounds;
- (id)vibrantObscurableContentView;

@end