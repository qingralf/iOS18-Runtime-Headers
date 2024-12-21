/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDAudioStreamInterfaceDataSource : HMFObject <HMDAudioStreamInterfaceDataSource, HMFLogging>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isMuted) bool muted;
@property (readonly) Class superclass;
@property (readonly) bool supportsPHASE;
@property (readonly) bool usesGlobalMuting;

+ (id)logCategory;

- (void)createPHASEEngineAndControllerForStreamToken:(long long)arg1 completion:(id /* block */)arg2;
- (bool)isMuted;
- (void)setAudioSessionPropertiesWithShouldAllowSystemSounds:(bool)arg1 hostProcessBundleIdentifier:(id)arg2;
- (void)setMuted:(bool)arg1;
- (bool)supportsPHASE;
- (bool)usesGlobalMuting;

@end