/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ShazamKit.framework/ShazamKit
 */

@interface SHAssetUtilities : NSObject

+ (bool)buffersFromAudioFile:(id)arg1 format:(id)arg2 accumulator:(id /* block */)arg3 error:(id*)arg4;
+ (void)mixedTracksFromAsset:(id)arg1 format:(id)arg2 accumulator:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
+ (id)pcmBufferFromAudioFile:(id)arg1 outputFormat:(id)arg2 durationToRead:(double)arg3 error:(id*)arg4;
+ (id)pcmBufferFromAudioFile:(id)arg1 outputFormat:(id)arg2 error:(id*)arg3;

@end