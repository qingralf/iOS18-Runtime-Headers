/* Generated by RuntimeBrowser.
 */

@protocol MKLinkPreviewLocationInfo <NSObject>

@required

- (NSString *)address;
- (CNPostalAddress *)addressComponents;
- (NSString *)category;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (bool)isPointOfInterest;
- (NSString *)name;

@end