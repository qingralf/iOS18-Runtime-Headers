/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed
 */

@interface NewsFeed.LocationDetectionManager : NSObject <CLLocationManagerDelegate, TSLocationDetectionManagerType> {
    void _mostFrequentLocation;
    void locationManager;
    void observableMostFrequentLocation;
    void observers;
    void onUserInteractedWithLocationAuthorizationTCC;
}

@property (nonatomic, readonly) bool authorized;
@property (nonatomic, readonly) bool locationServicesEnabled;
@property (nonatomic, retain) CLLocation *mostFrequentLocation;
@property (nonatomic, retain) id observableMostFrequentLocation;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (bool)authorized;
- (id)init;
- (void)isAuthorizedWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (bool)locationServicesEnabled;
- (id)mostFrequentLocation;
- (id)observableMostFrequentLocation;
- (void)removeObserver:(id)arg1;
- (void)setMostFrequentLocation:(id)arg1;
- (void)setObservableMostFrequentLocation:(id)arg1;

@end
