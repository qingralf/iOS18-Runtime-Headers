/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CAFCombine.framework/CAFCombine
 */

@interface CAFCombine.CAFDisplayUnitsObservable : NSObject <CAFDisplayUnitsObserver> {
    void _distanceUnitRawValue;
    void _speedUnitRawValue;
    void _temperatureUnitRawValue;
    void cachedDescription;
    void cachedDescriptionLock;
    void observed;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)displayUnitsService:(id)arg1 didUpdateDistanceUnitRawValue:(unsigned short)arg2;
- (void)displayUnitsService:(id)arg1 didUpdateSpeedUnitRawValue:(unsigned short)arg2;
- (void)displayUnitsService:(id)arg1 didUpdateTemperatureUnitRawValue:(unsigned short)arg2;
- (id)init;
- (void)serviceDidFinishGroupUpdate:(id)arg1;
- (void)serviceDidUpdate:(id)arg1 characteristic:(id)arg2 fromGroupUpdate:(bool)arg3;
- (void)serviceDidUpdate:(id)arg1 receivedAllValues:(bool)arg2;

@end
