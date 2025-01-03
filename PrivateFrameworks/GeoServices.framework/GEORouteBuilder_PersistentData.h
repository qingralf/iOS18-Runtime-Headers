/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteBuilder_PersistentData : GEORouteBuilderBase {
    GEOComposedGeometryRoutePersistentData * _persistentData;
}

@property (nonatomic, retain) GEOComposedGeometryRoutePersistentData *persistentData;

- (void).cxx_destruct;
- (bool)_buildComponents;
- (bool)_buildCoordinates;
- (id)_newRouteInstance;
- (bool)_setMiscInfo;
- (int)_transportType;
- (id)initWithPersistentData:(id)arg1;
- (id)persistentData;
- (void)setPersistentData:(id)arg1;

@end
