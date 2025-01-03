/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@interface PCNonCellularUsabilityMonitor : NSObject <PCInterfaceUsabilityMonitorDelegate, PCInterfaceUsabilityMonitorProtocol> {
    NSObject<OS_dispatch_queue> * _delegateQueue;
    CUTWeakReference * _delegateReference;
    NSString * _demoOverrideInterface;
    NSObject<OS_dispatch_queue> * _ivarQueue;
    PCInterfaceUsabilityMonitor * _monitor;
    NSObject<OS_dispatch_queue> * _monitorDelegateQueue;
    int  _previousLinkQuality;
    unsigned long long  _thresholdOffTransitionCount;
    bool  _trackUsability;
    double  _trackedTimeInterval;
}

@property (nonatomic, readonly) int currentRAT; /* unknown property attribute: ? */
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <PCInterfaceUsabilityMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long interface5GMode; /* unknown property attribute: ? */
@property (nonatomic, readonly) long long interfaceConstraint;
@property (nonatomic, readonly) long long interfaceIdentifier;
@property (nonatomic, readonly) bool isBadLinkQuality;
@property (nonatomic, readonly) bool isInterfaceHistoricallyUsable;
@property (nonatomic, readonly) bool isInterfaceUsable;
@property (nonatomic, readonly) bool isInternetReachable;
@property (nonatomic, readonly) bool isLTEWithCDRX; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool isNetworkingPowerExpensiveToUse;
@property (nonatomic, readonly) bool isPoorLinkQuality;
@property (nonatomic, readonly) bool isRadioHot;
@property (nonatomic, readonly) int linkQuality;
@property (nonatomic, readonly, retain) NSString *linkQualityString;
@property (nonatomic, readonly) NSString *networkCode; /* unknown property attribute: ? */
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct __CFString { }*wwanInterfaceName; /* unknown property attribute: ? */

- (void).cxx_destruct;
- (void)_addMonitor;
- (void)_callDelegateOnIvarQueueWithBlock:(id /* block */)arg1;
- (void)_forwardConfigurationOnIvarQueue;
- (int)_linkQualityOnIvarQueue;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegateQueue:(id)arg1;
- (long long)interfaceConstraint;
- (long long)interfaceIdentifier;
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;
- (void)interfaceReachabilityChanged:(id)arg1;
- (bool)isBadLinkQuality;
- (bool)isInterfaceHistoricallyUsable;
- (bool)isInterfaceUsable;
- (bool)isInternetReachable;
- (bool)isNetworkingPowerExpensiveToUse;
- (bool)isPoorLinkQuality;
- (bool)isRadioHot;
- (int)linkQuality;
- (id)linkQualityString;
- (void)setDelegate:(id)arg1;
- (void)setThresholdOffTransitionCount:(unsigned long long)arg1;
- (void)setTrackUsability:(bool)arg1;
- (void)setTrackedTimeInterval:(double)arg1;

@end
