/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInformationSearch.framework/SiriInformationSearch
 */

@interface SiriInformationSearch.PommesLocationManager : NSObject <CLLocationManagerDelegate> {
    void $__lazy_storage_$_locationShiftQueue;
    void $__lazy_storage_$_locationShifter;
    void $__lazy_storage_$_manager;
    void $__lazy_storage_$_statusPublisher;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _status;
    void locationRequestDebounceWait;
    void statusPassthrough;
    void statusQueue;
}

- (void).cxx_destruct;
- (id)init;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManagerDidChangeAuthorization:(id)arg1;

@end
