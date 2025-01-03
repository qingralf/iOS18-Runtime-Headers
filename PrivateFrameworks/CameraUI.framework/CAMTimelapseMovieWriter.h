/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMTimelapseMovieWriter : NSObject <CAMTimelapseMovieWriterProtocol> {
    NSMutableDictionary * __availableImageData;
    NSMutableDictionary * __availablePixelBuffers;
    id /* block */  __completion;
    long long  __currentOutputFrameIndex;
    NSArray * __frameFilePaths;
    long long  __framesPerSecond;
    NSOperationQueue * __imageDecodeQueue;
    NSOperationQueue * __imageReadQueue;
    NSMutableSet * __inFlightReadFrameIndexes;
    NSObject<OS_dispatch_queue> * __movieWritingQueue;
    long long  __nextReadFileIndex;
    long long  __nextWriteFileIndex;
    AVAssetWriterInputPixelBufferAdaptor * __pixelBufferAdaptor;
    long long  __residentImageDataCount;
    long long  __residentPixelBufferCount;
    NSObject<OS_dispatch_queue> * __synchronizationQueue;
    AVAssetWriterInput * __videoInput;
    AVAssetWriter * __writer;
    bool  _suspended;
}

@property (nonatomic, readonly) NSMutableDictionary *_availableImageData;
@property (nonatomic, readonly) NSMutableDictionary *_availablePixelBuffers;
@property (nonatomic, readonly, copy) id /* block */ _completion;
@property (nonatomic, readonly) long long _currentOutputFrameIndex;
@property (nonatomic, readonly) NSArray *_frameFilePaths;
@property (nonatomic, readonly) long long _framesPerSecond;
@property (nonatomic, readonly) NSOperationQueue *_imageDecodeQueue;
@property (nonatomic, readonly) NSOperationQueue *_imageReadQueue;
@property (nonatomic, readonly) NSMutableSet *_inFlightReadFrameIndexes;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_movieWritingQueue;
@property (nonatomic, readonly) long long _nextReadFileIndex;
@property (nonatomic, readonly) long long _nextWriteFileIndex;
@property (nonatomic, readonly) AVAssetWriterInputPixelBufferAdaptor *_pixelBufferAdaptor;
@property (nonatomic, readonly) long long _residentImageDataCount;
@property (nonatomic, readonly) long long _residentPixelBufferCount;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_synchronizationQueue;
@property (nonatomic, readonly) AVAssetWriterInput *_videoInput;
@property (nonatomic, readonly) AVAssetWriter *_writer;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=isSuspended, nonatomic) bool suspended;

- (void).cxx_destruct;
- (bool)_appendPixelBuffer:(struct __CVBuffer { }*)arg1;
- (id)_availableImageData;
- (id)_availablePixelBuffers;
- (id /* block */)_completion;
- (long long)_currentOutputFrameIndex;
- (struct CGSize { double x1; double x2; })_desiredOutputSizeForFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_enqueueNextDecode;
- (void)_enqueueNextRead;
- (void)_enqueueNextWrite;
- (void)_finishMovieWithCompletionHandler:(id /* block */)arg1;
- (id)_frameFilePaths;
- (long long)_framesPerSecond;
- (id)_imageDecodeQueue;
- (id)_imageReadQueue;
- (id)_inFlightReadFrameIndexes;
- (id)_movieWritingQueue;
- (long long)_nextReadFileIndex;
- (long long)_nextWriteFileIndex;
- (id)_pixelBufferAdaptor;
- (void)_reset;
- (long long)_residentImageDataCount;
- (long long)_residentPixelBufferCount;
- (void)_setMetadataOnVideoTrackAssetWriterInput:(id)arg1;
- (bool)_startWritingWithOutputPath:(id)arg1 width:(long long)arg2 height:(long long)arg3 videoFormatDescription:(struct opaqueCMFormatDescription { }*)arg4 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5 framesPerSecond:(long long)arg6 frameCount:(long long)arg7 preferHEVC:(bool)arg8 videoMetadata:(id)arg9;
- (id)_synchronizationQueue;
- (id)_videoInput;
- (id)_writer;
- (id)init;
- (bool)isSuspended;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setSuspended:(bool)arg1;
- (void)writeMovieFromImageFiles:(id)arg1 visMetadataFiles:(id)arg2 startDate:(id)arg3 location:(id)arg4 outputPath:(id)arg5 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg6 framesPerSecond:(long long)arg7 preferHEVC:(bool)arg8 completionHandler:(id /* block */)arg9;

@end
