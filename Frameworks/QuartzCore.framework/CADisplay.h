/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CADisplay : NSObject {
    void * _impl;
}

@property bool allowsVirtualModes;
@property (nonatomic, readonly) float autoLuminanceBoost;
@property (nonatomic, readonly) NSArray *availableModes;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (getter=isCloned, nonatomic, readonly) bool cloned;
@property (getter=isCloning, nonatomic, readonly) bool cloning;
@property (getter=isCloningSupported, nonatomic, readonly) bool cloningSupported;
@property (nonatomic, copy) NSString *colorMode;
@property (nonatomic, readonly) unsigned int connectionSeed;
@property (nonatomic, readonly) NSString *containerId;
@property (nonatomic, retain) CADisplayMode *currentMode;
@property (nonatomic, readonly) NSString *currentOrientation;
@property (nonatomic, retain) CADisplayPreset *currentPreset;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) unsigned int displayId;
@property (nonatomic, readonly) long long displayType;
@property (getter=isExternal, nonatomic, readonly) bool external;
@property (nonatomic, readonly) CADisplayAttributes *externalDisplayAttributes;
@property (getter=isForceFixedRateLinksEnabled, nonatomic) bool forceFixedRateLinksEnabled;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic, readonly) bool hasNativeFrameRateRequest;
@property (nonatomic, readonly) double heartbeatRate;
@property (nonatomic, readonly) bool isReference;
@property (nonatomic, readonly) bool isReferenceLimited;
@property (nonatomic) double latency;
@property (nonatomic, readonly) int linkQuality;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } logicalScale;
@property (nonatomic, readonly) double maximumLogicalScale;
@property (nonatomic, readonly) long long minimumFrameDuration;
@property (nonatomic, readonly) double minimumLogicalScale;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *nativeOrientation;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } nativeSize;
@property (nonatomic, readonly) unsigned int odLUTVersion;
@property (nonatomic, copy) NSString *overscanAdjustment;
@property (nonatomic, readonly) double overscanAmount;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } overscanAmounts;
@property (getter=isOverscanned, nonatomic, readonly) bool overscanned;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } physicalSize;
@property (nonatomic, readonly) unsigned long long pointScale;
@property (nonatomic, copy) CADisplayPreferences *preferences;
@property (nonatomic, readonly) CADisplayMode *preferredMode;
@property (nonatomic, readonly) int processId;
@property (nonatomic, readonly) NSString *productName;
@property (nonatomic, readonly) double refreshRate;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } safeBounds;
@property (nonatomic, readonly) unsigned int seed;
@property (getter=isSupported, nonatomic, readonly) bool supported;
@property (nonatomic, readonly) bool supportsExtendedColors;
@property (nonatomic, readonly) bool supportsVariableFrameDuration;
@property (nonatomic, readonly) long long tag;
@property (nonatomic, readonly) NSString *transportType;
@property (nonatomic, readonly) NSString *uniqueId;

+ (id)TVOutDisplay;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)displays;
+ (id)mainDisplay;
+ (void)updateDisplays;

- (struct __CFDictionary { }*)_copyDebugProperties;
- (void)_finalize;
- (id)_initWithDisplay:(void*)arg1;
- (void)_invalidate;
- (void)_notifyDisallowedLayersChange:(bool)arg1;
- (void)_postNotification:(long long)arg1;
- (id)allowedHDRModes;
- (bool)allowsVirtualModes;
- (float)autoLuminanceBoost;
- (id)availableModes;
- (id)availablePresets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)colorMode;
- (unsigned int)connectionSeed;
- (id)containerId;
- (id)currentMode;
- (id)currentOrientation;
- (id)currentPreset;
- (void)dealloc;
- (id)description;
- (id)deviceName;
- (unsigned int)displayId;
- (long long)displayType;
- (id)externalDisplayAttributes;
- (id)flipBookWithCapacity:(unsigned long long)arg1;
- (id)flipBookWithOptions:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (double)hardwareRefreshRate;
- (bool)hasNativeFrameRateRequest;
- (double)heartbeatRate;
- (float)highestLocalPreferredFrameRateRequest;
- (id)immutableCopy;
- (bool)isCloned;
- (bool)isCloning;
- (bool)isCloningSupported;
- (bool)isExternal;
- (bool)isForceFixedRateLinksEnabled;
- (bool)isOverscanned;
- (bool)isReference;
- (bool)isReferenceLimited;
- (bool)isSupported;
- (double)latency;
- (int)linkQuality;
- (struct CGSize { double x1; double x2; })logicalScale;
- (double)maximumLogicalScale;
- (long long)minimumFrameDuration;
- (double)minimumLogicalScale;
- (id)name;
- (id)nativeOrientation;
- (struct CGSize { double x1; double x2; })nativeSize;
- (unsigned int)odLUTVersion;
- (void)overrideDisplayTimings:(id)arg1;
- (void)overrideMinimumFrameDuration:(long long)arg1;
- (id)overscanAdjustment;
- (double)overscanAmount;
- (struct CGSize { double x1; double x2; })overscanAmounts;
- (struct CGSize { double x1; double x2; })physicalSize;
- (unsigned long long)pointScale;
- (id)preferences;
- (struct CAFrameRateRange { float x1; float x2; float x3; })preferredFrameRateRangeForMaximumVelocity:(float)arg1;
- (struct CAFrameRateRange { float x1; float x2; float x3; })preferredFrameRateRangeForVelocity:(float)arg1;
- (id)preferredHDRModes;
- (id)preferredMode;
- (id)preferredModeWithCriteria:(id)arg1;
- (int)processId;
- (id)productName;
- (double)refreshRate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })safeBounds;
- (unsigned int)seed;
- (void)setAllowsVirtualModes:(bool)arg1;
- (void)setColorMode:(id)arg1;
- (void)setCurrentMode:(id)arg1;
- (void)setCurrentPreset:(id)arg1;
- (void)setDisallowedLayersCallback:(id /* block */)arg1;
- (bool)setDisplayProperties:(id)arg1;
- (void)setForceFixedRateLinksEnabled:(bool)arg1;
- (void)setLatency:(double)arg1;
- (void)setOverscanAdjustment:(id)arg1;
- (void)setPreferences:(id)arg1;
- (id)stateControl;
- (id)supportedHDRModes;
- (bool)supportsExtendedColors;
- (bool)supportsVariableFrameDuration;
- (long long)tag;
- (void*)timingsControl;
- (id)transportType;
- (id)uniqueId;
- (void)update;

@end
