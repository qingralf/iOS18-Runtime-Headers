/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsUI.framework/MapsUI
 */

@interface MUPlaceFooterActionsSectionController : MUPlaceSectionController <MUPlaceSectionControlling> {
    MUFooterActionsSectionController * _underlyingSectionController;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) <MUInfoCardAnalyticsDelegate> *analyticsDelegate;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (nonatomic, readonly) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (nonatomic, readonly) UIView *sectionView;
@property (nonatomic, readonly) UIViewController *sectionViewController; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSArray *sectionViews;
@property (nonatomic, retain) MUPlaceCallToActionAppearance *submissionStatus;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)analyticsModule;
- (int)analyticsModuleType;
- (id)initWithMapItem:(id)arg1 actionManager:(id)arg2;
- (bool)isImpressionable;
- (void)reloadData;
- (id)sectionView;

@end
