/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPQueueState : AceObject <SABackgroundContextObject>

@property (nonatomic, copy) NSString *applicationIdentifier;
@property (nonatomic, retain) SANPVideoAudioAndSubtitleLanguageOptions *audioAndSubtitleLanguageOptions;
@property (nonatomic) bool currentItemSteerable;
@property (nonatomic, copy) NSDictionary *currentListeningToContainer;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SAMPMediaItem *listeningToItem;
@property (nonatomic, retain) SAMPMediaItem *nextListeningToItem;
@property (nonatomic, retain) SANPCommandInfo *nowPlayingCommandInfo;
@property (nonatomic, retain) SAMPNowPlayingQueuePosition *playbackQueuePosition;
@property (nonatomic, copy) NSNumber *playbackRate;
@property (nonatomic, retain) SAMPMediaItem *previousListenedToItem;
@property (nonatomic, copy) NSNumber *shuffleEnabled;
@property (nonatomic, copy) NSString *source;
@property (nonatomic) int state;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)queueState;
+ (id)queueStateWithDictionary:(id)arg1 context:(id)arg2;

- (id)applicationIdentifier;
- (id)audioAndSubtitleLanguageOptions;
- (bool)currentItemSteerable;
- (id)currentListeningToContainer;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)listeningToItem;
- (id)nextListeningToItem;
- (id)nowPlayingCommandInfo;
- (id)playbackQueuePosition;
- (id)playbackRate;
- (id)previousListenedToItem;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setAudioAndSubtitleLanguageOptions:(id)arg1;
- (void)setCurrentItemSteerable:(bool)arg1;
- (void)setCurrentListeningToContainer:(id)arg1;
- (void)setListeningToItem:(id)arg1;
- (void)setNextListeningToItem:(id)arg1;
- (void)setNowPlayingCommandInfo:(id)arg1;
- (void)setPlaybackQueuePosition:(id)arg1;
- (void)setPlaybackRate:(id)arg1;
- (void)setPreviousListenedToItem:(id)arg1;
- (void)setShuffleEnabled:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setState:(int)arg1;
- (id)shuffleEnabled;
- (id)source;
- (int)state;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (void)_af_setNowPlayingInfo:(id)arg1 mediaType:(long long)arg2;
- (void)_af_setShuffleModeFromNowPlayingInfo:(id)arg1;
- (void)_af_validateAndFinalize;
- (id)_mediaItemIdURLFromNowPlayingInfo:(id)arg1;
- (id)_mediaTypeFromNowPlayingInfo:(id)arg1;

@end
