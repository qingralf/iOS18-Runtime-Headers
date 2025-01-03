/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface _NSTextHighlightRunSegment : NSObject {
    double  _bottomLeftCornerRadius;
    double  _bottomRightCornerRadius;
    NSMutableArray * _cornerExtensions;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _highlightFrame;
    bool  _isExtraAddedEmptyLine;
    double  _leftEnd;
    double  _rightEnd;
    _NSTextHighlightRun * _run;
    unsigned long long  _segmentIndex;
    NSTextRange * _textRange;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _textSegmentFrame;
    double  _topLeftCornerRadius;
    double  _topRightCornerRadius;
}

- (void).cxx_destruct;
- (void)_calculateHighlightSegmentShape;
- (bool)anyRunHasBottomBorderOnPoint:(struct CGPoint { double x1; double x2; })arg1 withLeftCornerExtensionDistance:(double*)arg2 withRightCornerExtensionDistance:(double*)arg3;
- (bool)anyRunHasTopBorderOnPoint:(struct CGPoint { double x1; double x2; })arg1 withLeftCornerExtensionDistance:(double*)arg2 withRightCornerExtensionDistance:(double*)arg3;
- (struct CGPoint { double x1; double x2; })bottomLeftCornerPoint;
- (struct CGPoint { double x1; double x2; })bottomRightCornerPoint;
- (struct CGPath { }*)createBottomLeftCornerExtensionWithRadius:(double)arg1;
- (struct CGPath { }*)createBottomRightCornerExtensionWithRadius:(double)arg1;
- (struct CGPath { }*)createCornerExtensionWithOrigin:(struct CGPoint { double x1; double x2; })arg1 radius:(double)arg2 firstPoint:(struct CGPoint { double x1; double x2; })arg3 secondPoint:(struct CGPoint { double x1; double x2; })arg4 arcCenter:(struct CGPoint { double x1; double x2; })arg5 startAngle:(double)arg6 endAngle:(double)arg7;
- (struct CGPath { }*)createTopLeftCornerExtensionWithRadius:(double)arg1;
- (struct CGPath { }*)createTopRightCornerExtensionWithRadius:(double)arg1;
- (id)description;
- (bool)doesAnySegmentHaveBottomBorderOnPoint:(struct CGPoint { double x1; double x2; })arg1 withLeftCornerExtensionDistance:(double*)arg2 withRightCornerExtensionDistance:(double*)arg3;
- (bool)doesAnySegmentHaveTopBorderOnPoint:(struct CGPoint { double x1; double x2; })arg1 withLeftCornerExtensionDistance:(double*)arg2 withRightCornerExtensionDistance:(double*)arg3;
- (bool)nextSegmentInCurrentRunIsOnPoint:(struct CGPoint { double x1; double x2; })arg1 withLeftCornerExtensionDistance:(double*)arg2 withRightCornerExtensionDistance:(double*)arg3;
- (bool)previousSegmentInCurrentRunIsOnPoint:(struct CGPoint { double x1; double x2; })arg1 withLeftCornerExtensionDistance:(double*)arg2 withRightCornerExtensionDistance:(double*)arg3;
- (struct CGPoint { double x1; double x2; })topLeftCornerPoint;
- (struct CGPoint { double x1; double x2; })topRightCornerPoint;

@end
