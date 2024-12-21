/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHRemoteRecognitionRequest : NSObject <NSSecureCoding> {
    CHDrawing * _drawing;
    bool  _enableCachingIfAvailable;
    bool  _hasBeenSubmitted;
    unsigned long long  _maxRecognitionResultCount;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumDrawingSize;
    NSDictionary * _options;
    long long  _priority;
    bool  _shouldContributeToStyle;
}

@property (nonatomic, copy) CHDrawing *drawing;
@property (nonatomic) bool enableCachingIfAvailable;
@property (nonatomic) bool hasBeenSubmitted;
@property (nonatomic) unsigned long long maxRecognitionResultCount;
@property (nonatomic) struct CGSize { double x1; double x2; } minimumDrawingSize;
@property (nonatomic, copy) NSDictionary *options;
@property (nonatomic) long long priority;
@property (nonatomic, readonly) bool shouldContributeToStyle;

+ (Class)classForKeyedUnarchiver;
+ (id)loadFromFile:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)drawing;
- (bool)enableCachingIfAvailable;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasBeenSubmitted;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDrawing:(id)arg1 options:(id)arg2 priority:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRemoteRecognitionRequest:(id)arg1;
- (unsigned long long)maxRecognitionResultCount;
- (struct CGSize { double x1; double x2; })minimumDrawingSize;
- (id)options;
- (long long)priority;
- (void)setDrawing:(id)arg1;
- (void)setEnableCachingIfAvailable:(bool)arg1;
- (void)setHasBeenSubmitted:(bool)arg1;
- (void)setMaxRecognitionResultCount:(unsigned long long)arg1;
- (void)setMinimumDrawingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setOptions:(id)arg1;
- (void)setPriority:(long long)arg1;
- (bool)shouldContributeToStyle;
- (id)writeToFileInFolder:(id)arg1 basename:(id)arg2;

@end