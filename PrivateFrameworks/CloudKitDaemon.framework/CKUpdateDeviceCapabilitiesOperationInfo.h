/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKUpdateDeviceCapabilitiesOperationInfo : CKOperationInfo {
    NSArray * _lastSentCapabilities;
    NSDictionary * _shareUsages;
    NSArray * _supportedCapabilities;
    NSDictionary * _zoneUsages;
}

@property (nonatomic, retain) NSArray *lastSentCapabilities;
@property (nonatomic, retain) NSDictionary *shareUsages;
@property (nonatomic, retain) NSArray *supportedCapabilities;
@property (nonatomic, retain) NSDictionary *zoneUsages;

- (void).cxx_destruct;
- (id)initWithSupportedCapabilities:(id)arg1 lastSentCapabilities:(id)arg2 zoneUsages:(id)arg3 shareUsages:(id)arg4;
- (id)lastSentCapabilities;
- (void)setLastSentCapabilities:(id)arg1;
- (void)setShareUsages:(id)arg1;
- (void)setSupportedCapabilities:(id)arg1;
- (void)setZoneUsages:(id)arg1;
- (id)shareUsages;
- (id)supportedCapabilities;
- (id)zoneUsages;

@end