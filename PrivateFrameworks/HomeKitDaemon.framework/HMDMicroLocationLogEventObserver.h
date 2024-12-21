/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDMicroLocationLogEventObserver : HMFObject <HMFLogging, HMMLogEventObserver> {
    <HMDMicroLocationLogEventObserverDataSource> * _dataSource;
    HMDMicroLocationManager * _microLocationManager;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)didReceiveEventFromDispatcher:(id)arg1;
- (id)initWithDataSource:(id)arg1 microLocationManager:(id)arg2;

@end