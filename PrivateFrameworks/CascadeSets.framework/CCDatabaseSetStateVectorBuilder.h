/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CascadeSets.framework/CascadeSets
 */

@interface CCDatabaseSetStateVectorBuilder : NSObject {
    NSMutableDictionary * _allDeviceClockValues;
    CCDatabaseDeviceClockValues * _deviceClockValues;
    CCDatabaseDeviceMapping * _deviceMapping;
    NSNumber * _lastDeviceRowId;
    bool  _missingAtomsImplied;
}

- (void).cxx_destruct;
- (id)_indexSetForAtomState:(unsigned char)arg1 deviceRowId:(id)arg2 maxIndex:(unsigned long long)arg3;
- (void)addClockValue:(unsigned long long)arg1 withAtomState:(unsigned char)arg2 forDeviceRowId:(id)arg3;
- (void)addClockValueRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withAtomState:(unsigned char)arg2 forDeviceRowId:(id)arg3;
- (void)addClockValueSet:(id)arg1 withAtomState:(unsigned char)arg2 forDeviceRowId:(id)arg3;
- (id)build;
- (id)init;
- (id)initWithDeviceMapping:(id)arg1 missingAtomsImplied:(bool)arg2;

@end
