/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapAccessTransitStop : GEOMapAccessTransitNodeBase <GEOMapTransitStop> {
    <GEOMapTransitHall> * _hall;
}

@property (nonatomic, readonly) double boundingRadius;
@property (nonatomic, readonly) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } boundingRect;
@property (nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long hallID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *internalName;
@property (nonatomic, readonly) struct { double x1; double x2; }*polygonPoints;
@property (nonatomic, readonly) long long polygonPointsCount;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long transitID;

- (void).cxx_destruct;
- (id)findAccessPoints:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (id)findHall:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (id)findLinksIn:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (id)findLinksOut:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)hallID;

@end
