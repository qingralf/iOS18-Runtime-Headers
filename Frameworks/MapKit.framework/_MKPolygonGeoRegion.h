/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKPolygonGeoRegion : NSObject <MKGeoJSONCoverageRegion> {
    struct CLLocationCoordinate2D { double x1; double x2; } * _polygon;
    unsigned long long  _vertexCount;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)_loadWithJSONObject:(id)arg1 error:(id*)arg2;
- (bool)coordinateLiesInRegion:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)dealloc;
- (id)initWithJSONObject:(id)arg1 error:(id*)arg2;

@end
