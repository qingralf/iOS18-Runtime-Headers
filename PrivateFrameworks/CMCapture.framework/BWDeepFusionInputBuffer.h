/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWDeepFusionInputBuffer : NSObject {
    struct __CVBuffer { } * _buffer;
    unsigned long long  _captureFrameFlags;
    struct __CVBuffer { } * _lscGainMap;
    NSDictionary * _lscGainMapParameters;
    NSDictionary * _metadata;
    unsigned long long  _type;
}

@property (nonatomic, readonly) struct __CVBuffer { }*buffer;
@property (nonatomic, readonly) unsigned long long captureFrameFlags;
@property (nonatomic, readonly) struct __CVBuffer { }*lscGainMap;
@property (nonatomic, readonly) NSDictionary *lscGainMapParameters;
@property (nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic, readonly) unsigned long long type;

- (struct __CVBuffer { }*)buffer;
- (unsigned long long)captureFrameFlags;
- (void)dealloc;
- (id)initWithBuffer:(struct __CVBuffer { }*)arg1 type:(unsigned long long)arg2 captureFrameFlags:(unsigned long long)arg3 metadata:(id)arg4 lscGainMap:(struct __CVBuffer { }*)arg5 lscGainMapParameters:(id)arg6;
- (struct __CVBuffer { }*)lscGainMap;
- (id)lscGainMapParameters;
- (id)metadata;
- (void)releasePixelBuffers;
- (unsigned long long)type;

@end