/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WatchQuickActionsServices.framework/WatchQuickActionsServices
 */

@interface WQAOverlayCoordinator : NSObject <BLSBacklightStateObserving, WatchControlSettingsObserver> {
    NSArray * _currentShapeLayersForHint;
    <WQAOverlayDataSource> * _dataSource;
    bool  _hasNoActivationGesture;
    bool  _inputSourcesRequireFocusRing;
    NSMutableArray * _quickActionShapeLayers;
    bool  _receivedActivationGesture;
}

@property (nonatomic, retain) NSArray *currentShapeLayersForHint;
@property (nonatomic) <WQAOverlayDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasNoActivationGesture;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool inputSourcesRequireFocusRing;
@property (nonatomic, retain) NSMutableArray *quickActionShapeLayers;
@property (nonatomic) bool receivedActivationGesture;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_astFocusRingIsVisible;
- (id)_createNonAnimatingShapeLayerFromPath:(id)arg1;
- (id)_localizedBannerInstructionText;
- (void)_mainQueue_addAnimatedShapeLayerForQuickAction:(id)arg1;
- (void)_mainQueue_backlightDidTurnOff;
- (void)_mainQueue_backlightDidTurnOn;
- (void)_mainQueue_cleanupHintViews;
- (void)_mainQueue_cleanupShapeLayers;
- (void)_mainQueue_removeShapeLayer:(id)arg1;
- (void)_mainQueue_showHintsWithPrimaryQuickActions:(id)arg1 completion:(id /* block */)arg2;
- (void)_mainQueue_showUIForQuickActions:(id)arg1;
- (bool)_shouldShowHintsForQuickActions:(id)arg1;
- (void)_updateGestureSettings;
- (void)animateConfirmationForQuickAction:(id)arg1 completion:(id /* block */)arg2;
- (void)backlight:(id)arg1 didCompleteUpdateToState:(long long)arg2 forEvent:(id)arg3;
- (id)currentShapeLayersForHint;
- (id)dataSource;
- (void)dealloc;
- (bool)hasNoActivationGesture;
- (id)initWithDataSource:(id)arg1;
- (bool)inputSourcesRequireFocusRing;
- (id)quickActionShapeLayers;
- (bool)receivedActivationGesture;
- (void)refreshOverlaysIfNecessary;
- (void)setCurrentShapeLayersForHint:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setHasNoActivationGesture:(bool)arg1;
- (void)setInputSourcesRequireFocusRing:(bool)arg1;
- (void)setQuickActionShapeLayers:(id)arg1;
- (void)setReceivedActivationGesture:(bool)arg1;
- (void)stopCurrentOverlays;
- (void)watchControlSettingsDidChange:(id)arg1;

@end