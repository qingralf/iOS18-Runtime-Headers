/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Portrait.framework/Portrait
 */

@interface PTAssetDataBufferFrame : NSObject <PTAssetFrame> {
    struct __CVBuffer { } * _dataBuffer;
    unsigned long long  _index;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _time;
}

@property (nonatomic) struct __CVBuffer { }*dataBuffer;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long index;
@property (readonly) Class superclass;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } time;

- (struct __CVBuffer { }*)dataBuffer;
- (void)dealloc;
- (unsigned long long)index;
- (void)setDataBuffer:(struct __CVBuffer { }*)arg1;
- (void)setIndex:(unsigned long long)arg1;
- (void)setTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;

@end