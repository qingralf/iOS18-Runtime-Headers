/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
 */

@interface MIOSEITrackReader : NSObject {
    unsigned int  _codec;
    bool  _drainBeforeRead;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _maxCurrentPts;
    NSMutableArray * _seiItemsBuffer;
    AVAssetReaderOutput * _trackOutput;
}

@property unsigned int codec;
@property bool drainBeforeRead;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } maxCurrentPts;
@property (retain) NSMutableArray *seiItemsBuffer;
@property (retain) AVAssetReaderOutput *trackOutput;

- (void).cxx_destruct;
- (unsigned int)codec;
- (id)copyNextSEIPts:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1 deserialize:(bool)arg2 error:(id*)arg3;
- (bool)drainBeforeRead;
- (id)extractDebugSEIFromBuffer:(struct OpaqueCMBlockBuffer { }*)arg1 codecType:(unsigned int)arg2;
- (id)findNALUInData:(char *)arg1 length:(unsigned long long)arg2 isHEVC:(bool)arg3;
- (id)initWithVideoTrack:(id)arg1 assetReader:(id)arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxCurrentPts;
- (bool)parseSEIInData:(char *)arg1 length:(unsigned int)arg2 output:(char *)arg3 outputSize:(unsigned int*)arg4;
- (id)popFrontPts:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1;
- (id)readNextSEIPts:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1 deserialize:(bool)arg2 error:(id*)arg3;
- (struct OpaqueCMBlockBuffer { }*)readNextValidBlockBufferPts:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1;
- (unsigned int)removeEPBFrom:(char *)arg1 length:(unsigned int)arg2 outBuffer:(char *)arg3;
- (id)seiItemsBuffer;
- (void)setCodec:(unsigned int)arg1;
- (void)setDrainBeforeRead:(bool)arg1;
- (void)setMaxCurrentPts:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setSeiItemsBuffer:(id)arg1;
- (void)setTrackOutput:(id)arg1;
- (id)trackOutput;

@end
