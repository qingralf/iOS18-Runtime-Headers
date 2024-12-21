/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFPlayMediaCommand : SFCommand <NSCopying, NSSecureCoding, SFPlayMediaCommand> {
    SFAudioData * _audioData;
    struct { 
        unsigned int playbackLocation : 1; 
        unsigned int shouldPause : 1; 
    }  _has;
    SFMediaMetadata * _mediaMetadata;
    int  _playbackLocation;
    bool  _shouldPause;
}

@property (nonatomic, retain) SFAudioData *audioData;
@property (nonatomic, copy) NSData *backendData;
@property (nonatomic, copy) NSString *commandDetail;
@property (nonatomic, retain) SFCommandReference *commandReference;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SFMediaMetadata *mediaMetadata;
@property (nonatomic, retain) SFTopic *normalizedTopic;
@property (nonatomic) int playbackLocation;
@property (nonatomic) bool shouldPause;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)audioData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasPlaybackLocation;
- (bool)hasShouldPause;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)mediaMetadata;
- (int)playbackLocation;
- (void)setAudioData:(id)arg1;
- (void)setMediaMetadata:(id)arg1;
- (void)setPlaybackLocation:(int)arg1;
- (void)setShouldPause:(bool)arg1;
- (bool)shouldPause;

// Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec

- (int)_cpCommandType;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (Class)_searchUICommandHandlerClass;

@end