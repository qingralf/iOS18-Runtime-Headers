/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKit.framework/NanoTimeKit
 */

@interface NTKComplicationController : NSObject {
    bool  _active;
    long long  _animationMode;
    NSHashTable * _assertions;
    long long  _cachingMode;
    NTKComplication * _complication;
    long long  _complicationFamily;
    CLKDevice * _device;
    NSMutableArray * _displayWrappers;
    NSMapTable * _displayWrappersToDisplayProperties;
    NSMapTable * _displayWrappersToTouchObservers;
    long long  _effectiveFaceDataMode;
    bool  _faceZooming;
    bool  _hasGoneLive;
    id /* block */  _invalidationHandler;
    <CDComplicationDisplay> * _legacyDisplayDEPRECATED;
    NSDate * _pauseDate;
    bool  _showsLockedUI;
    long long  _updatingMode;
}

@property (nonatomic, readonly) long long animationMode;
@property (nonatomic, readonly) long long cachingMode;
@property (nonatomic, readonly) NTKComplication *complication;
@property (nonatomic, readonly) long long complicationFamily;
@property (nonatomic, readonly) CLKDevice *device;
@property (nonatomic, readonly) long long effectiveFaceDataMode;
@property (getter=isFaceZooming, nonatomic) bool faceZooming;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, readonly) <CDComplicationDisplay> *legacyDisplay;
@property (nonatomic, retain) NSDate *pauseDate;
@property (nonatomic) bool showsLockedUI;
@property (nonatomic, readonly) long long updatingMode;

+ (id)DEPRECATEDControllerForComplication:(id)arg1 withLegacyDisplay:(id)arg2 forDevice:(id)arg3;
+ (bool)_acceptsComplicationType:(unsigned long long)arg1 family:(long long)arg2 forDevice:(id)arg3;
+ (bool)_acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;
+ (Class)_controllerClassForComplicationType:(unsigned long long)arg1 family:(long long)arg2 device:(id)arg3 resolvedFamily:(inout long long*)arg4;
+ (bool)_isLegacy;
+ (id)_newOrCachedControllerOfClass:(Class)arg1 complication:(id)arg2 variant:(id)arg3 device:(id)arg4;
+ (Class)controllerClassForComplicationType:(unsigned long long)arg1 family:(long long)arg2 forDevice:(id)arg3;
+ (id)controllerForComplication:(id)arg1 variant:(id)arg2 device:(id)arg3;

- (void).cxx_destruct;
- (void)DEPRECATEDInvalidate;
- (void)_activate;
- (void)_applyAnimationMode;
- (void)_applyCachingMode;
- (void)_applyUpdatingMode;
- (void)_configureForLegacyDisplay:(id)arg1;
- (void)_deactivate;
- (void)_handleRenderStatsForDisplayWrapper:(id)arg1 withTime:(double)arg2 cost:(double)arg3;
- (id)_initWithComplication:(id)arg1 legacyDisplay:(id)arg2 forDevice:(id)arg3;
- (void)_openApp:(id)arg1 withURL:(id)arg2 forDisplayWrapper:(id)arg3 result:(id /* block */)arg4;
- (void)_openAppWithURL:(id)arg1 forDisplayWrapper:(id)arg2;
- (void)_openUserActivity:(id)arg1 forApp:(id)arg2 forDisplayWrapper:(id)arg3 result:(id /* block */)arg4;
- (void)_updateActive;
- (void)_updateEffectiveAnimationMode;
- (void)_updateEffectiveCachingMode;
- (void)_updateEffectiveFaceDataMode;
- (void)_updateEffectiveUpdatingMode;
- (void)_updateInternalModes:(bool)arg1;
- (void)_updateIsComplicationActive:(bool)arg1;
- (void)activate;
- (void)addDataModeAssertion:(id)arg1;
- (void)addDisplayWrapper:(id)arg1;
- (void)addDisplayWrapper:(id)arg1 withDisplayProperties:(id)arg2;
- (long long)animationMode;
- (long long)cachingMode;
- (id)complication;
- (id)complicationApplicationIdentifier;
- (long long)complicationFamily;
- (void)deactivate;
- (void)dealloc;
- (id)device;
- (void)didTouchDownInView:(id)arg1;
- (void)didTouchUpInsideView:(id)arg1;
- (id)displayPropertiesForDisplayWrapper:(id)arg1;
- (long long)effectiveFaceDataMode;
- (void)enumerateDisplayWrappersWithBlock:(id /* block */)arg1;
- (void)handleFaceDefaultsChanged;
- (bool)hasTapAction;
- (id)initWithComplication:(id)arg1 variant:(id)arg2 device:(id)arg3;
- (id /* block */)invalidationHandler;
- (bool)isFaceZooming;
- (id)legacyDisplay;
- (void)notifyDelegateOnTimelineChangeWithTritiumUpdatePriority:(long long)arg1;
- (id)pauseDate;
- (void)performTapActionForDisplayWrapper:(id)arg1;
- (void)removeDataModeAssertion:(id)arg1;
- (void)removeDisplayWrapper:(id)arg1;
- (Class)richComplicationDisplayViewClass;
- (void)setDisplayProperties:(id)arg1 forDisplayWrapper:(id)arg2;
- (void)setFaceZooming:(bool)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setPauseDate:(id)arg1;
- (void)setShowsLockedUI:(bool)arg1;
- (void)setTouchObserver:(id)arg1 forDisplayWrapper:(id)arg2;
- (bool)showsLockedUI;
- (void)updateDataModeAssertion:(id)arg1;
- (void)updatePropertiesForDisplayWrapper:(id)arg1 withBlock:(id /* block */)arg2;
- (long long)updatingMode;
- (bool)wantsLegacyDisplay;

@end
