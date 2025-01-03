/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CAFCombine.framework/CAFCombine
 */

@interface CAFCombine.CAFPairedDevicesInformationObservable : NSObject <CAFPairedDevicesInformationObserver> {
    void _pairedDeviceList;
    void cachedDescription;
    void cachedDescriptionLock;
    void observed;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)pairedDevicesInformationService:(id)arg1 didUpdatePairedDeviceList:(id)arg2;
- (void)serviceDidFinishGroupUpdate:(id)arg1;
- (void)serviceDidUpdate:(id)arg1 characteristic:(id)arg2 fromGroupUpdate:(bool)arg3;
- (void)serviceDidUpdate:(id)arg1 receivedAllValues:(bool)arg2;

@end
