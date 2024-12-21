/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
 */

@interface CEKDynamicTickMarksView : UIView <CEKCellTickMarksConfiguration, CEKImageTickMarksConfiguration, CEKTickMarksContainer, CameraEditKit.TickMarksDataSource, CameraEditKit.TickMarksDelegate> {
    NSIndexSet * __installedTickMarkIndexes;
    bool  __needsTickMarkRefresh;
    NSIndexSet * __selectedIndexes;
    NSMutableDictionary * __tickMarksByIndex;
    NSMutableSet * __tickMarksReusePool;
    _TtC13CameraEditKit24TickMarksVisibilityModel * __tickMarksVisibilityModel;
    bool  __waveAnimationDelayActive;
    NSMutableIndexSet * __waveIndexes;
    <CEKTickMarksCellDataProvider> * _cellDataProvider;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _contentTransform;
    <CEKSliderTickMarksDelegate> * _delegate;
    bool  _enabled;
    bool  _highlightSelectedIndex;
    <CEKTickMarksImageDataProvider> * _imageDataProvider;
    NSIndexSet * _magneticTickMarkIndexes;
    unsigned long long  _selectedTickMarkIndex;
    _TtC13CameraEditKit14TickMarksModel * _tickMarksModel;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleBounds;
}

@property (setter=_setInstalledTickMarkIndexes:, nonatomic, retain) NSIndexSet *_installedTickMarkIndexes;
@property (nonatomic, readonly) bool _needsTickMarkRefresh;
@property (setter=_setSelectedIndexes:, nonatomic, retain) NSIndexSet *_selectedIndexes;
@property (nonatomic, readonly) NSMutableDictionary *_tickMarksByIndex;
@property (nonatomic, readonly) NSMutableSet *_tickMarksReusePool;
@property (nonatomic, readonly) _TtC13CameraEditKit24TickMarksVisibilityModel *_tickMarksVisibilityModel;
@property (getter=_isUsingCells, nonatomic, readonly) bool _usingCells;
@property (getter=_isUsingImages, nonatomic, readonly) bool _usingImages;
@property (setter=_setWaveAnimationDelayActive:, nonatomic) bool _waveAnimationDelayActive;
@property (setter=_setWaveIndexes:, nonatomic, retain) NSMutableIndexSet *_waveIndexes;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } alignmentRectInsets;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic) <CEKTickMarksCellDataProvider> *cellDataProvider;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } contentTransform;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <CEKSliderTickMarksDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool highlightSelectedIndex;
@property (nonatomic) <CEKTickMarksImageDataProvider> *imageDataProvider;
@property (nonatomic, retain) NSIndexSet *magneticTickMarkIndexes;
@property (nonatomic) unsigned long long selectedTickMarkIndex;
@property (readonly) Class superclass;
@property (nonatomic, readonly) _TtC13CameraEditKit14TickMarksModel *tickMarksModel;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleBounds;

- (void).cxx_destruct;
- (bool)_bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 containsTickMarkAtIndex:(unsigned long long)arg2;
- (id)_colorForTickMarkAtIndex:(unsigned long long)arg1 selected:(bool)arg2 isTickEnabled:(bool)arg3;
- (void)_configureHighlightForTickMark:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_configureTickMark:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)_configureTickMark:(id)arg1 forIndex:(unsigned long long)arg2 selected:(bool)arg3;
- (void)_dequeueAndInstallTickMarkForIndex:(unsigned long long)arg1;
- (void)_destroyAllTickMarks;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForTickMarkAtIndex:(unsigned long long)arg1 selected:(bool)arg2;
- (id)_indexesIntersectingVisibleBounds;
- (id)_installedTickMarkIndexes;
- (bool)_isUsingCells;
- (bool)_isUsingImages;
- (void)_layoutDynamicCellTickMark:(id)arg1 atIndex:(unsigned long long)arg2;
- (double)_lengthForMagneticTickMark;
- (double)_lengthForSelectedTickMark;
- (double)_lengthForStandardTickMark;
- (bool)_needsTickMarkRefresh;
- (void)_recycleTickMarks;
- (void)_refreshTickMarks;
- (void)_refreshTickMarksHighlight;
- (void)_removeAndEnqueueTickMarkAtIndex:(unsigned long long)arg1;
- (id)_selectedIndexes;
- (void)_setInstalledTickMarkIndexes:(id)arg1;
- (void)_setNeedsRefreshTickMarks;
- (void)_setSelectedIndexes:(id)arg1;
- (void)_setWaveAnimationDelayActive:(bool)arg1;
- (void)_setWaveIndexes:(id)arg1;
- (id)_tickMarksByIndex;
- (id)_tickMarksReusePool;
- (id)_tickMarksVisibilityModel;
- (bool)_waveAnimationDelayActive;
- (id)_waveIndexes;
- (id)cellDataProvider;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })contentTransform;
- (id)delegate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForTickMarkAtIndex:(unsigned long long)arg1;
- (bool)highlightSelectedIndex;
- (id)imageDataProvider;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEnabled;
- (void)layoutSubviews;
- (id)magneticTickMarkIndexes;
- (void)performWaveAnimation;
- (void)reloadContent;
- (unsigned long long)selectedTickMarkIndex;
- (void)setCellDataProvider:(id)arg1;
- (void)setContentTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setContentTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 animated:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlightSelectedIndex:(bool)arg1;
- (void)setHighlightSelectedIndex:(bool)arg1 animated:(bool)arg2;
- (void)setImageDataProvider:(id)arg1;
- (void)setMagneticTickMarkIndexes:(id)arg1;
- (void)setSelectedTickMarkIndex:(unsigned long long)arg1;
- (void)setSelectedTickMarkIndex:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)tickMarksModel;
- (void)tickMarksModelDidChangeAppearanceWithModel:(id)arg1;
- (void)tickMarksModelDidChangeWidthForTickMarkCountWithModel:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleBounds;

@end