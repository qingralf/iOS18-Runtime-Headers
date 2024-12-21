/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBHPageManagementCellDragPreview : UIView <SBIconDragPreview> {
    bool  _cleanedUp;
    NSHashTable * _cleanupDelayAssertions;
    id /* block */  _cleanupHandler;
    UIViewController<SBIconViewCustomImageViewControlling> * _customIconImageViewController;
    bool  _delayingCleanup;
    unsigned long long  _dragState;
    SBIconView * _iconView;
    SBIconView * _referenceIconView;
    bool  flocked;
    bool  iconAllowsAccessory;
    bool  iconAllowsLabelArea;
    bool  iconCanShowCloseBox;
    double  iconContentScale;
    bool  iconIsEditing;
}

@property (nonatomic, copy) id /* block */ cleanUpHandler;
@property (getter=hasCleanedUp, nonatomic) bool cleanedUp;
@property (nonatomic, retain) UIViewController<SBIconViewCustomImageViewControlling> *customIconImageViewController;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (getter=isDelayingCleanup, nonatomic) bool delayingCleanup;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long dragState;
@property (getter=isFlocked, nonatomic) bool flocked;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBIcon *icon;
@property (nonatomic) bool iconAllowsAccessory;
@property (nonatomic) bool iconAllowsLabelArea;
@property (nonatomic) bool iconCanShowCloseBox;
@property (nonatomic) bool iconCanShowResizeHandle; /* unknown property attribute: ? */
@property (nonatomic) double iconContentScale;
@property (nonatomic) bool iconIsEditing;
@property (nonatomic, retain) SBIconView *iconView;
@property (nonatomic, retain) SBIconView *referenceIconView;
@property (readonly) Class superclass;

+ (id)_pageManagementCellViewForIconImageViewController:(id)arg1;

- (void).cxx_destruct;
- (void)_configureIconViewWithReferenceIconView:(id)arg1;
- (id)_pageManagementCellView;
- (void)_removeDelayCleanupAssertion:(id)arg1;
- (void)cleanUp;
- (id /* block */)cleanUpHandler;
- (id)customIconImageViewController;
- (id)delayCleanUpForReason:(id)arg1;
- (unsigned long long)dragState;
- (void)draggingSourceCancelAnimationCompleted;
- (void)draggingSourceDroppedWithOperation:(unsigned long long)arg1;
- (void)dropDestinationAnimationCompleted;
- (void)handleCleanup;
- (bool)hasCleanedUp;
- (id)icon;
- (bool)iconAllowsAccessory;
- (bool)iconAllowsLabelArea;
- (bool)iconCanShowCloseBox;
- (double)iconContentScale;
- (bool)iconIsEditing;
- (id)iconView;
- (id)initWithReferenceIconView:(id)arg1;
- (bool)isDelayingCleanup;
- (bool)isFlocked;
- (id)referenceIconView;
- (void)setCleanUpHandler:(id /* block */)arg1;
- (void)setCleanedUp:(bool)arg1;
- (void)setCustomIconImageViewController:(id)arg1;
- (void)setDelayingCleanup:(bool)arg1;
- (void)setDragState:(unsigned long long)arg1;
- (void)setFlocked:(bool)arg1;
- (void)setIcon:(id)arg1;
- (void)setIconAllowsAccessory:(bool)arg1;
- (void)setIconAllowsLabelArea:(bool)arg1;
- (void)setIconCanShowCloseBox:(bool)arg1;
- (void)setIconContentScale:(double)arg1;
- (void)setIconIsEditing:(bool)arg1;
- (void)setIconIsEditing:(bool)arg1 animated:(bool)arg2;
- (void)setIconView:(id)arg1;
- (void)setIconViewCustomIconImageViewController:(id)arg1;
- (void)setIconViewDelegate:(id)arg1;
- (void)setReferenceIconView:(id)arg1;
- (void)updateDestinationIconLocation:(id)arg1 allowsLabelArea:(bool)arg2 animated:(bool)arg3;

@end