/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPlacesLocationAuthorizationMonitor : NSObject <CLLocationManagerDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _authorizationStatus;
    void locationManager;
    void observable;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)locationManagerDidChangeAuthorization:(id)arg1;

@end
