/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
 */

@interface MIOWriterMetadataStreamInput : MIOWriterStreamInput {
    struct opaqueCMFormatDescription { } * _inputFormatDesc;
    AVAssetWriterInputMetadataAdaptor * _metadataAdaptor;
    AVAssetWriterInput * _metadataInput;
}

@property (readonly) AVAssetWriterInputMetadataAdaptor *metadataAdaptor;
@property (readonly) AVAssetWriterInput *metadataInput;

- (void).cxx_destruct;
- (id)allWriterInputs;
- (bool)appendMetadata:(id)arg1;
- (bool)areAllInputsReady;
- (void)customizeMetadataInput:(id)arg1;
- (void)dealloc;
- (void)finishProcessing;
- (id)initWithStreamId:(id)arg1 format:(struct opaqueCMFormatDescription { }*)arg2;
- (id)inputSpecificTrackMetadataItems;
- (id)mainAVInput;
- (id)metadataAdaptor;
- (id)metadataInput;
- (void)prepareInputFinished;
- (bool)setupInputsWithWriter:(id)arg1 error:(id*)arg2;
- (bool)writeNextItemFromFifo;

@end