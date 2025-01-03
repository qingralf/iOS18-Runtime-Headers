/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNBezierCurveGeometry : SCNGeometry {
    struct CGPath { } * _cgPath;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _curveToGeometryTransform;
}

@property (readonly) struct CGPath { }*CGPath;

+ (bool)supportsSecureCoding;

- (struct CGPath { }*)CGPath;
- (struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; _Atomic unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __C3DMesh {} *x2; struct __C3DMaterial {} *x3; struct __CFArray {} *x4; struct __CFSet {} *x5; struct __CFArray {} *x6; struct { /* ? */ } *x7; unsigned int x8 : 1; struct { /* ? */ } *x9; struct { /* ? */ } *x10; struct { unsigned char x_11_1_1; bool x_11_1_2; struct { bool x_3_2_1; unsigned char x_3_2_2; unsigned char x_3_2_3; unsigned char x_3_2_4; } x_11_1_3; struct __C3DMeshElement {} *x_11_1_4; struct __C3DMeshSource {} *x_11_1_5; struct __C3DMesh {} *x_11_1_6; void *x_11_1_7; void *x_11_1_8; } x11; struct { unsigned char x_12_1_1; float x_12_1_2; unsigned int x_12_1_3; unsigned char x_12_1_4; union { struct { float x_1_3_1; float x_1_3_2; } x_5_2_1; struct { float x_2_3_1; } x_5_2_2; struct { float x_3_3_1; } x_5_2_3; struct { unsigned char x_4_3_1; unsigned int x_4_3_2 : 1; unsigned int x_4_3_3 : 1; } x_5_2_4; } x_12_1_5; } x12; }*)__createCFObject;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)geometryElementAtIndex:(long long)arg1;
- (long long)geometryElementCount;
- (id)geometryElements;
- (id)geometrySourceChannels;
- (id)geometrySources;
- (id)geometrySourcesForSemantic:(id)arg1;
- (id)initWithCGPath:(struct CGPath { }*)arg1;
- (id)initWithCGPath:(struct CGPath { }*)arg1 transform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2;
- (id)initWithCoder:(id)arg1;
- (id)presentationGeometry;
- (long long)primitiveType;
- (void)setPrimitiveType:(long long)arg1;

@end
