/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
 */

@interface MIDIUMPMutableEndpoint : MIDIUMPEndpoint {
    bool  _isEnabled;
    NSArray * _mutableFunctionBlocks;
}

@property (nonatomic, readonly) bool isEnabled;
@property (nonatomic, copy) NSArray *mutableFunctionBlocks;

+ (id)description;

- (void).cxx_destruct;
- (bool)changeStreamProtocol:(int)arg1;
- (bool)deserialize:(id)arg1;
- (bool)disableFunctionBlock:(id)arg1;
- (bool)enableFunctionBlock:(id)arg1;
- (id)initWithName:(id)arg1 deviceInfo:(id)arg2 productInstanceID:(id)arg3 MIDIProtocol:(int)arg4 destinationCallback:(id /* block */)arg5;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (id)mutableFunctionBlocks;
- (bool)registerFunctionBlocks:(id)arg1 markAsStatic:(bool)arg2 error:(id*)arg3;
- (bool)registerWithServer;
- (id)serializeDescription;
- (bool)setEnabled:(bool)arg1 error:(id*)arg2;
- (void)setMutableFunctionBlocks:(id)arg1;
- (bool)setName:(id)arg1 error:(id*)arg2;

@end
