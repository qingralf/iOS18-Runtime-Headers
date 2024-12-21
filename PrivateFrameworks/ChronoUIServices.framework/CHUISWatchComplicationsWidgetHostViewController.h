/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChronoUIServices.framework/ChronoUIServices
 */

@interface CHUISWatchComplicationsWidgetHostViewController : CHUISWidgetHostViewController {
    struct CGPoint { 
        double x; 
        double y; 
    }  _bezelContentCenter;
    CHUISWatchComplicationsWidgetSceneClientSettingsDiffInspector * _clientSettingsDiffInspector;
    CHUISWatchComplicationsCurvedLabelMetrics * _complicationsCurvedLabelMetrics;
    long long  _cornerPosition;
    CHSWatchComplicationsCurvedLabelMetrics * _curvedLabelMetrics;
    bool  _generateSnapshotMetadata;
    bool  _includeAccessoryViews;
    NSString * _sceneIdentifier;
    bool  _shouldReceiveWatchGestureInteractions;
    CHUISWatchComplicationsWidgetSnapshotMetadata * _snapshotMetadata;
    <CHUISWatchComplicationsWidgetHostViewControllerDelegate> * _watchComplicationsDelegate;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } bezelContentCenter;
@property (nonatomic, copy) CHUISWatchComplicationsCurvedLabelMetrics *complicationsCurvedLabelMetrics;
@property (nonatomic) long long cornerPosition;
@property (nonatomic, copy) CHSWatchComplicationsCurvedLabelMetrics *curvedLabelMetrics;
@property (nonatomic, readonly) double curvedTextAngularWidth;
@property (nonatomic) bool generateSnapshotMetadata;
@property (nonatomic) bool includeAccessoryViews;
@property (nonatomic) bool shouldReceiveWatchGestureInteractions;
@property (nonatomic, readonly, copy) CHUISWatchComplicationsWidgetSnapshotMetadata *snapshotMetadata;
@property (nonatomic) <CHUISWatchComplicationsWidgetHostViewControllerDelegate> *watchComplicationsDelegate;

- (void).cxx_destruct;
- (void)_translateCurvedLabelMetrics;
- (id)additionalSnapshotPresentationContext;
- (struct CGPoint { double x1; double x2; })bezelContentCenter;
- (id)complicationsCurvedLabelMetrics;
- (long long)cornerPosition;
- (id)curvedLabelMetrics;
- (double)curvedTextAngularWidth;
- (bool)generateSnapshotMetadata;
- (id)handleActions:(id)arg1;
- (bool)includeAccessoryViews;
- (id)initWithWidget:(id)arg1 metrics:(id)arg2 widgetConfigurationIdentifier:(id)arg3;
- (long long)position;
- (void)prepareForSnapshotWithTimeout:(double)arg1 completion:(id /* block */)arg2;
- (void)sceneDidUpdateClientSettingsWithDiff:(id)arg1 oldClientSettings:(id)arg2 newClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneDidUpdateToSceneIdentifier:(id)arg1;
- (id)sceneSpecification;
- (void)setBezelContentCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setComplicationsCurvedLabelMetrics:(id)arg1;
- (void)setCornerPosition:(long long)arg1;
- (void)setCurvedLabelMetrics:(id)arg1;
- (void)setGenerateSnapshotMetadata:(bool)arg1;
- (void)setIncludeAccessoryViews:(bool)arg1;
- (void)setPosition:(long long)arg1;
- (void)setShouldReceiveWatchGestureInteractions:(bool)arg1;
- (void)setWatchComplicationsDelegate:(id)arg1;
- (bool)shouldReceiveWatchGestureInteractions;
- (id)snapshotMetadata;
- (void)updateWatchGestureInteraction;
- (id)watchComplicationsDelegate;
- (void)willModifySceneClientSettings:(id)arg1;
- (void)willModifySceneSettings:(id)arg1;

@end