/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBAudioData : PBCodable <NSSecureCoding, _SFPBAudioData> {
    NSData * _audioBuffer;
    int  _bitsPerChannel;
    int  _bytesPerFrame;
    int  _bytesPerPacket;
    int  _channelsPerFrame;
    int  _formatFlags;
    NSString * _formatID;
    int  _framesPerPacket;
    int  _reserved;
    double  _sampleRate;
}

@property (nonatomic, copy) NSData *audioBuffer;
@property (nonatomic) int bitsPerChannel;
@property (nonatomic) int bytesPerFrame;
@property (nonatomic) int bytesPerPacket;
@property (nonatomic) int channelsPerFrame;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) int formatFlags;
@property (nonatomic, copy) NSString *formatID;
@property (nonatomic) int framesPerPacket;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int reserved;
@property (nonatomic) double sampleRate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)audioBuffer;
- (int)bitsPerChannel;
- (int)bytesPerFrame;
- (int)bytesPerPacket;
- (int)channelsPerFrame;
- (id)dictionaryRepresentation;
- (int)formatFlags;
- (id)formatID;
- (int)framesPerPacket;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)reserved;
- (double)sampleRate;
- (void)setAudioBuffer:(id)arg1;
- (void)setBitsPerChannel:(int)arg1;
- (void)setBytesPerFrame:(int)arg1;
- (void)setBytesPerPacket:(int)arg1;
- (void)setChannelsPerFrame:(int)arg1;
- (void)setFormatFlags:(int)arg1;
- (void)setFormatID:(id)arg1;
- (void)setFramesPerPacket:(int)arg1;
- (void)setReserved:(int)arg1;
- (void)setSampleRate:(double)arg1;
- (void)writeTo:(id)arg1;

@end