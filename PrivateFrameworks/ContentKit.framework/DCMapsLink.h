/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

@interface DCMapsLink : NSObject <WFNaming, WFSerializableContent>

@property (nonatomic, readonly) bool canGetDirections;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } centerCoordinate;
@property (nonatomic, readonly) NSString *centerLocation;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *destinationAddress;
@property (nonatomic, readonly) unsigned long long directionsMode;
@property (nonatomic, readonly) unsigned long long directionsTransportType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long mapType;
@property (nonatomic, readonly) NSString *mkDirectionsMode;
@property (nonatomic, readonly) unsigned long long mkMapType;
@property (nonatomic, readonly) NSString *searchLocation;
@property (nonatomic, readonly) NSString *searchNearQuery;
@property (nonatomic, readonly) NSString *searchQuery;
@property (nonatomic, readonly) bool showsBicycling;
@property (nonatomic, readonly) bool showsStreetView;
@property (nonatomic, readonly) bool showsTraffic;
@property (nonatomic, readonly) bool showsTransit;
@property (nonatomic, readonly) NSString *startAddress;
@property (nonatomic, readonly) NSString *streetViewLocation;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *wfName;
@property (nonatomic, readonly) long long zoomLevel;

+ (struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })coordinateRegionForMapSize:(struct CGSize { double x1; double x2; })arg1 centeredAtLocation:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 atZoomLevel:(long long)arg3;
+ (struct { double x1; double x2; })coordinateSpanForMapSize:(struct CGSize { double x1; double x2; })arg1 centeredAtLocation:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 atZoomLevel:(long long)arg3;
+ (void)createMapsLinkWithPlacemark:(id)arg1 location:(id)arg2 streetAddress:(id)arg3 shiftingLocationIfNecessary:(bool)arg4 completionHandler:(id /* block */)arg5;
+ (bool)isMapsURL:(id)arg1;
+ (double)latitudeToPixelSpaceY:(double)arg1;
+ (double)longitudeToPixelSpaceX:(double)arg1;
+ (id)mapsLinkWithURL:(id)arg1;
+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (double)pixelSpaceXToLongitude:(double)arg1;
+ (double)pixelSpaceYToLatitude:(double)arg1;
+ (void)processLocation:(id)arg1 shiftingIfNecessary:(bool)arg2 completionHandler:(id /* block */)arg3;

- (id)baiduMapsAppURL;
- (bool)canGetDirections;
- (struct CLLocationCoordinate2D { double x1; double x2; })centerCoordinate;
- (id)centerLocation;
- (struct CLLocationCoordinate2D { double x1; double x2; })centerLocationCoordinate;
- (struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })coordinateRegionForMapSize:(struct CGSize { double x1; double x2; })arg1 centeredAtLocation:(struct CLLocationCoordinate2D { double x1; double x2; })arg2;
- (struct { double x1; double x2; })coordinateSpanForMapSize:(struct CGSize { double x1; double x2; })arg1 centeredAtLocation:(struct CLLocationCoordinate2D { double x1; double x2; })arg2;
- (id)description;
- (id)destinationAddress;
- (unsigned long long)directionsMode;
- (unsigned long long)directionsTransportType;
- (void)geocodeAddressString:(id)arg1 inRegionIfAvailable:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)geocodeDirectionsEndpointsWithCompletionHandler:(id /* block */)arg1;
- (void)getAppleMapsDirectionsURL:(id /* block */)arg1;
- (void)getCitymapperAppURL:(id /* block */)arg1;
- (void)getDirectionsToPlacemark:(id)arg1 fromPlacemark:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)getDirectionsToPlacemark:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getDirectionsWithCompletionHandler:(id /* block */)arg1;
- (id)googleMapsAppURL;
- (struct CLLocationCoordinate2D { double x1; double x2; })locationCoordinateFromString:(id)arg1;
- (unsigned long long)mapType;
- (id)mapsAppURL;
- (id)mkDirectionsMode;
- (unsigned long long)mkMapType;
- (id)region;
- (id)regionCenteredAtLocation:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (id)searchLocation;
- (struct CLLocationCoordinate2D { double x1; double x2; })searchLocationCoordinate;
- (id)searchNearQuery;
- (id)searchQuery;
- (bool)showsBicycling;
- (bool)showsStreetView;
- (bool)showsTraffic;
- (bool)showsTransit;
- (id)startAddress;
- (id)streetViewLocation;
- (struct CLLocationCoordinate2D { double x1; double x2; })streetViewLocationCoordinate;
- (id)transitAppURL;
- (id)wazeAppURL;
- (id)wfName;
- (id)wfSerializedRepresentation;
- (long long)zoomLevel;

@end