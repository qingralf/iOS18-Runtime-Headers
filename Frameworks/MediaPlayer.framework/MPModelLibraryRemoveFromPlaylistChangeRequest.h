/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelLibraryRemoveFromPlaylistChangeRequest : MPModelLibraryChangeRequest {
    NSArray * _entriesToRemove;
    MPMediaLibrary * _mediaLibrary;
    MPModelPlaylist * _playlist;
}

@property (nonatomic, readonly) NSArray *entriesToRemove;
@property (nonatomic, retain) MPMediaLibrary *mediaLibrary;
@property (nonatomic, readonly) MPModelPlaylist *playlist;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)entriesToRemove;
- (id)initWithPlaylist:(id)arg1 inMediaLibrary:(id)arg2 andEntriesToRemove:(id)arg3;
- (id)mediaLibrary;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (void)performWithResponseHandler:(id /* block */)arg1;
- (id)playlist;
- (void)setMediaLibrary:(id)arg1;

@end
