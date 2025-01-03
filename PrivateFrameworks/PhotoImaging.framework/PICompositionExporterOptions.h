/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PICompositionExporterOptions : NSObject {
    PIBrushStrokeHistory * _brushStrokeHistory;
    NUColorSpace * _colorSpace;
    bool  _exportSidecarData;
    NSString * _pairingIdentifier;
    NUPriority * _priority;
    <NUScalePolicy> * _scalePolicy;
}

@property (retain) PIBrushStrokeHistory *brushStrokeHistory;
@property (retain) NUColorSpace *colorSpace;
@property (nonatomic) bool exportSidecarData;
@property (copy) NSString *pairingIdentifier;
@property (retain) NUPriority *priority;
@property (retain) <NUScalePolicy> *scalePolicy;

- (void).cxx_destruct;
- (id)brushStrokeHistory;
- (id)colorSpace;
- (id)description;
- (bool)exportSidecarData;
- (id)init;
- (id)pairingIdentifier;
- (id)priority;
- (id)scalePolicy;
- (void)setBrushStrokeHistory:(id)arg1;
- (void)setColorSpace:(id)arg1;
- (void)setExportSidecarData:(bool)arg1;
- (void)setPairingIdentifier:(id)arg1;
- (void)setPriority:(id)arg1;
- (void)setScalePolicy:(id)arg1;

@end
