/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRCameraAVStreamManagementClusterVideoStreamAllocateResponseParams : NSObject <NSCopying> {
    NSNumber * _videoStreamID;
}

@property (nonatomic, copy) NSNumber *videoStreamID;

- (void).cxx_destruct;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })_setFieldsFromDecodableStruct:(const struct DecodableType { unsigned short x1; }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithResponseValue:(id)arg1 error:(id*)arg2;
- (void)setVideoStreamID:(id)arg1;
- (id)videoStreamID;

@end