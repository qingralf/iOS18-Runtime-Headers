/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriAudioInternal.framework/SiriAudioInternal
 */

@interface SiriAudioInternal.INUpdateMediaAffinityIntentHandler : NSObject <INUpdateMediaAffinityIntentHandling> {
    void favoriteEntityProvider;
    void mediaRemoteAPIProvider;
    void nowPlayingProvider;
    void playbackController;
}

- (void).cxx_destruct;
- (void)handleUpdateMediaAffinity:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)resolveMediaItemsForUpdateMediaAffinity:(id)arg1 withCompletion:(id /* block */)arg2;

@end
