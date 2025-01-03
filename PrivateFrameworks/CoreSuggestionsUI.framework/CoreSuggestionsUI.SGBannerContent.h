/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
 */

@interface CoreSuggestionsUI.SGBannerContent : NSObject {
    void accessoryType;
    void actionButtonType;
    void actionTitle;
    void attributedSubtitle;
    void attributedTitle;
    void backgroundColor;
    void backgroundVisualEffectView;
    void bannerDivider;
    void bannerForVisionDevice;
    void closeButtonWidth;
    void closeButtonXAnchorOffset;
    void delegate;
    void dismissAction;
    void iconSFSymbols;
    void imageSGViews;
    void images;
    void listTitle;
    void primaryAction;
    void primaryActionButtonWidth;
    void prominentActionButton;
    void subtitle;
    void suggestion;
    void suggestionCategorySupportsBatchDismissal;
    void title;
}

@property (nonatomic) long long accessoryType;
@property (nonatomic) long long actionButtonType;
@property (nonatomic, copy) NSString *actionTitle;
@property (nonatomic, retain) NSAttributedString *attributedSubtitle;
@property (nonatomic, retain) NSAttributedString *attributedTitle;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) UIVisualEffectView *backgroundVisualEffectView;
@property (nonatomic, retain) SGBannerDividerParameter *bannerDivider;
@property (nonatomic) double closeButtonWidth;
@property (nonatomic) double closeButtonXAnchorOffset;
@property (nonatomic) <SGSuggestionDelegate> *delegate;
@property (nonatomic, retain) SGSuggestionAction *dismissAction;
@property (nonatomic, copy) NSArray *iconSFSymbols;
@property (nonatomic, copy) NSArray *imageSGViews;
@property (nonatomic, copy) NSArray *images;
@property (nonatomic, copy) NSString *listTitle;
@property (nonatomic, retain) SGSuggestionAction *primaryAction;
@property (nonatomic) double primaryActionButtonWidth;
@property (nonatomic) bool prominentActionButton;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, retain) <SGSuggestion> *suggestion;
@property (nonatomic) bool suggestionCategorySupportsBatchDismissal;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (long long)accessoryType;
- (long long)actionButtonType;
- (id)actionTitle;
- (id)attributedSubtitle;
- (id)attributedTitle;
- (id)backgroundColor;
- (id)backgroundVisualEffectView;
- (id)bannerDivider;
- (double)closeButtonWidth;
- (double)closeButtonXAnchorOffset;
- (id)delegate;
- (id)dismissAction;
- (id)iconSFSymbols;
- (id)imageSGViews;
- (id)images;
- (id)init;
- (id)listTitle;
- (id)primaryAction;
- (double)primaryActionButtonWidth;
- (bool)prominentActionButton;
- (void)setAccessoryType:(long long)arg1;
- (void)setActionButtonType:(long long)arg1;
- (void)setActionTitle:(id)arg1;
- (void)setAttributedSubtitle:(id)arg1;
- (void)setAttributedTitle:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundVisualEffectView:(id)arg1;
- (void)setBannerDivider:(id)arg1;
- (void)setCloseButtonWidth:(double)arg1;
- (void)setCloseButtonXAnchorOffset:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDismissAction:(id)arg1;
- (void)setIconSFSymbols:(id)arg1;
- (void)setImageSGViews:(id)arg1;
- (void)setImages:(id)arg1;
- (void)setListTitle:(id)arg1;
- (void)setPrimaryAction:(id)arg1;
- (void)setPrimaryActionButtonWidth:(double)arg1;
- (void)setProminentActionButton:(bool)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSuggestion:(id)arg1;
- (void)setSuggestionCategorySupportsBatchDismissal:(bool)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)suggestion;
- (bool)suggestionCategorySupportsBatchDismissal;
- (id)title;

@end
