/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CAFCombine.framework/CAFCombine
 */

@interface CAFCombine.CAFDefrostObservable : NSObject <CAFDefrostObserver> {
    void _level;
    void _name;
    void _types;
    void _vehicleLayoutKey;
    void cachedDescription;
    void cachedDescriptionLock;
    void observed;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (void)dealloc;
- (void)defrostService:(id)arg1 didUpdateLevel:(unsigned char)arg2;
- (void)defrostService:(id)arg1 didUpdateName:(id)arg2;
- (void)defrostService:(id)arg1 didUpdateTypes:(unsigned long long)arg2;
- (void)defrostService:(id)arg1 didUpdateVehicleLayoutKey:(id)arg2;
- (id)description;
- (id)init;
- (void)serviceDidFinishGroupUpdate:(id)arg1;
- (void)serviceDidUpdate:(id)arg1 characteristic:(id)arg2 fromGroupUpdate:(bool)arg3;
- (void)serviceDidUpdate:(id)arg1 receivedAllValues:(bool)arg2;

@end