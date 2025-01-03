/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMSkiTrackerInternal : NSObject {
    id /* block */  fHandler;
    NSObject<OS_dispatch_queue> * fInternalQueue;
    id /* block */  fLiveUpdateHandler;
    void * fLocationdConnection;
    CMSkiData * fMostRecentRecord;
    double  fRunDistanceOffset;
    double  fRunElevationDescendedOffset;
    bool  fStartedUpdates;
}

- (void)_handleUpdates:(id)arg1;
- (void)_queryUpdatesFromRecord:(id)arg1 handler:(id /* block */)arg2;
- (void)_startLiveUpdatesWithHandler:(id /* block */)arg1;
- (void)_startUpdatesFromRecord:(id)arg1 handler:(id /* block */)arg2;
- (void)_stopLiveUpdates;
- (void)_stopUpdates;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end
