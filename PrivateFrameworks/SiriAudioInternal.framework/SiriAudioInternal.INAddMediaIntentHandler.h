/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriAudioInternal.framework/SiriAudioInternal
 */

@interface SiriAudioInternal.INAddMediaIntentHandler : NSObject <INAddMediaIntentHandling> {
    void aceServiceInvoker;
    void appIntentInvoker;
    void instanceReference;
    void library;
    void notificationProvider;
    void nowPlaying;
    void onscreenEntityProvider;
    void provider;
    void subscription;
}

- (void).cxx_destruct;
- (void)handleAddMedia:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)resolveMediaDestinationForAddMedia:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveMediaItemsForAddMedia:(id)arg1 withCompletion:(id /* block */)arg2;

@end