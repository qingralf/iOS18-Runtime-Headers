/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CAFCombine.framework/CAFCombine
 */

@interface CAFCombine.CAFSteeringWheelHeatingCoolingObservable : NSObject <CAFSteeringWheelHeatingCoolingObserver> {
    void _autoMode;
    void _heatingCoolingLevel;
    void cachedDescription;
    void cachedDescriptionLock;
    void observed;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)serviceDidFinishGroupUpdate:(id)arg1;
- (void)serviceDidUpdate:(id)arg1 characteristic:(id)arg2 fromGroupUpdate:(bool)arg3;
- (void)serviceDidUpdate:(id)arg1 receivedAllValues:(bool)arg2;
- (void)steeringWheelHeatingCoolingService:(id)arg1 didUpdateAutoMode:(bool)arg2;
- (void)steeringWheelHeatingCoolingService:(id)arg1 didUpdateHeatingCoolingLevel:(int)arg2;

@end