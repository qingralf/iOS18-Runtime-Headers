/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate
 */

@interface PUVideoExportNode : PXRunNode <PUVideoURLExportNode> {
    PICompositionController * _compositionController;
    NSProgress * _exportProgress;
    <PUImageInfoNode> * _imageInfoNode;
    NSString * _livePhotoPairingIdentifier;
    unsigned long long  _quality;
    struct CGSize { 
        double width; 
        double height; 
    }  _renderedVideoSize;
    NSURL * _videoURL;
    <PUVideoURLNode> * _videoURLNode;
}

@property (getter=isCanceled, readonly) bool canceled;
@property (getter=isComplete, readonly) bool complete;
@property (nonatomic, readonly, copy) PICompositionController *compositionController;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <PXRunNodeDelegate> *delegate;
@property (nonatomic, readonly, copy) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSProgress *exportProgress;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PUImageInfoNode> *imageInfoNode;
@property (nonatomic, readonly, copy) NSString *livePhotoPairingIdentifier;
@property (nonatomic, readonly) double progress;
@property (nonatomic, readonly) unsigned long long quality;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } renderedVideoSize;
@property (getter=isRunning, readonly) bool running;
@property (readonly) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSURL *videoURL;
@property (nonatomic, readonly) <PUVideoURLNode> *videoURLNode;
@property (getter=isWaiting, readonly) bool waiting;

- (void).cxx_destruct;
- (id)_editSource;
- (id)_exportPresetName;
- (void)_handleExportCompletedWithSuccess:(bool)arg1 editedSize:(struct CGSize { double x1; double x2; })arg2 error:(id)arg3;
- (id)_newOutputURL;
- (id)compositionController;
- (void)didCancel;
- (id)exportProgress;
- (id)imageInfoNode;
- (id)initWithVideoURLNode:(id)arg1 imageURLNode:(id)arg2 quality:(unsigned long long)arg3 livePhotoPairingIdentifier:(id)arg4 compositionController:(id)arg5;
- (id)livePhotoPairingIdentifier;
- (double)progress;
- (unsigned long long)quality;
- (struct CGSize { double x1; double x2; })renderedVideoSize;
- (void)run;
- (void)setExportProgress:(id)arg1;
- (void)setVideoURL:(id)arg1;
- (id)videoURL;
- (id)videoURLNode;

@end
