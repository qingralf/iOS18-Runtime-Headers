/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarVisualProvider_Phone : _UIStatusBarVisualProvider_iOS <_UIStatusBarPillRegionVisualProvider> {
    _UIStatusBarVisualProvider_PillRegionCoordinator * _pillRegionCoordinator;
}

@property (nonatomic, readonly) bool canFixupDisplayItemAttributes; /* unknown property attribute: ? */
@property (nonatomic, readonly) UIFont *clockFont;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool expanded;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UIStatusBarVisualProvider_PillRegionCoordinator *pillRegionCoordinator;
@property (nonatomic) _UIStatusBar *statusBar;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsIndirectPointerTouchActions;

+ (Class)visualProviderSubclassForScreen:(id)arg1 visualProviderInfo:(id)arg2;

- (void).cxx_destruct;
- (void)actionable:(id)arg1 highlighted:(bool)arg2 initialPress:(bool)arg3;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (id)init;
- (id)pillRegionCoordinator;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (void)setPillRegionCoordinator:(id)arg1;
- (id)willUpdateWithData:(id)arg1;

@end