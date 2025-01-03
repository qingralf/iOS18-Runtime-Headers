/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisionCore.framework/VisionCore
 */

@interface VisionCoreISPInferenceNetworkPostProcessingOutput : NSObject {
    NSArray * _fullBodyResults;
    struct __CVBuffer { } * _hairImageBuffer;
    unsigned int  _hairImageBufferOrientation;
    NSArray * _hands;
    struct __CVBuffer { } * _personImageBuffer;
    unsigned int  _personImageBufferOrientation;
    struct __CVBuffer { } * _salientPersonImageBuffer;
    unsigned int  _salientPersonImageBufferOrientation;
    struct __CVBuffer { } * _skinImageBuffer;
    unsigned int  _skinImageBufferOrientation;
    struct __CVBuffer { } * _skyImageBuffer;
    unsigned int  _skyImageBufferOrientation;
}

@property (nonatomic, retain) NSArray *fullBodyResults;
@property (nonatomic, readonly) struct __CVBuffer { }*hairImageBuffer;
@property (nonatomic, readonly) unsigned int hairImageBufferOrientation;
@property (nonatomic, retain) NSArray *hands;
@property (nonatomic, readonly) struct __CVBuffer { }*personImageBuffer;
@property (nonatomic, readonly) unsigned int personImageBufferOrientation;
@property (nonatomic, readonly) struct __CVBuffer { }*salientPersonImageBuffer;
@property (nonatomic, readonly) unsigned int salientPersonImageBufferOrientation;
@property (nonatomic, readonly) struct __CVBuffer { }*skinImageBuffer;
@property (nonatomic, readonly) unsigned int skinImageBufferOrientation;
@property (nonatomic, readonly) struct __CVBuffer { }*skyImageBuffer;
@property (nonatomic, readonly) unsigned int skyImageBufferOrientation;

- (void).cxx_destruct;
- (void)dealloc;
- (id)fullBodyResults;
- (struct __CVBuffer { }*)hairImageBuffer;
- (unsigned int)hairImageBufferOrientation;
- (id)hands;
- (id)initWithPostProcessedPersonImageBuffer:(struct __CVBuffer { }*)arg1 personImageOrientation:(unsigned int)arg2 salientPersonImageBuffer:(struct __CVBuffer { }*)arg3 salientPersonImageBufferOrientation:(unsigned int)arg4 skinImageBuffer:(struct __CVBuffer { }*)arg5 skinImageBufferOrientation:(unsigned int)arg6 hairImageBuffer:(struct __CVBuffer { }*)arg7 hairImageBufferOrientation:(unsigned int)arg8 skyImageBuffer:(struct __CVBuffer { }*)arg9 skyImageBufferOrientation:(unsigned int)arg10;
- (struct __CVBuffer { }*)personImageBuffer;
- (unsigned int)personImageBufferOrientation;
- (struct __CVBuffer { }*)salientPersonImageBuffer;
- (unsigned int)salientPersonImageBufferOrientation;
- (void)setFullBodyResults:(id)arg1;
- (void)setHands:(id)arg1;
- (struct __CVBuffer { }*)skinImageBuffer;
- (unsigned int)skinImageBufferOrientation;
- (struct __CVBuffer { }*)skyImageBuffer;
- (unsigned int)skyImageBufferOrientation;

@end
