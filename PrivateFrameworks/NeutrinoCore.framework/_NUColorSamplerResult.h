/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface _NUColorSamplerResult : _NURenderResult <NUColorSamplerResult> {
    struct CGColor { } * _color;
    struct { 
        long long x; 
        long long y; 
    }  _point;
}

@property (nonatomic, retain) struct CGColor { }*color;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property struct { long long x1; long long x2; } point;
@property (readonly) <NURenderStatistics> *statistics;
@property (readonly) Class superclass;

- (struct CGColor { }*)color;
- (void)dealloc;
- (struct { long long x1; long long x2; })point;
- (void)setColor:(struct CGColor { }*)arg1;
- (void)setPoint:(struct { long long x1; long long x2; })arg1;

@end
