/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ImageIO.framework/ImageIO
 */

@interface HDRImageConverter_SIMD : HDRImageConverter

- (bool)computeLumaGainHistogram:(void *)arg1 scale:(void *)arg2 image:(void *)arg3 transform:(void *)arg4 gainMap:(void *)arg5 transform:(void *)arg6; // needs 6 arg types, found 5: struct { unsigned int x1[32][32]; }*, struct __CVBuffer { }*, const struct { struct { int x_1_1_1; struct { } x_1_1_2; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_3_2_1[3]; } x_1_1_3; } x1; struct { struct { int x_1_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; float x_2_3_5; float x_2_3_6; float x_2_3_7; float x_2_3_8; } x_1_2_2; void *x_1_2_3; } x_2_1_1; struct { int x_2_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; float x_2_3_5; float x_2_3_6; float x_2_3_7; float x_2_3_8; } x_2_2_2; void *x_2_2_3; struct { struct { void*x_1_4_1[3]; } x_4_3_1; bool x_4_3_2; } x_2_2_4; } x_2_1_2; } x2; }*, struct __CVBuffer { }*, const struct { struct { int x_1_1_1; struct { } x_1_1_2; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_3_2_1[3]; } x_1_1_3; } x1; struct { struct { int x_1_2_1; struct { } x_1_2_2; } x_2_1_1; struct { struct { void*x_1_3_1[3]; } x_2_2_1; } x_2_1_2; } x2; }*
- (bool)convertImage:(struct __CVBuffer { }*)arg1 transform:(const struct { struct { int x_1_1_1; struct { } x_1_1_2; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_3_2_1[3]; } x_1_1_3; } x1; struct { struct { int x_1_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; float x_2_3_5; float x_2_3_6; float x_2_3_7; float x_2_3_8; } x_1_2_2; void *x_1_2_3; } x_2_1_1; struct { int x_2_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; float x_2_3_5; float x_2_3_6; float x_2_3_7; float x_2_3_8; } x_2_2_2; void *x_2_2_3; struct { struct { void*x_1_4_1[3]; } x_4_3_1; bool x_4_3_2; } x_2_2_4; } x_2_1_2; } x2; }*)arg2 alternate:(const struct { struct { int x_1_1_1; struct { } x_1_1_2; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_3_2_1[3]; } x_1_1_3; } x1; struct { struct { int x_1_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; float x_2_3_5; float x_2_3_6; float x_2_3_7; float x_2_3_8; } x_1_2_2; void *x_1_2_3; } x_2_1_1; struct { int x_2_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; float x_2_3_5; float x_2_3_6; float x_2_3_7; float x_2_3_8; } x_2_2_2; void *x_2_2_3; struct { struct { void*x_1_4_1[3]; } x_4_3_1; bool x_4_3_2; } x_2_2_4; } x_2_1_2; } x2; }*)arg3 gainMap:(struct __CVBuffer { }*)arg4 transform:(const struct { struct { int x_1_1_1; struct { } x_1_1_2; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_3_2_1[3]; } x_1_1_3; } x1; struct { struct { int x_1_2_1; struct { } x_1_2_2; } x_2_1_1; struct { struct { void*x_1_3_1[3]; } x_2_2_1; } x_2_1_2; } x2; }*)arg5 alternate:(const struct { struct { int x_1_1_1; struct { } x_1_1_2; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_3_2_1[3]; } x_1_1_3; } x1; struct { struct { int x_1_2_1; struct { } x_1_2_2; } x_2_1_1; struct { struct { void*x_1_3_1[3]; } x_2_2_1; } x_2_1_2; } x2; }*)arg6 toImage:(struct __CVBuffer { }*)arg7 transform:(const struct { struct { struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_3_1[3]; } x_1_2_1; bool x_1_2_2; } x_1_1_1; struct { int x_2_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; float x_2_3_5; float x_2_3_6; float x_2_3_7; float x_2_3_8; } x_2_2_2; void *x_2_2_3; } x_1_1_2; } x1; struct { int x_2_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; float x_2_2_5; float x_2_2_6; float x_2_2_7; float x_2_2_8; } x_2_1_2; void *x_2_1_3; } x2; }*)arg8 gainMap:(struct __CVBuffer { }*)arg9 transform:(const struct { struct { struct { int x_1_2_1; struct { } x_1_2_2; } x_1_1_1; struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_3_1[3]; } x_2_2_1; } x_1_1_2; } x1; }*)arg10;
- (bool)convertImage:(struct __CVBuffer { }*)arg1 transform:(const struct { struct { int x_1_1_1; struct { } x_1_1_2; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_3_2_1[3]; } x_1_1_3; } x1; struct { struct { int x_1_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; float x_2_3_5; float x_2_3_6; float x_2_3_7; float x_2_3_8; } x_1_2_2; void *x_1_2_3; } x_2_1_1; struct { int x_2_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; float x_2_3_5; float x_2_3_6; float x_2_3_7; float x_2_3_8; } x_2_2_2; void *x_2_2_3; struct { struct { void*x_1_4_1[3]; } x_4_3_1; bool x_4_3_2; } x_2_2_4; } x_2_1_2; } x2; }*)arg2 alternate:(const struct { struct { int x_1_1_1; struct { } x_1_1_2; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_3_2_1[3]; } x_1_1_3; } x1; struct { struct { int x_1_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; float x_2_3_5; float x_2_3_6; float x_2_3_7; float x_2_3_8; } x_1_2_2; void *x_1_2_3; } x_2_1_1; struct { int x_2_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; float x_2_3_5; float x_2_3_6; float x_2_3_7; float x_2_3_8; } x_2_2_2; void *x_2_2_3; struct { struct { void*x_1_4_1[3]; } x_4_3_1; bool x_4_3_2; } x_2_2_4; } x_2_1_2; } x2; }*)arg3 toImage:(struct __CVBuffer { }*)arg4 transform:(const struct { struct { struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_3_1[3]; } x_1_2_1; bool x_1_2_2; } x_1_1_1; struct { int x_2_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; float x_2_3_5; float x_2_3_6; float x_2_3_7; float x_2_3_8; } x_2_2_2; void *x_2_2_3; } x_1_1_2; } x1; struct { int x_2_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; float x_2_2_5; float x_2_2_6; float x_2_2_7; float x_2_2_8; } x_2_1_2; void *x_2_1_3; } x2; }*)arg5 gainMap:(struct __CVBuffer { }*)arg6 transform:(const struct { struct { struct { int x_1_2_1; struct { } x_1_2_2; } x_1_1_1; struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_3_1[3]; } x_2_2_1; } x_1_1_2; } x1; }*)arg7;
- (bool)convertImage:(struct __CVBuffer { }*)arg1 transform:(const struct { struct { int x_1_1_1; struct { } x_1_1_2; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_3_2_1[3]; } x_1_1_3; } x1; struct { struct { int x_1_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; float x_2_3_5; float x_2_3_6; float x_2_3_7; float x_2_3_8; } x_1_2_2; void *x_1_2_3; } x_2_1_1; struct { int x_2_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; float x_2_3_5; float x_2_3_6; float x_2_3_7; float x_2_3_8; } x_2_2_2; void *x_2_2_3; struct { struct { void*x_1_4_1[3]; } x_4_3_1; bool x_4_3_2; } x_2_2_4; } x_2_1_2; } x2; }*)arg2 gainMap:(struct __CVBuffer { }*)arg3 transform:(const struct { struct { int x_1_1_1; struct { } x_1_1_2; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_3_2_1[3]; } x_1_1_3; } x1; struct { struct { int x_1_2_1; struct { } x_1_2_2; } x_2_1_1; struct { struct { void*x_1_3_1[3]; } x_2_2_1; } x_2_1_2; } x2; }*)arg4 toImage:(struct __CVBuffer { }*)arg5 transform:(const struct { struct { struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_3_1[3]; } x_1_2_1; bool x_1_2_2; } x_1_1_1; struct { int x_2_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; float x_2_3_5; float x_2_3_6; float x_2_3_7; float x_2_3_8; } x_2_2_2; void *x_2_2_3; } x_1_1_2; } x1; struct { int x_2_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; float x_2_2_5; float x_2_2_6; float x_2_2_7; float x_2_2_8; } x_2_1_2; void *x_2_1_3; } x2; }*)arg6;
- (bool)convertImage:(struct __CVBuffer { }*)arg1 transform:(const struct { struct { int x_1_1_1; struct { } x_1_1_2; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_3_2_1[3]; } x_1_1_3; } x1; struct { struct { int x_1_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; float x_2_3_5; float x_2_3_6; float x_2_3_7; float x_2_3_8; } x_1_2_2; void *x_1_2_3; } x_2_1_1; struct { int x_2_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; float x_2_3_5; float x_2_3_6; float x_2_3_7; float x_2_3_8; } x_2_2_2; void *x_2_2_3; struct { struct { void*x_1_4_1[3]; } x_4_3_1; bool x_4_3_2; } x_2_2_4; } x_2_1_2; } x2; }*)arg2 toImage:(struct __CVBuffer { }*)arg3 transform:(const struct { struct { struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_3_1[3]; } x_1_2_1; bool x_1_2_2; } x_1_1_1; struct { int x_2_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; float x_2_3_5; float x_2_3_6; float x_2_3_7; float x_2_3_8; } x_2_2_2; void *x_2_2_3; } x_1_1_2; } x1; struct { int x_2_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; float x_2_2_5; float x_2_2_6; float x_2_2_7; float x_2_2_8; } x_2_1_2; void *x_2_1_3; } x2; }*)arg4;
- (id)description;
- (bool)isPixelFormatSupported:(unsigned int)arg1;

@end