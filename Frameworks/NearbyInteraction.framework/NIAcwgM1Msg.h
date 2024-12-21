/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NearbyInteraction.framework/NearbyInteraction
 */

@interface NIAcwgM1Msg : NSObject <NSCopying, NSSecureCoding> {
    unsigned char  _channelBitmask;
    unsigned char  _finalData2Bitmask;
    NSArray * _supportedPulseShapeCombos;
    NSArray * _supportedUwbConfigIds;
    unsigned int  _uwbSessionId;
}

@property (nonatomic, readonly) unsigned char channelBitmask;
@property (nonatomic, readonly) unsigned char finalData2Bitmask;
@property (nonatomic, readonly) NSArray *supportedPulseShapeCombos;
@property (nonatomic, readonly) NSArray *supportedUwbConfigIds;
@property (nonatomic, readonly) unsigned int uwbSessionId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned char)channelBitmask;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned char)finalData2Bitmask;
- (id)initWithCoder:(id)arg1;
- (id)initWithSupportedUwbConfigIds:(id)arg1 supportedPulseShapeCombos:(id)arg2 channelBitmask:(unsigned char)arg3 uwbSessionId:(unsigned int)arg4;
- (id)initWithSupportedUwbConfigIds:(id)arg1 supportedPulseShapeCombos:(id)arg2 channelBitmask:(unsigned char)arg3 uwbSessionId:(unsigned int)arg4 finalData2Bitmask:(unsigned char)arg5;
- (id)supportedPulseShapeCombos;
- (id)supportedUwbConfigIds;
- (struct AcwgM1MsgStruct { struct vector<unsigned short, std::allocator<unsigned short>> { unsigned short *x_1_1_1; unsigned short *x_1_1_2; struct __compressed_pair<unsigned short *, std::allocator<unsigned short>> { unsigned short *x_3_2_1; } x_1_1_3; } x1; struct vector<unsigned char, std::allocator<unsigned char>> { char *x_2_1_1; char *x_2_1_2; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *x_3_2_1; } x_2_1_3; } x2; unsigned char x3; unsigned int x4; unsigned char x5; })toStruct;
- (unsigned int)uwbSessionId;

@end