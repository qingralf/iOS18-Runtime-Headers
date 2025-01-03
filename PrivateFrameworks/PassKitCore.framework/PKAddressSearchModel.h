/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAddressSearchModel : NSObject <CLLocationManagerDelegate, MKLocalSearchCompleterDelegate> {
    MKLocalSearchCompleter * _completer;
    NSArray * _completionSearchResults;
    CNContactStore * _contactStore;
    NSArray * _contactsSearchResults;
    <PKAddressSearchModelDelegate> * _delegate;
    CLGeocoder * _geocoder;
    MKLocalSearch * _localSearch;
    CLLocationManager * _locationManager;
    NSArray * _recentsSearchResults;
    NSObject<OS_dispatch_queue> * _resultsQueue;
}

@property (nonatomic, retain) MKLocalSearchCompleter *completer;
@property (nonatomic, readonly) NSArray *completionSearchResults;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic, readonly) NSArray *contactsSearchResults;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <PKAddressSearchModelDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CLGeocoder *geocoder;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MKLocalSearch *localSearch;
@property (nonatomic, retain) CLLocationManager *locationManager;
@property (nonatomic, readonly) NSArray *recentsSearchResults;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *resultsQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_resetContactsSearchResults;
- (void)_updateRecents:(id)arg1;
- (void)beginSearch:(id)arg1;
- (id)completer;
- (void)completerDidUpdateResults:(id)arg1;
- (id)completionSearchResults;
- (id)contactStore;
- (id)contactsSearchResults;
- (id)delegate;
- (void)endSearch;
- (id)geocoder;
- (id)init;
- (id)localSearch;
- (id)locationManager;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (id)recentsSearchResults;
- (id)resultsQueue;
- (void)selectMapSearchCompletion:(id)arg1;
- (void)setCompleter:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGeocoder:(id)arg1;
- (void)setLocalSearch:(id)arg1;
- (void)setLocationManager:(id)arg1;
- (void)setResultsQueue:(id)arg1;

@end
