/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface _GCDevicePhysicalInputCapacitiveDirectionPadElement : _GCDevicePhysicalInputClickableDirectionPadElement {
    unsigned long long  _touchedInputSlot;
    unsigned long long  _touchedValueFieldSlot;
}

+ (unsigned short)updateContextSize;

- (id)description;
- (id)initWithParameters:(id)arg1;
- (id)initWithTemplate:(id)arg1 context:(id)arg2;
- (bool)isEqualToElement:(id)arg1;
- (void)postCommit:(const void*)arg1 sender:(id)arg2;
- (void)preCommit:(const void*)arg1 sender:(id)arg2;
- (id)touchedInput;
- (bool)update:(void*)arg1 forGamepadEvent:(id)arg2 withTimestamp:(double)arg3;
- (bool)update:(void*)arg1 forUsages:(unsigned long long)arg2 with:(id)arg3;

@end