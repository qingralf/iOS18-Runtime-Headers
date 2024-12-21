/* Generated by RuntimeBrowser.
 */

@protocol BWNodeFileWriterStatusDelegate <NSObject>

@required

- (void)fileWriter:(BWFileSinkNode *)arg1 frameDroppedForSettingsID:(unsigned long long)arg2 withError:(int)arg3;
- (void)fileWriter:(BWFileSinkNode *)arg1 pausedRecordingForSettingsID:(unsigned long long)arg2;
- (void)fileWriter:(BWFileSinkNode *)arg1 resumedRecordingForSettingsID:(unsigned long long)arg2;
- (void)fileWriter:(BWFileSinkNode *)arg1 startedRecordingForSettings:(FigCaptureRecordingSettings *)arg2 writerPipelineIndex:(unsigned long long)arg3 startPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (void)fileWriter:(BWFileSinkNode *)arg1 writerPipelineIndex:(unsigned long long)arg2 stoppedRecordingForSettings:(FigCaptureRecordingSettings *)arg3 withError:(int)arg4 thumbnailSurface:(struct __IOSurface { }*)arg5 irisMovieInfo:(BWIrisMovieInfo *)arg6 debugMetadataSidecarFileURL:(NSURL *)arg7 recordingSucceeded:(bool)arg8;
- (void)fileWriter:(BWFileSinkNode *)arg1 writerPipelineIndex:(unsigned long long)arg2 stoppedRecordingSampleDataForSettingsID:(long long)arg3;

@end