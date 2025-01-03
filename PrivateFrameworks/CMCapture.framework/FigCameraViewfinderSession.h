/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface FigCameraViewfinderSession : NSObject {
    FigDelegateStorage * _delegateStorage;
}

@property (nonatomic, readonly) struct { unsigned int x1[8]; } clientAuditToken;
@property (nonatomic, readonly) bool usesMovieFileOutput;
@property (nonatomic, readonly) bool usesPhotoOutput;

- (struct { unsigned int x1[8]; })clientAuditToken;
- (void)closePreviewStream;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initSubclass;
- (void)openPreviewStreamWithOptions:(id)arg1;
- (bool)usesMovieFileOutput;
- (bool)usesPhotoOutput;

@end
