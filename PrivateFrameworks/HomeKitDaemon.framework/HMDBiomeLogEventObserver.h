/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDBiomeLogEventObserver : HMFObject <HMMLogEventObserver> {
    HMDBiomeEventManager * _biomeEventManager;
    <HMDBiomeLogEventObserverDataSource> * _dataSource;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)shortDescription;

- (void).cxx_destruct;
- (void)didReceiveEventFromDispatcher:(id)arg1;
- (id)initWithBiomeEventManager:(id)arg1 dataSource:(id)arg2;

@end
