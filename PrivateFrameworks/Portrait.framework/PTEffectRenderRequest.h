/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Portrait.framework/Portrait
 */

@interface PTEffectRenderRequest : NSObject {
    float  _apertureSDOF;
    struct __CFDictionary { } * _detectedObjects;
    long long  _effectQuality;
    unsigned long long  _effectType;
    float  _focalLength;
    bool  _focusOnAll;
    double  _frameTimeSeconds;
    struct __CVBuffer { } * _inBackgroundReplacementBuffer;
    <MTLTexture> * _inBilbyAlphaMaskTexture;
    struct __CVBuffer { } * _inColorBuffer;
    struct __CVBuffer { } * _inExternalDisparityBuffer;
    struct CGSize { 
        double width; 
        double height; 
    }  _inReactionColorSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _inReactionVideoRect;
    struct __CVBuffer { } * _inScreenCaptureBuffer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _inScreenCaptureRect;
    float  _luxLevel;
    struct __CVBuffer { } * _outBackgroundReplacementPostProcessingBuffer;
    bool  _outBackgroundReplacementPostProcessingBufferUpdated;
    struct __CVBuffer { } * _outColorBuffer;
    bool  _outColorBufferWriteSkipped;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _outColorROI;
    struct __CVBuffer { } * _outPersonSegmentationMatteBuffer;
    unsigned long long  _presenterOverlayMode;
    NSArray * _reactions;
    float  _relightStrengthStudioLight;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
}

@property float apertureSDOF;
@property bool bilbyFloatingMode;
@property struct __CFDictionary { }*detectedObjects;
@property long long effectQuality;
@property unsigned long long effectType;
@property float focalLength;
@property bool focusOnAll;
@property double frameTimeSeconds;
@property struct __CVBuffer { }*inBackgroundReplacementBuffer;
@property (nonatomic, retain) <MTLTexture> *inBilbyAlphaMaskTexture;
@property struct __CVBuffer { }*inColorBuffer;
@property struct __CVBuffer { }*inExternalDisparityBuffer;
@property struct CGSize { double x1; double x2; } inReactionColorSize;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } inReactionVideoRect;
@property struct __CVBuffer { }*inScreenCaptureBuffer;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } inScreenCaptureRect;
@property float luxLevel;
@property struct __CVBuffer { }*outBackgroundReplacementPostProcessingBuffer;
@property bool outBackgroundReplacementPostProcessingBufferUpdated;
@property struct __CVBuffer { }*outColorBuffer;
@property bool outColorBufferWriteSkipped;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } outColorROI;
@property struct __CVBuffer { }*outPersonSegmentationMatteBuffer;
@property unsigned long long presenterOverlayMode;
@property (nonatomic, retain) NSArray *reactions;
@property float relightStrengthStudioLight;
@property struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;

+ (float)apertureSDOFDefault;
+ (void)apertureSDOFRange;
+ (float)relightStrengthStudioLightDefault;

- (void).cxx_destruct;
- (float)apertureSDOF;
- (bool)bilbyFloatingMode;
- (void)dealloc;
- (struct __CFDictionary { }*)detectedObjects;
- (id)detectedObjectsAsString;
- (long long)effectQuality;
- (unsigned long long)effectType;
- (float)focalLength;
- (bool)focusOnAll;
- (double)frameTimeSeconds;
- (struct __CVBuffer { }*)inBackgroundReplacementBuffer;
- (id)inBilbyAlphaMaskTexture;
- (struct __CVBuffer { }*)inColorBuffer;
- (struct __CVBuffer { }*)inExternalDisparityBuffer;
- (struct CGSize { double x1; double x2; })inReactionColorSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inReactionVideoRect;
- (struct __CVBuffer { }*)inScreenCaptureBuffer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inScreenCaptureRect;
- (id)init;
- (void)logPixelbufferMetadata:(id)arg1;
- (float)luxLevel;
- (struct __CVBuffer { }*)outBackgroundReplacementPostProcessingBuffer;
- (bool)outBackgroundReplacementPostProcessingBufferUpdated;
- (struct __CVBuffer { }*)outColorBuffer;
- (bool)outColorBufferWriteSkipped;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })outColorROI;
- (struct __CVBuffer { }*)outPersonSegmentationMatteBuffer;
- (unsigned long long)presenterOverlayMode;
- (id)reactions;
- (void)reactionsCombinedCropRect;
- (float)relightStrengthStudioLight;
- (float)remappedAperture;
- (void)setApertureSDOF:(float)arg1;
- (void)setBilbyFloatingMode:(bool)arg1;
- (void)setDetectedObjects:(struct __CFDictionary { }*)arg1;
- (void)setEffectQuality:(long long)arg1;
- (void)setEffectType:(unsigned long long)arg1;
- (void)setFocalLength:(float)arg1;
- (void)setFocusOnAll:(bool)arg1;
- (void)setFrameTimeSeconds:(double)arg1;
- (void)setInBackgroundReplacementBuffer:(struct __CVBuffer { }*)arg1;
- (void)setInBilbyAlphaMaskTexture:(id)arg1;
- (void)setInColorBuffer:(struct __CVBuffer { }*)arg1;
- (void)setInExternalDisparityBuffer:(struct __CVBuffer { }*)arg1;
- (void)setInReactionColorSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setInReactionVideoRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInScreenCaptureBuffer:(struct __CVBuffer { }*)arg1;
- (void)setInScreenCaptureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLuxLevel:(float)arg1;
- (void)setOutBackgroundReplacementPostProcessingBuffer:(struct __CVBuffer { }*)arg1;
- (void)setOutBackgroundReplacementPostProcessingBufferUpdated:(bool)arg1;
- (void)setOutColorBuffer:(struct __CVBuffer { }*)arg1;
- (void)setOutColorBufferWriteSkipped:(bool)arg1;
- (void)setOutColorROI:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOutPersonSegmentationMatteBuffer:(struct __CVBuffer { }*)arg1;
- (void)setPresenterOverlayMode:(unsigned long long)arg1;
- (void)setReactions:(id)arg1;
- (void)setRelightStrengthStudioLight:(float)arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;

@end