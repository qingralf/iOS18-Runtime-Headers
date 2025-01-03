/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface _GCDevicePhysicalInputTouchedStateInput : _GCDevicePhysicalInputView <GCTouchedStateInput> {
    unsigned long long  _sourcesSlot;
    unsigned long long  _touchedChangedHandlerSlot;
    unsigned long long  _touchedSlot;
    unsigned long long  _touchedTimestampSlot;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) double lastTouchedStateLatency;
@property (readonly) double lastTouchedStateTimestamp;
@property (readonly, copy) NSSet *sources;
@property (readonly) Class superclass;
@property (getter=isTouched, readonly) bool touched;
@property (copy) id /* block */ touchedDidChangeHandler;

+ (unsigned short)updateContextSize;

- (bool)_setTouchedDidChangeHandler:(id /* block */)arg1;
- (id /* block */)_touchedDidChangeHandler;
- (id)description;
- (id)init;
- (id)initWithParameters:(id)arg1;
- (id)initWithTemplate:(id)arg1 context:(id)arg2;
- (bool)isTouched;
- (double)lastTouchedStateLatency;
- (double)lastTouchedStateTimestamp;
- (void)postCommit:(const void*)arg1 sender:(id)arg2;
- (void)preCommit:(const void*)arg1 sender:(id)arg2;
- (void)setTouchedDidChangeHandler:(id /* block */)arg1;
- (id)sources;
- (id /* block */)touchedDidChangeHandler;
- (bool)update:(void*)arg1 forUsages:(unsigned long long)arg2 with:(id)arg3;

@end
