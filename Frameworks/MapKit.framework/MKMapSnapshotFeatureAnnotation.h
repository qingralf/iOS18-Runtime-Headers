/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapSnapshotFeatureAnnotation : NSObject <MKCustomFeatureAnnotation, NSSecureCoding> {
    struct { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    VKCustomFeature * _customFeature;
    long long  _representation;
    NSString * _title;
}

@property (nonatomic) struct { double x1; double x2; } coordinate;
@property (nonatomic) double course; /* unknown property attribute: ? */
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long representation;
@property (nonatomic, readonly) bool showsBalloonCallout;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct { double x1; double x2; })coordinate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)feature;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 title:(id)arg2 representation:(long long)arg3;
- (long long)representation;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;
- (void)setShowsBalloonCallout:(bool)arg1;
- (bool)showsBalloonCallout;

@end
