/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HDRProcessing.framework/HDRProcessing
 */

@interface HDRBackwardDisplayManagement : NSObject {
    float  _709toPanelPrimaryMatrix;
    BackwardDmShader * _BKDM_3Plane_1Pixel_Gamma;
    BackwardDmShader * _BKDM_3Plane_1Pixel_Gamma_Scaled;
    BackwardDmShader * _BKDM_3Plane_1Pixel_Gamma_Scaled_Inverse_HLGOOTF;
    BackwardDmShader * _BKDM_3Plane_1Pixel_Gamma_Scaled_Inverse_YScale;
    BackwardDmShader * _BKDM_3Plane_1Pixel_Linear;
    BackwardDmShader * _BKDM_3Plane_1Pixel_PTV;
    BackwardDmShader * _BKDM_3Plane_1Pixel_UIBlending_PTV;
    BackwardDmShader * _BKDM_3Plane_1Pixel_Video_HDR10;
    BackwardDmShader * _BKDM_3Plane_1Pixel_Video_Scaled;
    BackwardDmShader * _BKDM_3Plane_1Pixel_Video_Scaled_Inverse_HLGOOTF;
    BackwardDmShader * _BKDM_3Plane_1Pixel_Video_Scaled_Inverse_YScale;
    BackwardDmShader * _BKDM_3Plane_2Pixel_Gamma_Scaled;
    BackwardDmShader * _BKDM_3Plane_2Pixel_Linear;
    BackwardDmShader * _BKDM_3Plane_2Pixel_PTV;
    BackwardDmShader * _BKDM_3Plane_2Pixel_UIBlending_PTV;
    BackwardDmShader * _BKDM_3Plane_2Pixel_Video_HDR10;
    BackwardDmShader * _BKDM_3Plane_2Pixel_Video_Scaled;
    BackwardDmShader * _BKDM_ARGB_Linear;
    BackwardDmShader * _BKDM_SDRUIBlending;
    BackwardDmShader * _BKDM_SDRUIOnly;
    BackwardDmShader * _BKDM_SDRUIOnly_ShaderDegamma;
    BackwardDmShader * _BKDM_SDRVideoOnly;
    BackwardDmShader * _BKDM_SDRVideoUIBlending;
    struct { 
        struct { 
            unsigned int x; 
            unsigned int y; 
        } origin; 
        struct { 
            unsigned int width; 
            unsigned int height; 
        } size; 
    }  _cachedFullRegion;
    struct { 
        float parameter[3][3]; 
    }  _cachedHDRMatrix;
    struct { 
        struct { 
            unsigned int x; 
            unsigned int y; 
        } origin; 
        struct { 
            unsigned int width; 
            unsigned int height; 
        } size; 
    }  _cachedUIDstRegion;
    struct { 
        struct { 
            unsigned int x; 
            unsigned int y; 
        } origin; 
        struct { 
            unsigned int width; 
            unsigned int height; 
        } size; 
    }  _cachedUISrcRegion;
    struct { 
        struct { 
            unsigned int x; 
            unsigned int y; 
        } origin; 
        struct { 
            unsigned int width; 
            unsigned int height; 
        } size; 
    }  _cachedVideoDstRegion;
    struct { 
        struct { 
            unsigned int x; 
            unsigned int y; 
        } origin; 
        struct { 
            unsigned int width; 
            unsigned int height; 
        } size; 
    }  _cachedVideoSrcRegion;
    bool  _cached_scaling_factor;
    float  _cached_source_black;
    float  _cached_source_white;
    float  _cached_target_black;
    float  _cached_target_white;
    unsigned int  _cached_uiInputFormat;
    unsigned int  _cached_videoInputFormat;
    long long  _callerApiVersion;
    BackwardDmShader * _colorfill1;
    BackwardDmShader * _colorfill2;
    <MTLLibrary> * _defaultLibrary;
    <MTLDeviceSPI> * _device;
    unsigned int  _displayMaxBrightnessInNits;
    unsigned int  _displayMaxBrightnessInNitsForSDR;
    float  _displayMinBrightnessInNits;
    unsigned int  _displayType;
    BackwardDmShader * _fillUI1ForHDR;
    BackwardDmShader * _fillUI1ForHDR_Inverse_YScale;
    BackwardDmShader * _fillUI1SDR24;
    BackwardDmShader * _fillUI2ForHDR;
    unsigned long long  _frameIndex;
    bool  _hasDisplayBrightnessFromEDID;
    int  _height;
    unsigned int  _indexOfyuvScalingFactorTableTexture;
    <MTLSamplerState> * _inputSampler;
    float  _inputScaleFactor;
    <MTLTexture> * _inputTexture;
    <MTLTexture> * _intermediateTexture;
    <MTLTexture> * _inverseScalingFactorTableTexture;
    <MTLTexture> * _inverseScalingFactorTableTextures;
    NSMutableData * _inverseScalingTable;
    unsigned int  _inverseScalingTableIndex;
    <MTLTexture> * _l2PQTable;
    BackwardDmShader * _metadataKernel;
    BackwardDmShader * _metadataKernel2Pixel;
    int  _metadataSpanCount;
    <MTLTexture> * _metadataTexture;
    <MTLTexture> * _metadataTextures;
    <MTLBuffer> * _metadataVertexBuffer;
    int  _num_Blend_Rects;
    int  _num_ColorFill_Rects;
    int  _num_UI_Rects;
    int  _num_Video_Rects;
    unsigned int  _outputPackingColorFormat;
    <MTLTexture> * _outputTexture;
    <MTLTexture> * _outputTextureMetadata;
    <MTLTexture> * _pq2LTable;
    float  _prev_SlopeScaled;
    float  _prev_c1;
    float  _prev_c2;
    float  _prev_c3;
    <MTLTexture> * _sdrScalingFactorTableTexture;
    NSMutableData * _sdrScalingTable;
    int  _targetHeight;
    int  _targetWidth;
    float  _uiEDRFactor;
    <MTLTexture> * _uiTexture;
    <MTLBuffer> * _uniformBuffer;
    <MTLBuffer> * _uniformBuffers;
    bool  _useAccessibilityMatrix;
    <MTLBuffer> * _vertsBuf;
    <MTLBuffer> * _vertsBuffer;
    <MTLBuffer> * _vertsBufs;
    int  _width;
    <MTLTexture> * _yuvScalingFactorTableTexture;
    <MTLTexture> * _yuvScalingFactorTableTextures;
    NSMutableData * _yuvScalingTable;
}

- (void).cxx_destruct;
- (long long)EncodeToCommandBuffer:(id)arg1 inputSurface:(struct __IOSurface { }*)arg2 uiSurface:(struct __IOSurface { }*)arg3 outputSurface:(struct __IOSurface { }*)arg4 frameProperties:(id)arg5;
- (int)adjustMetaData:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; unsigned char x16; unsigned char x17; unsigned char x18; unsigned char x19; unsigned char x20; unsigned char x21; unsigned char x22; unsigned char x23; unsigned char x24; unsigned char x25; unsigned char x26; unsigned char x27; unsigned char x28; unsigned char x29; unsigned char x30; unsigned char x31; unsigned char x32; unsigned char x33; unsigned char x34; unsigned char x35; unsigned char x36; unsigned char x37; unsigned char x38; unsigned char x39; unsigned char x40; unsigned char x41; unsigned char x42; unsigned char x43; unsigned char x44; unsigned char x45; unsigned char x46; unsigned char x47; unsigned char x48; unsigned char x49; unsigned char x50; unsigned char x51; unsigned char x52; unsigned char x53; unsigned char x54; unsigned char x55; }*)arg1 HDRUIBlending:(bool)arg2 hasLetterbox:(bool)arg3;
- (float)adjustUiScaleForDoViToHDR10Conversion:(float)arg1;
- (void)attatchInfoFrame:(struct { float x1; float x2; float x3; float x4; float x5[9]; float x6[9]; float x7[9]; float x8[9]; float x9[9]; float x10[3]; float x11[3]; float x12; unsigned int x13; unsigned int x14; unsigned int x15; float x16; unsigned int x17; float x18; struct { unsigned short x_19_1_1; unsigned short x_19_1_2; unsigned short x_19_1_3; unsigned short x_19_1_4; unsigned short x_19_1_5; unsigned short x_19_1_6; unsigned short x_19_1_7; unsigned short x_19_1_8; unsigned int x_19_1_9; unsigned int x_19_1_10; } x19; struct { unsigned short x_20_1_1; unsigned short x_20_1_2; } x20; unsigned int x21; unsigned int x22 : 1; bool x23; int x24; }*)arg1 toOutputSurface:(struct __IOSurface { }*)arg2;
- (void)createBuffers;
- (void)createInverseScalingFactorTable;
- (void)createKernels;
- (void)createL2PQTable;
- (void)createMetadataTexture;
- (void)createMetadataVertexBuffer;
- (void)createPQ2LTable;
- (id)createRenderCommandEncoderWithCommandBuffer:(id)arg1 texture:(id)arg2 widthScale:(unsigned int)arg3 loadAction:(unsigned long long)arg4;
- (void)createSDRScalingFactorTable;
- (void)createSamplers;
- (id)createShaderWithVertexName:(id)arg1 fragmentName:(id)arg2 colorFormat:(unsigned long long)arg3 useCustomMatrix:(bool)arg4 p3CSC:(bool)arg5 applyYGamma:(bool)arg6;
- (void)createYUVScalingFactorTable;
- (void)drawMetaWithEncoder:(id)arg1 widthScale:(int)arg2 dmPayLoadLength:(int)arg3;
- (long long)encodeToCommandBuffer:(id)arg1 inputSurface:(struct __IOSurface { }*)arg2 outputSurface:(struct __IOSurface { }*)arg3 frameProperties:(id)arg4;
- (long long)encodeToCommandBuffer:(id)arg1 video:(struct __IOSurface { }*)arg2 ui:(struct __IOSurface { }*)arg3 output:(struct __IOSurface { }*)arg4 frameProperties:(id)arg5;
- (long long)encodeToCommandBuffer:(id)arg1 video:(struct __IOSurface { }*)arg2 videoSrcRegion:(struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg3 videoDstRegion:(struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg4 ui:(struct __IOSurface { }*)arg5 output:(struct __IOSurface { }*)arg6 frameProperties:(id)arg7;
- (long long)encodeToCommandBuffer:(id)arg1 video:(struct __IOSurface { }*)arg2 videoSrcRegion:(struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg3 videoDstRegion:(struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg4 ui:(struct __IOSurface { }*)arg5 uiSrcRegion:(struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg6 uiDstRegion:(struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg7 backgroundColor:(struct { double x1; double x2; double x3; double x4; }*)arg8 output:(struct __IOSurface { }*)arg9 frameProperties:(id)arg10;
- (void)fillInverseScalingFactorTableFromDMConfig:(struct { float x1; float x2; float x3; float x4; float x5[9]; float x6[9]; float x7[9]; float x8[9]; float x9[9]; float x10[3]; float x11[3]; float x12; unsigned int x13; unsigned int x14; unsigned int x15; float x16; unsigned int x17; float x18; struct { unsigned short x_19_1_1; unsigned short x_19_1_2; unsigned short x_19_1_3; unsigned short x_19_1_4; unsigned short x_19_1_5; unsigned short x_19_1_6; unsigned short x_19_1_7; unsigned short x_19_1_8; unsigned int x_19_1_9; unsigned int x_19_1_10; } x19; struct { unsigned short x_20_1_1; unsigned short x_20_1_2; } x20; unsigned int x21; unsigned int x22 : 1; bool x23; int x24; }*)arg1;
- (void)fillScalingTable_SDR2HDR:(struct { float x1; float x2; float x3; float x4; float x5[9]; float x6[9]; float x7[9]; float x8[9]; float x9[9]; float x10[3]; float x11[3]; float x12; unsigned int x13; unsigned int x14; unsigned int x15; float x16; unsigned int x17; float x18; struct { unsigned short x_19_1_1; unsigned short x_19_1_2; unsigned short x_19_1_3; unsigned short x_19_1_4; unsigned short x_19_1_5; unsigned short x_19_1_6; unsigned short x_19_1_7; unsigned short x_19_1_8; unsigned int x_19_1_9; unsigned int x_19_1_10; } x19; struct { unsigned short x_20_1_1; unsigned short x_20_1_2; } x20; unsigned int x21; unsigned int x22 : 1; bool x23; int x24; }*)arg1 target_White:(float)arg2 target_Black:(float)arg3;
- (void)fillScalingTable_YUVTM:(struct { float x1; float x2; float x3; float x4; float x5[9]; float x6[9]; float x7[9]; float x8[9]; float x9[9]; float x10[3]; float x11[3]; float x12; unsigned int x13; unsigned int x14; unsigned int x15; float x16; unsigned int x17; float x18; struct { unsigned short x_19_1_1; unsigned short x_19_1_2; unsigned short x_19_1_3; unsigned short x_19_1_4; unsigned short x_19_1_5; unsigned short x_19_1_6; unsigned short x_19_1_7; unsigned short x_19_1_8; unsigned int x_19_1_9; unsigned int x_19_1_10; } x19; struct { unsigned short x_20_1_1; unsigned short x_20_1_2; } x20; unsigned int x21; unsigned int x22 : 1; bool x23; int x24; }*)arg1 targetwhite:(float)arg2 targetblack:(float)arg3 satBoost:(float)arg4 scalingFactor:(bool)arg5 sdrOnly:(bool)arg6;
- (void)generateMetaAndConfig:(id)arg1 inputSurface:(struct __IOSurface { }*)arg2 outputSurface:(struct __IOSurface { }*)arg3 payLoad:(struct { /* ? */ }**)arg4 dmCfg:(struct { /* ? */ }**)arg5;
- (unsigned int)getPackagingColorFormatFromDictionary:(id)arg1 withDefaultValue:(unsigned int)arg2;
- (unsigned long long)getPixelFormatFromSurface:(struct __IOSurface { }*)arg1 DeGamma:(bool)arg2 forceUseOnePlane:(bool)arg3 default:(unsigned long long)arg4;
- (id)getRenderPipelineStateForShader:(id)arg1;
- (int)getTVIndex:(bool)arg1;
- (void)handleMetaInsertion:(bool)arg1 encoder:(id)arg2 widthScale:(int)arg3 payloadLength:(unsigned int)arg4;
- (void)initDisplayAttributes:(id)arg1;
- (void)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 displayProperties:(id)arg2;
- (bool)inputIsSDRVideoFormat:(struct __IOSurface { }*)arg1;
- (bool)inputIsVideoOnly:(struct __IOSurface { }*)arg1 inputUI:(struct __IOSurface { }*)arg2;
- (void)packetizeMetadata:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; unsigned char x16; unsigned char x17; unsigned char x18; unsigned char x19; unsigned char x20; unsigned char x21; unsigned char x22; unsigned char x23; unsigned char x24; unsigned char x25; unsigned char x26; unsigned char x27; unsigned char x28; unsigned char x29; unsigned char x30; unsigned char x31; unsigned char x32; unsigned char x33; unsigned char x34; unsigned char x35; unsigned char x36; unsigned char x37; unsigned char x38; unsigned char x39; unsigned char x40; unsigned char x41; unsigned char x42; unsigned char x43; unsigned char x44; unsigned char x45; unsigned char x46; unsigned char x47; unsigned char x48; unsigned char x49; unsigned char x50; unsigned char x51; unsigned char x52; unsigned char x53; unsigned char x54; unsigned char x55; }*)arg1 length:(int)arg2 into:(int)arg3 onSurface:(struct __IOSurface { }*)arg4;
- (int)pixelNumPerThreadFullScreen:(bool)arg1 videoInput:(struct __IOSurface { }*)arg2 UI:(struct __IOSurface { }*)arg3 Output:(struct __IOSurface { }*)arg4 widthScaling:(bool)arg5;
- (long long)setAccessibilityMatrix:(struct { float x1[3][3]; }*)arg1;
- (void)setupMetadataTextureWithOutput:(struct __IOSurface { }*)arg1;
- (void)setupMetal;
- (void)setupTexturesWithInput:(struct __IOSurface { }*)arg1 VideoSRGB:(bool)arg2 UI:(struct __IOSurface { }*)arg3 UISRGB:(bool)arg4 Output:(struct __IOSurface { }*)arg5 PixelPerThread:(int)arg6 ptvMode:(bool)arg7;
- (bool)updateConfigFromMetadata:(struct { float x1; float x2; float x3; float x4; float x5[9]; float x6[9]; float x7[9]; float x8[9]; float x9[9]; float x10[3]; float x11[3]; float x12; unsigned int x13; unsigned int x14; unsigned int x15; float x16; unsigned int x17; float x18; struct { unsigned short x_19_1_1; unsigned short x_19_1_2; unsigned short x_19_1_3; unsigned short x_19_1_4; unsigned short x_19_1_5; unsigned short x_19_1_6; unsigned short x_19_1_7; unsigned short x_19_1_8; unsigned int x_19_1_9; unsigned int x_19_1_10; } x19; struct { unsigned short x_20_1_1; unsigned short x_20_1_2; } x20; unsigned int x21; unsigned int x22 : 1; bool x23; int x24; }*)arg1 uiScaleFactor:(float)arg2 width:(int)arg3 background:(struct { double x1; double x2; double x3; double x4; }*)arg4 hdrVideoOnly:(bool)arg5 hdr10TV:(bool)arg6 sdrOnly:(bool)arg7;
- (void)updateUniformUIScaleForVideo:(bool)arg1 forTV:(bool)arg2 videoPeakBrightnessInNits:(int)arg3 uiHWDegamma:(bool)arg4 dovi50toHDR10TVMode:(unsigned int)arg5;
- (void)updateVertices:(struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1 videoInput:(struct __IOSurface { }*)arg2 videoDstRegion:(struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg3 videoSrcRegion:(struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg4 uiInput:(struct __IOSurface { }*)arg5 uiDstRegion:(struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg6 uiSrcRegion:(struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg7 dstWidth:(int)arg8 dstHeight:(int)arg9 videoSrcWidth:(int)arg10 videoSrcHeight:(int)arg11 index:(int)arg12 scale:(int)arg13;

@end
