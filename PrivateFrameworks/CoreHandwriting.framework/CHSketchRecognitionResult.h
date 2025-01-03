/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHSketchRecognitionResult : CHRecognitionResult <NSSecureCoding> {
    double  _rotation;
    NSString * _string;
}

@property (readonly) double rotation;
@property (readonly) NSString *string;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3;
- (bool)isEqual:(id)arg1;
- (double)rotation;
- (id)string;

@end
