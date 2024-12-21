/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LiveTranscription.framework/LiveTranscription
 */

@interface AXLTLanguageAssetManager : NSObject

@property (nonatomic, readonly) NSLocale *locale;

+ (id)sharedInstance;

- (void)deleteSpeechAssetForTaskHint:(long long)arg1;
- (void)downloadSpeechAssetForTaskHint:(long long)arg1 progress:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)languageAssetAvaliableForTaskHint:(long long)arg1 completion:(id /* block */)arg2;
- (id)locale;

@end