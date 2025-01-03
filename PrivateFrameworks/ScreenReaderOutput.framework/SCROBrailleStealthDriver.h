/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@interface SCROBrailleStealthDriver : NSObject <SCROBrailleDriverProtocol> {
    bool  _isDriverLoaded;
    long long  _mainSize;
    NSString * _modelIdentifier;
    long long  _statusSize;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)brailleInputMode;
- (void)dealloc;
- (id)getInputEvents;
- (id)init;
- (unsigned long long)interfaceVersion;
- (bool)isDriverLoaded;
- (bool)isInputEnabled;
- (bool)isSleeping;
- (int)loadDriverWithIOElement:(id)arg1;
- (long long)mainSize;
- (id)modelIdentifier;
- (bool)postsKeyboardEvents;
- (bool)setMainCells:(const char *)arg1 length:(long long)arg2;
- (bool)setStatusCells:(const char *)arg1 length:(long long)arg2;
- (long long)statusSize;
- (bool)supportsBlinkingCursor;
- (bool)unloadDriver;

@end
