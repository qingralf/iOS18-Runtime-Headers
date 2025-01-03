/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPInlineMediaPlaybackInformation : NSObject {
    LPAudio * _audio;
    LPLyricExcerptMetadata * _lyricExcerpt;
    NSArray * _offers;
    NSString * _persistentIdentifier;
    NSURL * _previewURL;
    NSString * _storeIdentifier;
    NSString * _storefrontIdentifier;
    unsigned long long  _type;
}

@property (nonatomic, readonly, retain) LPAudio *audio;
@property (nonatomic, readonly) bool isAvailableForAnonymousDownload;
@property (nonatomic, readonly, retain) LPLyricExcerptMetadata *lyricExcerpt;
@property (nonatomic, readonly, copy) NSArray *offers;
@property (nonatomic, readonly, copy) NSString *persistentIdentifier;
@property (nonatomic, readonly, copy) NSURL *previewURL;
@property (nonatomic, readonly, copy) NSString *storeIdentifier;
@property (nonatomic, readonly, copy) NSString *storefrontIdentifier;
@property (nonatomic, readonly) unsigned long long type;

+ (id)_inlineiTunesMediaPlaybackInformationWithType:(unsigned long long)arg1 storeIdentifier:(id)arg2 storefrontIdentifier:(id)arg3 offers:(id)arg4 previewURL:(id)arg5 lyricExcerpt:(id)arg6;
+ (id)albumPlaybackInformationWithStoreIdentifier:(id)arg1 storefrontIdentifier:(id)arg2 offers:(id)arg3;
+ (id)audioBookPlaybackInformationWithStoreIdentifier:(id)arg1 storefrontIdentifier:(id)arg2 previewURL:(id)arg3 persistentIdentifier:(id)arg4;
+ (id)audioFilePlaybackInformationWithAudio:(id)arg1;
+ (id)playlistPlaybackInformationWithStoreIdentifier:(id)arg1 storefrontIdentifier:(id)arg2;
+ (id)podcastEpisodePlaybackInformationWithStoreIdentifier:(id)arg1 storefrontIdentifier:(id)arg2 offers:(id)arg3;
+ (id)podcastPlaybackInformationWithStoreIdentifier:(id)arg1 storefrontIdentifier:(id)arg2 offers:(id)arg3;
+ (id)radioPlaybackInformationWithStoreIdentifier:(id)arg1 storefrontIdentifier:(id)arg2;
+ (id)songPlaybackInformationWithStoreIdentifier:(id)arg1 storefrontIdentifier:(id)arg2 offers:(id)arg3 previewURL:(id)arg4 lyricExcerpt:(id)arg5;

- (void).cxx_destruct;
- (id)audio;
- (unsigned long long)availability;
- (bool)isAvailableForAnonymousDownload;
- (id)lyricExcerpt;
- (id)offers;
- (id)persistentIdentifier;
- (id)previewURL;
- (id)storeIdentifier;
- (id)storefrontIdentifier;
- (unsigned long long)type;

@end
