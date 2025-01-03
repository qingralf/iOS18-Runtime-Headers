/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapAccessTransitNodeBase : NSObject <GEOMapTransitPoint> {
    double  _boundingRadius;
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    }  _boundingRect;
    GEOMapAccess * _map;
    struct shared_ptr<geo::MapNodeTransit> { 
        struct MapNodeTransit {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _node;
    struct { double x1; double x2; } * _polygonPoints;
    long long  _polygonPointsCount;
}

@property (nonatomic, readonly) double boundingRadius;
@property (nonatomic, readonly) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } boundingRect;
@property (nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *internalName;
@property (nonatomic, readonly) struct { double x1; double x2; }*polygonPoints;
@property (nonatomic, readonly) long long polygonPointsCount;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long transitID;

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)boundingRadius;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })boundingRect;
- (struct { double x1; double x2; })coordinate;
- (void)dealloc;
- (id)description;
- (double)distanceInMetersFrom:(struct { double x1; double x2; })arg1;
- (id)findAccessPoints:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (id)findGeometryWithCompletionHandler:(id /* block */)arg1;
- (id)initWithMap:(id)arg1 node:(struct shared_ptr<geo::MapNodeTransit> { struct MapNodeTransit {} *x1; struct __shared_weak_count {} *x2; })arg2;
- (id)internalName;
- (struct { double x1; double x2; }*)polygonPoints;
- (long long)polygonPointsCount;
- (unsigned long long)transitID;

@end
