/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreODIEssentials.framework/CoreODIEssentials
 */

@interface _TtCC17CoreODIEssentials17ODILocationHelper23LocationManagerDelegate : NSObject <CLLocationManagerDelegate> {
    void _locationManager;
    void analyticsManager;
    void didCallLocationDelegate;
    void didFireAnalyticsEvent;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  locationFetchRequestedAt;
    void lock;
    void logger;
    void parent;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;

@end