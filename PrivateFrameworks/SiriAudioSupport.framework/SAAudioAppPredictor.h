/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriAudioSupport.framework/SiriAudioSupport
 */

@interface SAAudioAppPredictor : NSObject {
    void caller;
    void selector;
}

+ (void)unsafeReleaseModelWithCompletion:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)disambiguationSelectedWithBundleIdentifier:(id)arg1 requestId:(id)arg2;
- (id)init;
- (id)initWithCaller:(long long)arg1;
- (void)predictWithSearch:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)warmWithCompletion:(id /* block */)arg1;

@end
