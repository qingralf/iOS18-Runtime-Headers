/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSSwiftProcessInfo : NSProcessInfo {
    void _processInfo;
    void _state;
}

@property (nonatomic, readonly) long long activeProcessorCount;
@property (nonatomic, readonly) NSArray *arguments;
@property (nonatomic, readonly) NSDictionary *environment;
@property (nonatomic, readonly) NSString *globallyUniqueString;
@property (nonatomic, readonly) NSString *hostName;
@property (nonatomic, readonly) bool iOSAppOnMac;
@property (nonatomic, readonly) bool lowPowerModeEnabled;
@property (nonatomic, readonly) bool macCatalystApp;
@property (nonatomic, readonly) struct { long long x1; long long x2; long long x3; } macCatalystVersion;
@property (nonatomic, readonly) struct { long long x1; long long x2; long long x3; } operatingSystemVersion;
@property (nonatomic, readonly) NSString *operatingSystemVersionString;
@property (nonatomic, readonly) unsigned long long physicalMemory;
@property (nonatomic, readonly) int processIdentifier;
@property (nonatomic, copy) NSString *processName;
@property (nonatomic, readonly) long long processorCount;
@property (nonatomic, readonly) double systemUptime;
@property (nonatomic, readonly) long long thermalState;

+ (void)cancelPowerStateNotifyNotification;
+ (void)cancelThermalStateNotifyNotification;
+ (id)processInfo;
+ (void)updatePowerState:(unsigned long long)arg1;
+ (void)updateThermalState:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_reactivateActivity:(id)arg1;
- (void)_setShouldRelaunchDueToAutomaticTerminationStateChangedHandler:(id /* block */)arg1;
- (long long)activeProcessorCount;
- (id)arguments;
- (id)beginActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2;
- (void)endActivity:(id)arg1;
- (id)environment;
- (id)globallyUniqueString;
- (id)hostName;
- (id)init;
- (bool)isLowPowerModeEnabled;
- (bool)isMacCatalystApp;
- (bool)isOperatingSystemAtLeastVersion:(struct { long long x1; long long x2; long long x3; })arg1;
- (bool)isiOSAppOnMac;
- (struct { long long x1; long long x2; long long x3; })macCatalystVersion;
- (bool)macCatalystVersionIsAtLeastVersion:(struct { long long x1; long long x2; long long x3; })arg1;
- (struct { long long x1; long long x2; long long x3; })operatingSystemVersion;
- (id)operatingSystemVersionString;
- (void)performActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 block:(id /* block */)arg3;
- (void)performExpiringActivityWithReason:(id)arg1 usingBlock:(id /* block */)arg2;
- (unsigned long long)physicalMemory;
- (int)processIdentifier;
- (id)processName;
- (long long)processorCount;
- (void)setProcessName:(id)arg1;
- (double)systemUptime;
- (long long)thermalState;

@end
