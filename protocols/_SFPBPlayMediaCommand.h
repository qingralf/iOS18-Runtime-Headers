/* Generated by RuntimeBrowser.
 */

@protocol _SFPBPlayMediaCommand <NSObject>

@required

- (_SFPBAudioData *)audioData;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (_SFPBMediaMetadata *)mediaMetadata;
- (int)playbackLocation;
- (void)setAudioData:(_SFPBAudioData *)arg1;
- (void)setMediaMetadata:(_SFPBMediaMetadata *)arg1;
- (void)setPlaybackLocation:(int)arg1;
- (void)setShouldPause:(bool)arg1;
- (bool)shouldPause;

@end