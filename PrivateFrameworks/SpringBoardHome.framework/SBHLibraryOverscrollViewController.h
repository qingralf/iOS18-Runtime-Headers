/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBHLibraryOverscrollViewController : UIViewController <SBHRootFolderCustomViewPresenting> {
    unsigned long long  contentVisibility;
    _UILegibilitySettings * legibilitySettings;
}

@property (nonatomic) unsigned long long contentVisibility;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <SBIconListViewQuerying> *iconListViewQueryable; /* unknown property attribute: ? */
@property (readonly) <SBIconLocationPresenting> *iconLocationPresenter; /* unknown property attribute: ? */
@property (readonly) <SBIconViewQuerying> *iconViewQueryable; /* unknown property attribute: ? */
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, copy) SBHIconImageAppearance *overrideIconImageAppearance; /* unknown property attribute: ? */
@property (nonatomic, readonly) double scrollPageOffsetForButtonsInEditingMode; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool shouldBeIndicatedInPageControl; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool shouldShowAddWidgetButtonWhenEditing; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool shouldShowDoneButtonWhenEditing; /* unknown property attribute: ? */
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)contentVisibility;
- (id)legibilitySettings;
- (void)setContentVisibility:(unsigned long long)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (bool)shouldBeIndicatedInPageControl;

@end