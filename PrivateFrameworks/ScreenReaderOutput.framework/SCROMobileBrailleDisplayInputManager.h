/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@interface SCROMobileBrailleDisplayInputManager : NSObject <SCROBrailleDisplayInputManagerProtocol> {
    NSSet * _brailleKeys;
    NSBundle * _bundle;
    NSLock * _contentLock;
    NSMutableDictionary * _displayInfoDict;
    NSArray * _eightDotCommands;
    NSArray * _sixDotCommands;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_bundle;
- (id)_commandForHidUsage:(id)arg1;
- (id)_commandsFromBrailleInputMode:(int)arg1;
- (id)_eightDotCommands;
- (id)_sixDotCommands;
- (id)_updatedCommandDictionaryForCommandDictionary:(id)arg1;
- (id)_updatedCommandForCommand:(id)arg1;
- (id)buttonNamesAtIndex:(unsigned long long)arg1 forDisplayWithToken:(int)arg2;
- (id)buttonNamesForInputIdentifier:(id)arg1 forDisplayWithToken:(int)arg2;
- (id)commandAtIndex:(unsigned long long)arg1 forDisplayWithToken:(int)arg2;
- (id)commandDictionaryForDisplayWithToken:(int)arg1;
- (id)commandForBrailleKey:(id)arg1;
- (void)configureWithDriverConfiguration:(id)arg1;
- (unsigned long long)countForDisplayWithToken:(int)arg1;
- (struct __CFString { }*)defaultsKeyForModelIdentifier:(id)arg1;
- (id)driverIdentifierForDisplayWithToken:(int)arg1;
- (id)init;
- (id)inputIdentifierAtIndex:(unsigned long long)arg1 forDisplayWithToken:(int)arg2;
- (id)modelIdentifierForDisplayWithToken:(int)arg1;
- (void)removeAllUserAssignedCommandsForDisplayWithToken:(int)arg1;
- (void)setCommand:(id)arg1 forBrailleKey:(id)arg2;
- (void)setCommand:(id)arg1 forInputIdentifier:(id)arg2 forDisplayWithToken:(int)arg3;
- (void)setUserDefaults:(id)arg1 forModelIdentifier:(id)arg2;
- (unsigned long long)userAssignedCommandCountForDisplayWithToken:(int)arg1;
- (id)userDefaultsForModelIdentifier:(id)arg1;

@end
