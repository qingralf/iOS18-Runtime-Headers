/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFAudioData : NSObject <NSCopying, NSSecureCoding, SFAudioData> {
    NSData * _audioBuffer;
    NSNumber * _bitsPerChannel;
    NSNumber * _bytesPerFrame;
    NSNumber * _bytesPerPacket;
    NSNumber * _channelsPerFrame;
    NSNumber * _formatFlags;
    NSString * _formatID;
    NSNumber * _framesPerPacket;
    struct { 
        unsigned int sampleRate : 1; 
    }  _has;
    NSNumber * _reserved;
    double  _sampleRate;
}

@property (nonatomic, copy) NSData *audioBuffer;
@property (nonatomic, copy) NSNumber *bitsPerChannel;
@property (nonatomic, copy) NSNumber *bytesPerFrame;
@property (nonatomic, copy) NSNumber *bytesPerPacket;
@property (nonatomic, copy) NSNumber *channelsPerFrame;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSNumber *formatFlags;
@property (nonatomic, copy) NSString *formatID;
@property (nonatomic, copy) NSNumber *framesPerPacket;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSNumber *reserved;
@property (nonatomic) double sampleRate;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)audioBuffer;
- (id)bitsPerChannel;
- (id)bytesPerFrame;
- (id)bytesPerPacket;
- (id)channelsPerFrame;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)formatFlags;
- (id)formatID;
- (id)framesPerPacket;
- (bool)hasSampleRate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)reserved;
- (double)sampleRate;
- (void)setAudioBuffer:(id)arg1;
- (void)setBitsPerChannel:(id)arg1;
- (void)setBytesPerFrame:(id)arg1;
- (void)setBytesPerPacket:(id)arg1;
- (void)setChannelsPerFrame:(id)arg1;
- (void)setFormatFlags:(id)arg1;
- (void)setFormatID:(id)arg1;
- (void)setFramesPerPacket:(id)arg1;
- (void)setReserved:(id)arg1;
- (void)setSampleRate:(double)arg1;

@end
