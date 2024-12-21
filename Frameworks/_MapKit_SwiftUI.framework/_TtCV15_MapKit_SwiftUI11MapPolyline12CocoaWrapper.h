/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/_MapKit_SwiftUI.framework/_MapKit_SwiftUI
 */

@interface _TtCV15_MapKit_SwiftUI11MapPolyline12CocoaWrapper : MKPolyline {
    void wrapped;
}

@property (nonatomic, readonly) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } boundingMapRect;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (nonatomic, readonly) long long pointCount;
@property (nonatomic, readonly) bool requiresModernMap;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (bool)_requiresModernMap;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })boundingMapRect;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (double*)elevations;
- (void)getCoordinates:(struct CLLocationCoordinate2D { double x1; double x2; }*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)init;
- (bool)intersectsMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)locationAtPointIndex:(long long)arg1;
- (id)locationsAtPointIndexes:(id)arg1;
- (long long)pointCount;
- (struct { double x1; double x2; }*)points;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end