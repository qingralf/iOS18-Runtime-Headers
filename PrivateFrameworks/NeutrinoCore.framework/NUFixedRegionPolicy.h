/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUFixedRegionPolicy : NSObject <NURegionPolicy> {
    NURegion * _region;
    struct { 
        long long numerator; 
        long long denominator; 
    }  _scale;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NURegion *region;
@property struct { long long x1; long long x2; } scale;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)init;
- (id)initWithRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (id)initWithRegion:(id)arg1;
- (id)region;
- (id)regionForGeometry:(id)arg1;
- (struct { long long x1; long long x2; })scale;
- (void)setScale:(struct { long long x1; long long x2; })arg1;

@end