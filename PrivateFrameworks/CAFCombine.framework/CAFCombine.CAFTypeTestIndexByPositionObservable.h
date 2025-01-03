/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CAFCombine.framework/CAFCombine
 */

@interface CAFCombine.CAFTypeTestIndexByPositionObservable : NSObject <CAFTypeTestIndexByPositionObserver> {
    void _name;
    void _testInt32;
    void _vehicleLayoutKey;
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
- (void)typeTestIndexByPositionService:(id)arg1 didUpdateName:(id)arg2;
- (void)typeTestIndexByPositionService:(id)arg1 didUpdateTestInt32:(int)arg2;
- (void)typeTestIndexByPositionService:(id)arg1 didUpdateVehicleLayoutKey:(id)arg2;

@end
