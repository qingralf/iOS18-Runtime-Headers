/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoNetAppsUI.framework/NanoNetAppsUI
 */

@interface SGCubicSpline : NSObject {
    void _a;
    void _b;
    void _c;
    bool  _closed;
    struct { int *x1; } * _controlPoints;
    void _d;
    int  _length;
    struct { int *x1; } * _processedPoints;
    struct { double *x1; float *x2; int x3; } * _splineMatrix;
    int  _startIndex;
    struct { int *x1; } * _workspace;
}

- (void)_processClosedSpline;
- (void)_processOpenSpline;
- (void)_processSpline;
- (struct { int *x1; }*)controlPointsBuffer;
- (void)dealloc;
- (void)getControlPoints:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void***)arg1 processedPoints:(/* Warning: Unrecognized filer type: '2' using 'void*' */ void***)arg2;
- (id)initWithNumberOfControlPoints:(int)arg1 isClosed:(bool)arg2;
- (void)interpolateAt:(float)arg1;
- (void)interpolateAt:(float)arg1 derivative:(/* Warning: Unrecognized filer type: '2' using 'void*' */ void**)arg2;
- (void)interpolateWithSteps:(int)arg1 interpolation:(id /* block */)arg2;
- (bool)isClosed;
- (int)length;
- (void)process;

@end
