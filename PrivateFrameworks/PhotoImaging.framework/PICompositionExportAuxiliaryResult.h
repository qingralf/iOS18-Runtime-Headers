/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PICompositionExportAuxiliaryResult : PICompositionExportResult {
    NSDictionary * _auxiliaryImages;
    bool  _canPropagateOriginalAuxiliaryData;
    NSData * _companionImageData;
    NSURL * _companionVideoURL;
    <NUImageProperties> * _properties;
}

@property (retain) NSDictionary *auxiliaryImages;
@property bool canPropagateOriginalAuxiliaryData;
@property (readonly) NSData *companionImageData;
@property (readonly) NSURL *companionVideoURL;
@property struct { long long x1; long long x2; } inputSize;
@property (retain) <NUImageProperties> *properties;

- (void).cxx_destruct;
- (id)auxiliaryImages;
- (bool)canPropagateOriginalAuxiliaryData;
- (id)companionImageData;
- (id)companionVideoURL;
- (id)properties;
- (void)setAuxiliaryImages:(id)arg1;
- (void)setCanPropagateOriginalAuxiliaryData:(bool)arg1;
- (void)setProperties:(id)arg1;

@end
