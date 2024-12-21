/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigAlternateObjCVideoAttributes : FigKVCInspectable {
    NSArray * _allImmersiveAttributes;
    struct OpaqueFigAlternate { } * _alternate;
    struct OpaqueFigSimpleMutex { } * _mutex;
    double  _nominalFrameRate;
    struct CGSize { 
        double width; 
        double height; 
    }  _presentationSize;
    NSArray * _videoCodecTypes;
    NSArray * _videoLayoutAttributes;
}

@property (nonatomic, readonly) NSArray *codecTypes;
@property (nonatomic, readonly) NSArray *immersiveAttributes;
@property (nonatomic, readonly) double nominalFrameRate;
@property (nonatomic, readonly) double presentationHeight;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } presentationSize;
@property (nonatomic, readonly) double presentationWidth;
@property (nonatomic, readonly) NSArray *videoLayoutAttributes;
@property (nonatomic, readonly) NSString *videoRange;

- (id)codecTypes;
- (void)dealloc;
- (id)immersiveAttributes;
- (id)initWithFigAlternate:(struct OpaqueFigAlternate { }*)arg1;
- (double)nominalFrameRate;
- (double)presentationHeight;
- (struct CGSize { double x1; double x2; })presentationSize;
- (double)presentationWidth;
- (id)videoLayoutAttributes;
- (id)videoRange;

@end