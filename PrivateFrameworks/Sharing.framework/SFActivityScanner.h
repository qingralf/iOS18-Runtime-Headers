/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFActivityScanner : NSObject <SFContinuityScanManagerObserver> {
    <SFActivityScannerDelegate> * _delegate;
    NSUUID * _identifier;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly) <SFActivityScannerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSUUID *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activityPayloadFromDevice:(id)arg1 forAdvertisementPayload:(id)arg2 command:(id)arg3 timeout:(long long)arg4 withCompletionHandler:(id /* block */)arg5;
- (void)dealloc;
- (id)delegate;
- (id)identifier;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)scanForTypes:(unsigned long long)arg1;
- (void)scanManager:(id)arg1 foundDeviceWithDevice:(id)arg2;
- (void)scanManager:(id)arg1 lostDeviceWithDevice:(id)arg2;
- (void)scanManager:(id)arg1 pairedDevicesChanged:(id)arg2;
- (void)scanManager:(id)arg1 receivedAdvertisement:(id)arg2;
- (void)setIdentifier:(id)arg1;

@end
