/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
 */

@interface MIOWriterMetadataGroupStreamInput : MIOWriterMetadataStreamInput {
    NSString * _associatedInputUUID;
    NSString * _uuid;
}

@property (readonly) MIOWriterBufferStreamInput *associateToInput;

- (void).cxx_destruct;
- (bool)appendMetadata:(id)arg1 error:(id*)arg2;
- (id)associateToInput;
- (id)init;
- (id)initWithStreamId:(id)arg1 format:(struct opaqueCMFormatDescription { }*)arg2;
- (id)initWithStreamId:(id)arg1 format:(struct opaqueCMFormatDescription { }*)arg2 associateToInput:(id)arg3;
- (bool)superAppendMetadata:(id)arg1;
- (id)uuid;

@end
