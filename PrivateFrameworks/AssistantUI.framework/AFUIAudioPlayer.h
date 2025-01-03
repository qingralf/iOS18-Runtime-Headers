/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@interface AFUIAudioPlayer : NSObject <AVAudioPlayerDelegate> {
    NSUUID * _conversationItemIdentifier;
    bool  _deactivateAudioSessionOnPlaybackFinished;
    <AFUIAudioPlayerDelegate> * _delegate;
    AceObject * _playbackCommand;
    AVAudioPlayer * _player;
}

@property (nonatomic) NSUUID *conversationItemIdentifier;
@property (nonatomic) bool deactivateAudioSessionOnPlaybackFinished;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <AFUIAudioPlayerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AceObject *playbackCommand;
@property (getter=_player, setter=_setPlayer:, nonatomic, retain) AVAudioPlayer *player;
@property (readonly) Class superclass;

+ (id)audioMessagePlayer;
+ (id)voicemailPlayer;

- (void).cxx_destruct;
- (id)_audioCategory;
- (unsigned long long)_audioOptions;
- (id)_audioURL;
- (id)_player;
- (void)_setPlayer:(id)arg1;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(bool)arg2;
- (id)conversationItemIdentifier;
- (bool)deactivateAudioSessionOnPlaybackFinished;
- (id)delegate;
- (id)playbackCommand;
- (void)setConversationItemIdentifier:(id)arg1;
- (void)setDeactivateAudioSessionOnPlaybackFinished:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPlaybackCommand:(id)arg1;
- (void)startPlaying;
- (void)stopPlaying;

@end
