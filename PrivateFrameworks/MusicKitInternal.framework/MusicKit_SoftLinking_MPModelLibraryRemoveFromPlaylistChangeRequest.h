/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicKitInternal.framework/MusicKitInternal
 */

@interface MusicKit_SoftLinking_MPModelLibraryRemoveFromPlaylistChangeRequest : MusicKitInternal_SoftLinking_MPModelLibraryPlaylistRequest {
    MPModelPlaylist * _underlyingPlaylist;
    MPModelLibraryRemoveFromPlaylistChangeRequest * _underlyingRequest;
}

- (void).cxx_destruct;
- (id)initWithPlaylist:(id)arg1 entriesToRemove:(id)arg2;
- (void)performWithCompletionPolicy:(long long)arg1 completionHandler:(id /* block */)arg2;

@end