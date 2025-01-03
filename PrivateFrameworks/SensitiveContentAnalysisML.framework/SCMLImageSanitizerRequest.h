/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SensitiveContentAnalysisML.framework/SensitiveContentAnalysisML
 */

@interface SCMLImageSanitizerRequest : NSObject {
    NSArray * _embeddings;
    bool  _isChildPresent;
    bool  _keepGoing;
    struct __CVBuffer { } * _pixelBuffer;
    unsigned int  _style;
}

@property (nonatomic, retain) NSArray *embeddings;
@property (nonatomic) bool isChildPresent;
@property (nonatomic) bool keepGoing;
@property (nonatomic) struct __CVBuffer { }*pixelBuffer;
@property (nonatomic) unsigned int style;

- (void).cxx_destruct;
- (id)embeddings;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1;
- (bool)isChildPresent;
- (bool)keepGoing;
- (struct __CVBuffer { }*)pixelBuffer;
- (void)setEmbeddings:(id)arg1;
- (void)setIsChildPresent:(bool)arg1;
- (void)setKeepGoing:(bool)arg1;
- (void)setPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)setStyle:(unsigned int)arg1;
- (unsigned int)style;

@end
