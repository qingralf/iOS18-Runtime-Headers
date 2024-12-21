/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWNodeError : NSObject {
    int  _errorCode;
    NSDictionary * _metadata;
    FigCaptureRecordingSettings * _recordingSettings;
    NSString * _sourceNodeDescription;
    BWStillImageSettings * _stillImageSettings;
    long long  _uniqueID;
}

@property (readonly) int errorCode;
@property (readonly) NSDictionary *metadata;
@property (readonly) FigCaptureRecordingSettings *recordingSettings;
@property (readonly) NSString *sourceNodeDescription;
@property (readonly) BWStillImageSettings *stillImageSettings;

+ (id)newError:(int)arg1 sourceNode:(id)arg2;
+ (id)newError:(int)arg1 sourceNode:(id)arg2 recordingSettings:(id)arg3;
+ (id)newError:(int)arg1 sourceNode:(id)arg2 stillImageSettings:(id)arg3 metadata:(id)arg4;

- (void)dealloc;
- (id)description;
- (int)errorCode;
- (unsigned long long)hash;
- (id)metadata;
- (id)recordingSettings;
- (id)sourceNodeDescription;
- (id)stillImageSettings;

@end