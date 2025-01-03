/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SDNetworkQualityInquiry : NSObject <NWNetworkOfInterestManagerDelegate> {
    NSMutableSet * _knownNetworks;
    NWNetworkOfInterestManager * _manager;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSMutableSet *knownNetworks;
@property (nonatomic, readonly) NWNetworkOfInterestManager *manager;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)areKnownNetworksReady;
- (void)dealloc;
- (void)didStartTrackingNOI:(id)arg1;
- (void)didStopTrackingAllNOIs:(id)arg1;
- (void)didStopTrackingNOI:(id)arg1;
- (unsigned long long)getNetworkQuality;
- (id)init;
- (id)knownNetworks;
- (id)manager;
- (id)queue;

@end
