/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
 */

@interface MIOWriterTimeRangeMetadataStreamInput : MIOWriterMetadataStreamInput

- (bool)appendTimeCode:(struct CVSMPTETime { short x1; short x2; unsigned int x3; unsigned int x4; unsigned int x5; short x6; short x7; short x8; short x9; })arg1 startTime:(unsigned long long)arg2 endTime:(unsigned long long)arg3 withTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 error:(id*)arg5;
- (id)init;
- (id)initWithStreamId:(id)arg1;
- (id)inputSpecificTrackMetadataItems;

@end
