/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
 */

@interface CRRegionGeometryInfo : CRImageSpaceQuad {
    struct CGVector { 
        double dx; 
        double dy; 
    }  _baselineVector;
    double  _estimatedLineHeight;
    unsigned long long  _layoutDirection;
    struct CGSize { 
        double width; 
        double height; 
    }  cachedSize;
}

@property (readonly) struct CGVector { double x1; double x2; } baselineVector;
@property struct CGSize { double x1; double x2; } cachedSize;
@property double estimatedLineHeight;
@property unsigned long long layoutDirection;

- (struct CGVector { double x1; double x2; })baselineVector;
- (struct CGSize { double x1; double x2; })cachedSize;
- (double)estimatedLineHeight;
- (id)initFromRegion:(id)arg1 layoutDirection:(unsigned long long)arg2;
- (unsigned long long)layoutDirection;
- (id)mutualGeometryInfoWith:(id)arg1;
- (void)setCachedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setEstimatedLineHeight:(double)arg1;
- (void)setLayoutDirection:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })size;

@end