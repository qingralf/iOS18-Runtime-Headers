/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChronoUIServices.framework/ChronoUIServices
 */

@interface CHUISPreferences : NSObject {
    bool  _debugPrefersStaticSnapshots;
    bool  _debugSnapshotViewColoring;
    bool  _debugViewLabels;
    NSUserDefaults * _defaults;
    bool  _enableMemoryStressTestingWithGaspar;
    bool  _userWantsWidgetDataWhenPasscodeLocked;
    NSString * _widgetRenderer;
}

@property (nonatomic, readonly) bool debugPrefersStaticSnapshots;
@property (nonatomic, readonly) bool debugSnapshotViewColoring;
@property (nonatomic, readonly) bool debugViewLabels;
@property (nonatomic, readonly) bool enableMemoryStressTestingWithGaspar;
@property (nonatomic, readonly) bool userWantsWidgetDataWhenPasscodeLocked;
@property (nonatomic, readonly) NSString *widgetRenderer;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)debugPrefersStaticSnapshots;
- (bool)debugSnapshotViewColoring;
- (bool)debugViewLabels;
- (bool)enableMemoryStressTestingWithGaspar;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)userWantsWidgetDataWhenPasscodeLocked;
- (id)widgetRenderer;

@end
