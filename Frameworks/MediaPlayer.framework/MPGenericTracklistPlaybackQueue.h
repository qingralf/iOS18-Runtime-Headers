/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPGenericTracklistPlaybackQueue : MPRemotePlaybackQueue {
    MPIdentifierSet * _collectionIdentifierSet;
    NSString * _firstTrackIdentifier;
    long long  _repeatType;
    long long  _shuffleType;
    NSArray * _trackIdentifiers;
}

@property (nonatomic, readonly) MPIdentifierSet *collectionIdentifierSet;
@property (nonatomic, readonly) NSString *firstTrackIdentifier;
@property (nonatomic, readonly) long long repeatType;
@property (nonatomic, readonly) long long shuffleType;
@property (nonatomic, readonly) NSArray *trackIdentifiers;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)collectionIdentifierSet;
- (id)description;
- (id)firstTrackIdentifier;
- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue { }*)arg1 options:(id)arg2;
- (long long)repeatType;
- (long long)shuffleType;
- (id)trackIdentifiers;
- (bool)verifyWithError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (void)getMusicPlaybackContextWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;

@end
