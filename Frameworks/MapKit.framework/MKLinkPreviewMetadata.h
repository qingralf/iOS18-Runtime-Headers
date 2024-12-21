/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKLinkPreviewMetadata : NSObject {
    long long  _actionType;
    GEOURLCollectionStorage * _collectionStorage;
    struct { 
        struct CLLocationCoordinate2D { 
            double latitude; 
            double longitude; 
        } center; 
        struct { 
            double latitudeDelta; 
            double longitudeDelta; 
        } span; 
    }  _coordinateRegion;
    GEOPlaceCollection * _curatedCollection;
    UIImage * _icon;
    MKMapCamera * _mapCamera;
    NSArray * _mapItems;
    unsigned long long  _mapType;
    MKLookAroundScene * _scene;
    NSString * _subtitle;
    NSString * _title;
    long long  _type;
}

@property (nonatomic, readonly) long long actionType;
@property (nonatomic, retain) GEOURLCollectionStorage *collectionStorage;
@property (nonatomic) struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } coordinateRegion;
@property (nonatomic, retain) GEOPlaceCollection *curatedCollection;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, retain) MKMapCamera *mapCamera;
@property (nonatomic, retain) NSArray *mapItems;
@property (nonatomic, readonly) unsigned long long mapType;
@property (nonatomic, retain) MKLookAroundScene *scene;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) long long type;

+ (double)displayScale;

- (void).cxx_destruct;
- (long long)actionType;
- (id)collectionStorage;
- (struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })coordinateRegion;
- (id)curatedCollection;
- (id)icon;
- (id)initWithActionType:(long long)arg1 mapType:(unsigned long long)arg2;
- (id)mapCamera;
- (id)mapItems;
- (unsigned long long)mapType;
- (id)scene;
- (void)setCollectionStorage:(id)arg1;
- (void)setCoordinateRegion:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCuratedCollection:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setMapCamera:(id)arg1;
- (void)setMapItems:(id)arg1;
- (void)setScene:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;
- (long long)type;

@end