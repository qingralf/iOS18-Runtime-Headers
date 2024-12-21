/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMProxPDPAndALSPhoneManagerInternal : NSObject {
    id /* block */  fALSPhoneHandler;
    void * fLocationdConnection;
    id /* block */  fPDPHandler;
    NSObject<OS_dispatch_queue> * fPrivateQueue;
    bool  fStartedALSUpdates;
    bool  fStartedPDPUpdates;
}

- (void)_startALSPhoneUpdatesWithHandler:(id /* block */)arg1;
- (void)_startPDPUpdatesWithHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)init;

@end