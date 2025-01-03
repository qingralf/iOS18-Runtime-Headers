/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CinematicFraming.framework/CinematicFraming
 */

@interface DeskCamRenderingSession : NSObject <DeskCamRenderingManager> {
    struct { 
        float temporalAlpha; 
        float smallChangeThresh; 
        float largeChangeThresh; 
        int smallChangeObservationDurationMaxValue; 
        int largeChangeObservationDurationMaxValue; 
        int smallSteadyErrorObservationDurationMaxValue; 
        int smallChangeObservationDuration; 
        int largeChangeObservationDuration; 
        int smallSteadyErrorObservationDuration; 
        float errorMarginToCatch; 
        float errorVarThresh; 
        struct { 
            float *data; 
            int currIdx; 
            int size; 
            int count; 
        } runningBuffer; 
        int autoZoomState; 
    }  _autoZoomFilteringController;
    float  _autoZoomScalingFactor;
    bool  _autoZoomSupported;
    <MTLTexture> * _blurredRGBLowResTexture;
    struct { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*sensorSize; 
    }  _calibrationParameters;
    void _camera2PlaneShift;
    int  _cameraOrientation;
    <MTLCommandQueue> * _commandQueue;
    int  _deviceType;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _framingSpaceRectangle;
    bool  _gimbalLock;
    void _gravity;
    struct { 
        float radiusUpscaler; 
        float blendingPercentage; 
    }  _imageBlendingControls;
    struct { 
        bool enabled; 
        int size; 
        float sigma; 
        float weights[256]; 
    }  _imageBlurringControls;
    struct { 
        bool enabled; 
        int size; 
        float sigma; 
        float weights[256]; 
        float amount; 
    }  _imageSharpeningControls;
    struct { 
        bool enabled; 
        float exponent; 
        float scaler; 
    }  _imageToneMappingControls;
    void _inputPlaneShift;
    bool  _isFrontFacingCamera;
    <MTLLibrary> * _library;
    struct { 
        <MTLTexture> *inputTexture; 
        <MTLTexture> *auxiliaryTexture; 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*lowestPointOfDominantLineInOutputCrop; 
    }  _lineDetectionController;
    <MTLDevice> * _metalDevice;
    struct __CVMetalTextureCache { } * _metalTextureCacheRef;
    DeskCamSessionOptions * _options;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _outputCropRectangle;
    struct { 
        int width; 
        int height; 
    }  _outputDimensions;
    void _outputPlaneShift;
    int  _outputType;
    float  _pitch;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _pitchMatrix;
    void _plane2CameraShift;
    NSString * _portType;
    float  _roll;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _rollMatrix;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _subjectRectangleInFramingSpace;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _subjectRectangleInSensorSpace;
    void _translationVector;
    <MTLTexture> * _warpedRGBHiResTexture;
    <MTLTexture> * _warpedRGBLowResTexture;
}

@property (nonatomic, readonly) bool autoZoomSupported;
@property (nonatomic, readonly) float autoZoomValue;
@property (nonatomic, readonly) unsigned int exifOrientation;
@property (nonatomic, readonly) void focusPoint;
@property (nonatomic, retain) DeskCamSessionOptions *options;
@property (nonatomic, readonly) bool transformIsValid;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } transformMatrix;
@property (nonatomic, readonly) struct { struct { } x1; } trapezoid;

- (void).cxx_destruct;
- (int)_allocateTextures;
- (id)_compileComputeShader:(id)arg1;
- (int)_compileShaders;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_defaultFramingSpaceViewport:(float)arg1;
- (struct { int x1; })_deskEdgeDetectorResult;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_estimateSubjectRectangleInFramingSpaceFromSubjectRectangleInSensorSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (float)_filterAutoZoomScalingFactor:(float)arg1;
- (void)_filterDeskEdgeDetectorEndPoints;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_framingSpaceRectangleLandscapeLeft;
- (void)_initializeControls;
- (void)_initializeMetal;
- (void)_mapNormalizedPointInFramingSpaceToOutputCropRect:(void *)arg1 withTransformMatrix:(void *)arg2; // needs 2 arg types, found 1: struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }
- (void)_mapPointFromNormalizedSensorSpaceToNormalizedFramingSpace;
- (id)_newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 label:(id)arg3;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })_pitchMatrix;
- (void)_projectPoint:(void *)arg1 intrinsicMatrix:(void *)arg2 rotationMatrix:(void *)arg3; // needs 3 arg types, found 2: struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })_rollMatrix;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_scaleViewportToFitInFramingSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_shiftFramingSpaceRectangleToExploitSensorSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })_transformMatrixWithOutputCropRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_translationVector;
- (struct { struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_2_1[3]; } x_1_1_1; int x_1_1_2; } x1; struct { void*x_2_1_1[3]; } x2; bool x3; float x4; int x5; struct { float x_6_1_1; float x_6_1_2; float x_6_1_3; float x_6_1_4; float x_6_1_5; float x_6_1_6; float x_6_1_7; float x_6_1_8; } x6; struct { float x_7_1_1; float x_7_1_2; float x_7_1_3; float x_7_1_4; float x_7_1_5; float x_7_1_6; float x_7_1_7; float x_7_1_8; } x7; })_undistortControls;
- (void)_updateDeskEdgeDetectionDataInOutputSpace;
- (void)_updatePitch;
- (void)_updatePitchAndRoll;
- (void)_updateRoll;
- (void)_updateSubjectRectangleInSensorSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 withDetections:(id)arg2;
- (float)_viewportScaleMultiplier;
- (bool)autoZoomSupported;
- (float)autoZoomValue;
- (void)dealloc;
- (unsigned int)exifOrientation;
- (void)focusPoint;
- (id)initWithOutputDimensions:(struct { int x1; int x2; })arg1 portType:(id)arg2 deviceType:(int)arg3 isFrontFacingCamera:(bool)arg4;
- (id)options;
- (int)processBuffer:(struct __CVBuffer { }*)arg1 outputPixelBuffer:(struct __CVBuffer { }*)arg2;
- (void)registerBodyDetections:(id)arg1;
- (void)registerCameraCalibrationDictionary:(id)arg1;
- (void)registerCameraOrientation:(int)arg1;
- (void)registerGravity;
- (void)registerOutputType:(int)arg1;
- (void)setOptions:(id)arg1;
- (bool)transformIsValid;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })transformMatrix;
- (struct { struct { } x1; })trapezoid;

@end
