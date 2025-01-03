/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

@interface WFNetworkListConfigDataSource : NSObject {
    void WAPISwitchHandler;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _WAPIEnabled;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _WAPISwitchHidden;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _askToJoinMode;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _autoInstantHotspotOption;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _dataUsageHidden;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _networkModificationRestrictionOn;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _powerModificationRestrictionOn;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _powerOn;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _powerState;
    void askToJoinModeTapHandler;
    void autoInstantHotspotTapHandler;
    void autoUnlockEnabled;
    void dataUsageTapHandler;
    void isCellularDevice;
    void isChinaDevice;
    void powerToggleHandler;
    void userAutoJoinEnabled;
}

- (void).cxx_destruct;
- (id)init;
- (void)setAskToJoinMode:(long long)arg1;
- (void)setAskToJoinModeTapHandler:(id /* block */)arg1;
- (void)setAutoInstantHotspotOption:(long long)arg1;
- (void)setAutoInstantHotspotTapHandler:(id /* block */)arg1;
- (void)setAutoUnlockEnabled:(bool)arg1;
- (void)setDataUsageHidden:(bool)arg1;
- (void)setDataUsageTapHandler:(id /* block */)arg1;
- (void)setIsCellularDevice:(bool)arg1;
- (void)setIsChinaDevice:(bool)arg1;
- (void)setNetworkModificationRestriction:(bool)arg1;
- (void)setPowerModificationRestriction:(bool)arg1;
- (void)setPowerState:(unsigned long long)arg1;
- (void)setPowerToggleHandler:(id /* block */)arg1;
- (void)setUserAutoJoinEnabled:(bool)arg1;
- (void)setWAPIEnabled:(bool)arg1;
- (void)setWAPISwitchHandler:(id /* block */)arg1;
- (void)setWAPISwitchHidden:(bool)arg1;

@end
