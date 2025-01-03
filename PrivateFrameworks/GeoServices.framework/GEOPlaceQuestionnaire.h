/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceQuestionnaire : NSObject {
    bool  _alwaysPositionInitialRatingCtaTowardsTop;
    bool  _canCollectPhotos;
    bool  _canCollectRatings;
    float  _maxAspectRatio;
    unsigned long long  _maxPixels;
    unsigned long long  _maximumNumberOfPhotos;
    unsigned long long  _minPixels;
    NSArray * _ratingCategories;
    GEOPDScorecardLayout * _scorecardLayout;
    NSString * _version;
}

@property (nonatomic, readonly) bool alwaysPositionInitialRatingCtaTowardsTop;
@property (nonatomic, readonly) bool canCollectPhotos;
@property (nonatomic, readonly) bool canCollectRatings;
@property (nonatomic, readonly) bool canShowCallToAction;
@property (nonatomic, readonly) float maxAspectRatio;
@property (nonatomic, readonly) unsigned long long maxPixels;
@property (nonatomic, readonly) unsigned long long maximumNumberOfPhotos;
@property (nonatomic, readonly) unsigned long long minPixels;
@property (nonatomic, readonly) NSArray *ratingCategories;
@property (nonatomic, readonly, copy) NSString *version;

- (void).cxx_destruct;
- (bool)alwaysPositionInitialRatingCtaTowardsTop;
- (bool)canCollectPhotos;
- (bool)canCollectRatings;
- (bool)canShowCallToAction;
- (id)initWithGEOPDPlaceQuestionnaire:(id)arg1;
- (float)maxAspectRatio;
- (unsigned long long)maxPixels;
- (unsigned long long)maximumNumberOfPhotos;
- (unsigned long long)minPixels;
- (id)ratingCategories;
- (id)version;

@end
