/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate
 */

@interface PUPhotoBrowserTitleViewController : NSObject {
    NSString * __dayDescription;
    PLDateRangeFormatter * __dayFormatter;
    bool  __isPerformingChanges;
    bool  __isUpdating;
    bool  __needsUpdateDayAndTimeDescriptions;
    bool  __needsUpdateGestureRecognizers;
    bool  __needsUpdateLabels;
    UITapGestureRecognizer * __tapGestureRecognizer;
    NSString * __timeDescription;
    PLDateRangeFormatter * __timeFormatter;
    NSDate * _creationDate;
    <PUPhotoBrowserTitleViewControllerDelegate> * _delegate;
    struct { 
        bool respondsToTapped; 
    }  _delegateFlags;
    NSString * _geoDescription;
    bool  _tappable;
    bool  _usingCompactTitleView;
    UIView * _view;
}

@property (setter=_setDayDescription:, nonatomic, retain) NSString *_dayDescription;
@property (nonatomic, readonly) PLDateRangeFormatter *_dayFormatter;
@property (setter=_setPerformingChanges:, nonatomic) bool _isPerformingChanges;
@property (setter=_setUpdating:, nonatomic) bool _isUpdating;
@property (setter=_setNeedsUpdateDayAndTimeDescriptions:, nonatomic) bool _needsUpdateDayAndTimeDescriptions;
@property (setter=_setNeedsUpdateGestureRecognizers:, nonatomic) bool _needsUpdateGestureRecognizers;
@property (setter=_setNeedsUpdateLabels:, nonatomic) bool _needsUpdateLabels;
@property (setter=_setTapGestureRecognizer:, nonatomic, retain) UITapGestureRecognizer *_tapGestureRecognizer;
@property (setter=_setTimeDescription:, nonatomic, retain) NSString *_timeDescription;
@property (nonatomic, readonly) PLDateRangeFormatter *_timeFormatter;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic) <PUPhotoBrowserTitleViewControllerDelegate> *delegate;
@property (nonatomic, retain) NSString *geoDescription;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, retain) UIColor *subtitleTextColor;
@property (getter=isTappable, nonatomic) bool tappable;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, retain) UIColor *titleTextColor;
@property (getter=isUsingCompactTitleView, nonatomic) bool usingCompactTitleView;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (void)_assertInsideChangeBlock;
- (void)_assertInsideUpdate;
- (void)_dateFormatterChanged:(id)arg1;
- (id)_dayDescription;
- (id)_dayFormatter;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (void)_invalidateDayAndTimeDescriptions;
- (void)_invalidateGestureRecognizers;
- (void)_invalidateLabels;
- (bool)_isPerformingChanges;
- (bool)_isUpdating;
- (bool)_needsUpdate;
- (bool)_needsUpdateDayAndTimeDescriptions;
- (bool)_needsUpdateGestureRecognizers;
- (bool)_needsUpdateLabels;
- (void)_setDayDescription:(id)arg1;
- (void)_setNeedsUpdate;
- (void)_setNeedsUpdateDayAndTimeDescriptions:(bool)arg1;
- (void)_setNeedsUpdateGestureRecognizers:(bool)arg1;
- (void)_setNeedsUpdateLabels:(bool)arg1;
- (void)_setPerformingChanges:(bool)arg1;
- (void)_setTapGestureRecognizer:(id)arg1;
- (void)_setTimeDescription:(id)arg1;
- (void)_setUpdating:(bool)arg1;
- (id)_tapGestureRecognizer;
- (id)_timeDescription;
- (id)_timeFormatter;
- (void)_updateDayAndTimeDescriptionsIfNeeded;
- (void)_updateGestureRecognizersIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateLabelsIfNeeded;
- (id)creationDate;
- (id)delegate;
- (id)geoDescription;
- (id)init;
- (bool)isTappable;
- (bool)isUsingCompactTitleView;
- (void)performChanges:(id /* block */)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGeoDescription:(id)arg1;
- (void)setSubtitleTextColor:(id)arg1;
- (void)setTappable:(bool)arg1;
- (void)setTitleTextColor:(id)arg1;
- (void)setUsingCompactTitleView:(bool)arg1;
- (id)subtitle;
- (id)subtitleTextColor;
- (id)title;
- (id)titleTextColor;
- (id)view;

@end
