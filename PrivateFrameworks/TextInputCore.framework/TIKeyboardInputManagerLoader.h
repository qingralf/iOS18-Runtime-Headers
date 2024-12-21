/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIKeyboardInputManagerLoader : NSObject {
    NSMutableDictionary * _activeInputManagers;
    NSMutableDictionary * _availableInputManagers;
    TIKeyboardInputManagerLoaderSyncHelper * _helper;
    NSXPCConnection * _interactingConnection;
    NSMutableDictionary * _lastUsedDate;
}

@property (nonatomic) NSXPCConnection *interactingConnection;

+ (id)sharedLoader;

- (void).cxx_destruct;
- (id)activeInputModeIdentifiers;
- (void)cacheInputManager:(id)arg1 switchingToInputMode:(id)arg2;
- (id)currentLoadedInputModes;
- (void)dealloc;
- (bool)hasActiveInputManagers;
- (id)init;
- (id)inputManagerForInputMode:(id)arg1 withKeyboardState:(id)arg2 class:(Class)arg3;
- (id)interactingConnection;
- (bool)isActiveInputManager:(id)arg1;
- (void)prepareForKeyboardActivity;
- (void)prepareForKeyboardInactivity;
- (void)reduceInputManagerCacheToSize:(int)arg1 switchingToInputMode:(id)arg2;
- (void)registerMaintenanceActivity;
- (void)releaseAllInputManagers;
- (void)releaseAllLanguageModelBuffers;
- (void)removeInputModeFromAllContainers:(id)arg1;
- (void)setInteractingConnection:(id)arg1;
- (void)startSyncHelper;

@end