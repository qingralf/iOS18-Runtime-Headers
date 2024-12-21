/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
 */

@interface MIDIUMPMutableFunctionBlock : MIDIUMPFunctionBlock

@property (nonatomic, readonly) MIDIUMPMutableEndpoint *UMPEndpoint;

+ (id)description;

- (id)initWithName:(id)arg1 direction:(int)arg2 firstGroup:(unsigned char)arg3 totalGroupsSpanned:(unsigned char)arg4 maxSysEx8Streams:(unsigned char)arg5 MIDI1Info:(int)arg6 UIHint:(int)arg7 isEnabled:(bool)arg8;
- (bool)reconfigureWithFirstGroup:(unsigned char)arg1 direction:(int)arg2 MIDI1Info:(int)arg3 UIHint:(int)arg4 error:(id*)arg5;
- (bool)registerWithServer;
- (bool)setEnabled:(bool)arg1 error:(id*)arg2;
- (void)setFunctionBlockID:(unsigned char)arg1;
- (bool)setName:(id)arg1 error:(id*)arg2;

@end