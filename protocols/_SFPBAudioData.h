/* Generated by RuntimeBrowser.
 */

@protocol _SFPBAudioData <NSObject>

@required

- (NSData *)audioBuffer;
- (int)bitsPerChannel;
- (int)bytesPerFrame;
- (int)bytesPerPacket;
- (int)channelsPerFrame;
- (int)formatFlags;
- (NSString *)formatID;
- (int)framesPerPacket;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (int)reserved;
- (double)sampleRate;
- (void)setAudioBuffer:(NSData *)arg1;
- (void)setBitsPerChannel:(int)arg1;
- (void)setBytesPerFrame:(int)arg1;
- (void)setBytesPerPacket:(int)arg1;
- (void)setChannelsPerFrame:(int)arg1;
- (void)setFormatFlags:(int)arg1;
- (void)setFormatID:(NSString *)arg1;
- (void)setFramesPerPacket:(int)arg1;
- (void)setReserved:(int)arg1;
- (void)setSampleRate:(double)arg1;

@end