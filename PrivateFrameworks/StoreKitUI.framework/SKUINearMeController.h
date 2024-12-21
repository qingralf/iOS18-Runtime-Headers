/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUINearMeController : NSObject <CLLocationManagerDelegate, SKUIItemStateCenterObserver> {
    int  _authorizationStatus;
    SKUIClientContext * _clientContext;
    bool  _isMonitoring;
    NSArray * _items;
    CLLocationManager * _locationManager;
    long long  _locationTimeoutCount;
    NSObject<OS_dispatch_source> * _locationTimeoutTimer;
    SSLookupRequest * _lookupRequest;
    NSObject<OS_dispatch_source> * _refreshTimer;
    NSDictionary * _responseDictionary;
    long long  _status;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) NSDictionary *responseDictionary;
@property (nonatomic, readonly) long long status;
@property (readonly) Class superclass;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_disableNearMe;
- (void)_finishLookupWithItems:(id)arg1 response:(id)arg2 error:(id)arg3;
- (void)_lookupItemsForLocation:(id)arg1;
- (void)_monitorLocationTimeout;
- (void)_refreshTimeout;
- (void)_setItems:(id)arg1 responseDictionary:(id)arg2 error:(id)arg3 status:(long long)arg4;
- (void)_startMonitoringLocation;
- (void)_startRefreshTimer;
- (void)_stopMonitoringLocation;
- (void)_stopRefreshTimer;
- (id)clientContext;
- (void)disable;
- (void)getItems;
- (id)init;
- (bool)isNearMeLocationStatusEnabled;
- (void)itemStateCenterRestrictionsChanged:(id)arg1;
- (id)items;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (id)responseDictionary;
- (void)setClientContext:(id)arg1;
- (long long)status;

@end