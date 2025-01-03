/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Portrait.framework/Portrait
 */

@interface PTAssetCinematicGlobals : NSObject <PTAssetGlobals> {
    NSString * _YCbCrMatrix;
    NSString * _colorPrimaries;
    unsigned long long  _estimatedDataRate;
    struct opaqueCMFormatDescription { } * _formatDescription;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _frameDuration;
    PTGlobalCinematographyMetadata * _globalCinematographyMetadata;
    PTGlobalRenderingMetadata * _globalRenderingMetadata;
    PTGlobalStabilizationMetadata * _globalStabilizationMetadata;
    PTGlobalVideoHeaderMetadata * _globalVideoHeaderMetadata;
    bool  _is420YUV10Bit;
    NSString * _transferFunction;
}

@property (nonatomic, readonly) NSString *YCbCrMatrix;
@property (nonatomic, readonly) NSString *colorPrimaries;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long estimatedDataRate;
@property (nonatomic, readonly) struct opaqueCMFormatDescription { }*formatDescription;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } frameDuration;
@property (nonatomic, retain) PTGlobalCinematographyMetadata *globalCinematographyMetadata;
@property (nonatomic, retain) PTGlobalRenderingMetadata *globalRenderingMetadata;
@property (nonatomic, retain) PTGlobalStabilizationMetadata *globalStabilizationMetadata;
@property (nonatomic, retain) PTGlobalVideoHeaderMetadata *globalVideoHeaderMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool is420YUV10Bit;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *transferFunction;

- (void).cxx_destruct;
- (id)YCbCrMatrix;
- (void)_assignGlobalsFromAssetReader:(id)arg1;
- (id)colorPrimaries;
- (void)dealloc;
- (unsigned long long)estimatedDataRate;
- (struct opaqueCMFormatDescription { }*)formatDescription;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })frameDuration;
- (id)globalCinematographyMetadata;
- (id)globalRenderingMetadata;
- (id)globalStabilizationMetadata;
- (id)globalVideoHeaderMetadata;
- (id)initWithAssetReader:(id)arg1;
- (bool)is420YUV10Bit;
- (void)setGlobalCinematographyMetadata:(id)arg1;
- (void)setGlobalRenderingMetadata:(id)arg1;
- (void)setGlobalStabilizationMetadata:(id)arg1;
- (void)setGlobalVideoHeaderMetadata:(id)arg1;
- (id)transferFunction;

@end
