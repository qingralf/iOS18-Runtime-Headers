/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWStillImageSmartStyleAttachmentTransferNode : BWNode {
    NSMutableDictionary * _attachedMediaFromUnstyledBuffers;
    NSMutableDictionary * _attachmentsFromUnstyledBuffers;
    bool  _hasAttachmentsFromUnstyledBuffer;
    NSMutableDictionary * _inferencesFromUnstyledBuffers;
    NSString * _lastCaptureRequestIdentifier;
    BWStillImageNodeConfiguration * _nodeConfiguration;
    struct opaqueCMSampleBuffer { } * _styledBuffer;
}

+ (void)initialize;

- (void)dealloc;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)initWithNodeConfiguration:(id)arg1;
- (id)nodeSubType;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end