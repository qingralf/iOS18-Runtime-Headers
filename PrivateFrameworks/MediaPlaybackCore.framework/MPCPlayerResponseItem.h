/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCPlayerResponseItem : NSObject <MPCPlayerResponseItemMusicAudio> {
    MPCPlayerAudioFormat * _activeFormat;
    long long  _activeFormatJustification;
    NSArray * _alternateFormats;
    MPCPlayerAudioRoute * _audioRoute;
    bool  _autoPlay;
    NSString * _contentItemIdentifier;
    struct { 
        double snapshotTime; 
        double startTime; 
        double endTime; 
        double duration; 
        double elapsedDuration; 
        float rate; 
        float defaultRate; 
        bool isLiveContent; 
        bool isLoading; 
        bool isInTransition; 
    }  _duration;
    MPCPlayerResponseParticipant * _enqueueingParticipant;
    NSString * _explicitBadge;
    NSIndexPath * _indexPath;
    bool  _isFavoritable;
    NSArray * _languageOptionGroups;
    NSString * _localizedDurationString;
    MPModelGenericObject * _metadataObject;
    bool  _placeholder;
    MPCPlayerAudioFormat * _preferredFormat;
    unsigned long long  _preferredTiers;
    NSString * _queueItemIdentifier;
    MPCPlayerResponse * _response;
    long long  _revision;
    unsigned long long  _seekSupport;
}

@property (nonatomic, readonly) MPCPlayerAudioFormat *activeFormat;
@property (nonatomic, readonly) long long activeFormatJustification;
@property (nonatomic, readonly) NSArray *alternateFormats;
@property (nonatomic, readonly) MPCPlayerAudioRoute *audioRoute;
@property (getter=isAutoPlay, nonatomic, readonly) bool autoPlay;
@property (nonatomic, readonly, copy) NSString *contentItemIdentifier;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; bool x8; bool x9; bool x10; } duration;
@property (nonatomic, readonly) MPCPlayerResponseParticipant *enqueueingParticipant;
@property (nonatomic, readonly, copy) NSString *explicitBadge;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic, readonly) NSArray *languageOptionGroups;
@property (nonatomic, readonly, copy) NSString *localizedDurationString;
@property (nonatomic, readonly) MPModelGenericObject *metadataObject;
@property (nonatomic, readonly) <MPCPlayerResponseItemMusicAudio> *musicAudio;
@property (nonatomic, readonly, copy) MPNowPlayingInfoAudioFormat *nowPlayingAudioFormat;
@property (getter=isPlaceholder, nonatomic, readonly) bool placeholder;
@property (nonatomic, readonly) MPCPlayerAudioFormat *preferredFormat;
@property (nonatomic, readonly) unsigned long long preferredTiers;
@property (nonatomic, readonly, copy) NSString *queueItemIdentifier;
@property (nonatomic, readonly) MPCPlayerResponse *response;
@property (nonatomic, readonly) long long revision;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_buildLanguageOptionGroups:(id)arg1 currentLanguageOptions:(id)arg2;
- (unsigned long long)_determineSeekSupport;
- (id)_favoriteCommandWithMediaRemoteCommand:(unsigned int)arg1;
- (id)_feedbackCommandWithMediaRemoteCommand:(unsigned int)arg1;
- (id)_initWithContentItemID:(id)arg1 autoPlay:(bool)arg2;
- (bool)_isDisliked;
- (bool)_isDislikedValueForSong:(id)arg1;
- (bool)_isFavoriteEligible;
- (bool)_isFavoriteValueForSong:(id)arg1;
- (bool)_isFavorited;
- (id)_modelSongMetadataObject;
- (id)_stateDumpObject;
- (id)activeFormat;
- (long long)activeFormatJustification;
- (id)alternateFormats;
- (id)audioRoute;
- (id)contentItemIdentifier;
- (id)description;
- (id)dislikeCommand;
- (struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; bool x8; bool x9; bool x10; })duration;
- (id)enqueueingParticipant;
- (id)explicitBadge;
- (id)indexPath;
- (id)initWithModelGenericObject:(id)arg1 indexPath:(id)arg2 enqueueingParticipant:(id)arg3 response:(id)arg4;
- (bool)isAutoPlay;
- (bool)isPlaceholder;
- (id)languageOptionGroups;
- (id)likeCommand;
- (id)localizedDurationString;
- (id)metadataObject;
- (id)musicAudio;
- (id)nowPlayingAudioFormat;
- (id)playbackRateCommand;
- (id)preferredFormat;
- (unsigned long long)preferredTiers;
- (id)queueItemIdentifier;
- (id)rateCommand;
- (id)remove;
- (id)response;
- (long long)revision;
- (id)seekCommand;
- (id)switchToAlternativeFormat:(id)arg1;
- (id)wishlistCommand;

@end
