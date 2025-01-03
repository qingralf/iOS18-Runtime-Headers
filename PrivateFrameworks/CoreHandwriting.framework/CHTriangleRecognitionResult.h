/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHTriangleRecognitionResult : CHSketchRecognitionResult {
    struct CGPoint { 
        double x; 
        double y; 
    }  _vertex1;
    struct CGPoint { 
        double x; 
        double y; 
    }  _vertex2;
    struct CGPoint { 
        double x; 
        double y; 
    }  _vertex3;
}

@property (readonly) struct CGPoint { double x1; double x2; } vertex1;
@property (readonly) struct CGPoint { double x1; double x2; } vertex2;
@property (readonly) struct CGPoint { double x1; double x2; } vertex3;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 vertex1:(struct CGPoint { double x1; double x2; })arg4 vertex2:(struct CGPoint { double x1; double x2; })arg5 vertex3:(struct CGPoint { double x1; double x2; })arg6;
- (struct CGPoint { double x1; double x2; })vertex1;
- (struct CGPoint { double x1; double x2; })vertex2;
- (struct CGPoint { double x1; double x2; })vertex3;

@end
