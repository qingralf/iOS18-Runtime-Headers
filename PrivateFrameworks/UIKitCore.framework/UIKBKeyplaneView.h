/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKBKeyplaneView : UIKBSplitImageView <UIKBCacheableView> {
    NSMutableDictionary * _activeViewIndex;
    UIKBCacheToken * _cacheToken;
    UIKBKeyView * _candidateGapView;
    UIKBTree * _defaultKeyplane;
    UIKBCacheToken * _defaultKeyplaneCacheToken;
    NSMutableDictionary * _delayedDeactivationKeys;
    <UIKBKeyplaneViewDelegate> * _delegate;
    UIKeyboardEmojiKeyDisplayController * _emojiKeyManager;
    UIKBRenderFactory * _factory;
    UIKBSplitImageView * _keyBackgrounds;
    UIKBSplitImageView * _keyBorders;
    UIKBSplitImageView * _keyCaps;
    UIKBKeyViewAnimator * _keyViewAnimator;
    UIKBTree * _keyplane;
    UIView * _keyplaneMaskView;
    UIKBScreenTraits * _overrideScreenTraits;
    UIKBRenderConfig * _renderConfig;
    NSMutableDictionary * _renderedKeyViews;
    UIKBRenderingContext * _renderingContext;
    bool  _shouldDrawRect;
    NSMutableDictionary * _subviewIndex;
    bool  _suppressDrawing;
}

@property (nonatomic, readonly) long long assetIdiom;
@property (nonatomic, readonly) long long cacheDeferPriority; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool cacheDeferable;
@property (nonatomic, readonly) NSString *cacheKey;
@property (nonatomic, retain) UIKBCacheToken *cacheToken;
@property (nonatomic, readonly) double cachedWidth;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, retain) UIKBTree *defaultKeyplane;
@property (nonatomic, retain) UIKBCacheToken *defaultKeyplaneCacheToken;
@property (nonatomic) <UIKBKeyplaneViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool displaysColorImage;
@property (nonatomic, retain) UIKeyboardEmojiKeyDisplayController *emojiKeyManager;
@property (nonatomic, retain) UIKBRenderFactory *factory;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool keepNonPersistent;
@property (nonatomic, retain) UIKBKeyViewAnimator *keyViewAnimator;
@property (nonatomic, retain) UIKBTree *keyplane;
@property (nonatomic, readonly) UIView *keyplaneMaskView;
@property (nonatomic, retain) UIKBScreenTraits *overrideScreenTraits;
@property (nonatomic, retain) UIKBRenderConfig *renderConfig;
@property (nonatomic, retain) UIKBRenderingContext *renderingContext;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressDrawing;

- (void).cxx_destruct;
- (bool)_canDrawContent;
- (void)_generateFactoryIfNeeded;
- (void)_generateRenderingContextIfNeeded;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_safeFrameForKeyViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContainer:(id)arg2 forKey:(id)arg3;
- (bool)_shouldAllowKey:(id)arg1;
- (bool)_shouldInheritScreenScaleAsContentScaleFactor;
- (bool)_shouldUseUnifiedKeyView:(id)arg1 forState:(int)arg2;
- (void)_updateKeyplaneMaskView;
- (void)activateKeys;
- (id)activeKeyViews;
- (void)addKeyToDelayedDeactivationSet:(id)arg1;
- (long long)assetIdiom;
- (long long)cacheDeferPriority;
- (bool)cacheDeferable;
- (id)cacheIdentifierForKey:(id)arg1;
- (id)cacheIdentifierForKey:(id)arg1 withState:(int)arg2;
- (id)cacheKey;
- (id)cacheKeysForRenderFlags:(id)arg1;
- (id)cacheToken;
- (double)cachedWidth;
- (void)cancelDelayedDeactivation;
- (id)containingViewForKey:(id)arg1 withState:(int)arg2 wantsActiveOut:(bool*)arg3;
- (unsigned long long)cornerMaskForKey:(id)arg1 recursive:(bool)arg2;
- (void)deactivateAdaptiveKey:(id)arg1;
- (void)deactivateKey:(id)arg1 previousState:(int)arg2;
- (void)deactivateKey:(id)arg1 previousState:(int)arg2 keyView:(id)arg3;
- (void)deactivateKeys;
- (void)deactivateKeysWithReason:(id)arg1 force:(bool)arg2;
- (void)dealloc;
- (id)defaultKeyplane;
- (id)defaultKeyplaneCacheToken;
- (id)delegate;
- (void)dimKeys:(id)arg1;
- (void)displayLayer:(id)arg1;
- (bool)displaysColorImage;
- (void)drawContentsOfRenderers:(id)arg1;
- (id)emojiKeyManager;
- (id)existingVariantsKeyViewForKey:(id)arg1;
- (id)factory;
- (void)hideKeyCaps:(bool)arg1;
- (void)hideKeyCaps:(bool)arg1 andControlKeysWithInteractionTypes:(id)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 keyplane:(id)arg2;
- (bool)isPasscodeStyle;
- (bool)keepNonPersistent;
- (id)keyViewAnimator;
- (id)keyplane;
- (id)keyplaneMaskView;
- (void)layoutSubviews;
- (void)orientKeyCapForKey:(id)arg1 orientation:(long long)arg2;
- (id)overrideScreenTraits;
- (void)prepareForDisplay;
- (void)purgeActiveKeyViews;
- (void)purgeFactory;
- (void)purgeKeyViews;
- (void)purgeLayerContents;
- (void)purgeSubviews;
- (void)removeFromSuperview;
- (void)removeKeyFromDelayedDeactivationSet:(id)arg1;
- (id)renderConfig;
- (id)renderingContext;
- (bool)retestSelectedVariantIndexForKey:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 phase:(long long)arg3;
- (void)setCacheToken:(id)arg1;
- (void)setContentScaleFactor:(double)arg1;
- (void)setDefaultKeyplane:(id)arg1;
- (void)setDefaultKeyplaneCacheToken:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEmojiKeyManager:(id)arg1;
- (void)setFactory:(id)arg1;
- (void)setKeyViewAnimator:(id)arg1;
- (void)setKeyplane:(id)arg1;
- (void)setOverrideScreenTraits:(id)arg1;
- (void)setRenderConfig:(id)arg1;
- (void)setRenderingContext:(id)arg1;
- (void)setState:(int)arg1 forKey:(id)arg2;
- (void)setState:(int)arg1 forKey:(id)arg2 withReason:(id)arg3 force:(bool)arg4;
- (void)setSuppressDrawing:(bool)arg1;
- (bool)shouldAnimateInKeyView:(id)arg1;
- (bool)shouldAnimateOutKeyView:(id)arg1;
- (int)stateForKey:(id)arg1;
- (bool)suppressDrawing;
- (void)updateFrameForKey:(id)arg1;
- (bool)useDefaultKeyplaneCacheTokenForRenderFlags:(long long)arg1;
- (bool)validForKeyplane:(id)arg1 withVisualStyle:(int)arg2;
- (id)viewForKey:(id)arg1;
- (id)viewForKey:(id)arg1 state:(int)arg2;
- (void)willMoveToWindow:(id)arg1;

@end
