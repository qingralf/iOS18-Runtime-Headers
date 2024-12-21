/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRContentItem : NSObject <NSCopying> {
    NSString * _ancestorIdentifier;
    MRArtwork * _artwork;
    NSDictionary * _artworks;
    NSString * _associatedParticipantIdentifier;
    NSArray * _availableArtworkFormats;
    NSArray * _availableLanguageOptions;
    NSArray * _availableRemoteArtworkFormats;
    NSArray * _currentLanguageOptions;
    NSString * _identifier;
    NSString * _info;
    MRContentItemMetadata * _metadata;
    NSString * _parentIdentifier;
    NSString * _queueIdentifier;
    NSDictionary * _remoteArtworks;
    NSString * _requestIdentifier;
    NSArray * _sections;
    NSArray * _transcriptAlignments;
}

@property (nonatomic, copy) NSString *ancestorIdentifier;
@property (nonatomic, retain) MRArtwork *artwork;
@property (nonatomic, retain) NSDictionary *artworks;
@property (nonatomic, copy) NSString *associatedParticipantIdentifier;
@property (nonatomic, retain) NSArray *availableArtworkFormats;
@property (nonatomic, copy) NSArray *availableLanguageOptions;
@property (nonatomic, retain) NSArray *availableRemoteArtworkFormats;
@property (nonatomic, copy) NSArray *currentLanguageOptions;
@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *info;
@property (nonatomic, copy) MRContentItemMetadata *metadata;
@property (nonatomic, readonly, copy) NSDictionary *nowPlayingInfo;
@property (nonatomic, copy) NSString *parentIdentifier;
@property (nonatomic, copy) NSString *queueIdentifier;
@property (nonatomic, retain) NSDictionary *remoteArtworks;
@property (nonatomic, copy) NSString *requestIdentifier;
@property (nonatomic, copy) NSArray *sections;
@property (nonatomic, readonly) MRContentItem *skeleton;
@property (nonatomic, copy) NSArray *transcriptAlignments;

+ (id)extractedIdentifierFromNowPlayingInfo:(id)arg1;
+ (id)mergeContentItems:(id)arg1;

- (void).cxx_destruct;
- (id)ancestorIdentifier;
- (id)artwork;
- (id)artworks;
- (id)associatedParticipantIdentifier;
- (id)availableArtworkFormats;
- (id)availableLanguageOptions;
- (id)availableRemoteArtworkFormats;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentLanguageOptions;
- (id)data;
- (id)description;
- (id)dictionaryRepresentation;
- (id)identifier;
- (id)info;
- (id)initWithData:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithNowPlayingInfo:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEffectivelyEqual:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metadata;
- (id)nowPlayingInfo;
- (id)parentIdentifier;
- (id)protobufWithEncoding:(long long)arg1;
- (id)queueIdentifier;
- (id)remoteArtworks;
- (id)requestIdentifier;
- (id)sections;
- (void)setAncestorIdentifier:(id)arg1;
- (void)setArtwork:(id)arg1;
- (void)setArtworks:(id)arg1;
- (void)setAssociatedParticipantIdentifier:(id)arg1;
- (void)setAvailableArtworkFormats:(id)arg1;
- (void)setAvailableLanguageOptions:(id)arg1;
- (void)setAvailableRemoteArtworkFormats:(id)arg1;
- (void)setCurrentLanguageOptions:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInfo:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setNowPlayingInfo:(id)arg1 policy:(unsigned char)arg2 request:(id)arg3;
- (void)setParentIdentifier:(id)arg1;
- (void)setQueueIdentifier:(id)arg1;
- (void)setRemoteArtworks:(id)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setTranscriptAlignments:(id)arg1;
- (id)skeleton;
- (id)transcriptAlignments;

@end