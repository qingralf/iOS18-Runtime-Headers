/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGMemoryContext : NSObject {
    NSIndexSet * _categoriesDeniedForContextual;
    NSIndexSet * _categoriesDeniedForFallback;
    NSDate * _creationDateOfLastMemory;
    bool  _futureLookup;
    NSDate * _localDate;
    unsigned long long  _numberOfDaysSinceMemoryUpgrade;
    PHPhotoLibrary * _photoLibrary;
    NSTimeZone * _timeZone;
}

@property (nonatomic, readonly) NSIndexSet *categoriesDeniedForContextual;
@property (nonatomic, readonly) NSIndexSet *categoriesDeniedForFallback;
@property (nonatomic, retain) NSDate *creationDateOfLastMemory;
@property (nonatomic, readonly) bool futureLookup;
@property (nonatomic, readonly) NSDate *localDate;
@property (nonatomic) unsigned long long numberOfDaysSinceMemoryUpgrade;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) NSTimeZone *timeZone;

- (void).cxx_destruct;
- (id)categoriesDeniedForContextual;
- (id)categoriesDeniedForFallback;
- (id)creationDateOfLastMemory;
- (bool)futureLookup;
- (void)initDeniedCategoriesWithPhotoLibrary:(id)arg1;
- (id)initWithFutureLocalDate:(id)arg1 timeZone:(id)arg2 photoLibrary:(id)arg3;
- (id)initWithLocalDate:(id)arg1 timeZone:(id)arg2 photoLibrary:(id)arg3;
- (id)initWithMemoryPlanner:(id)arg1 photoLibrary:(id)arg2;
- (id)localDate;
- (unsigned long long)numberOfDaysSinceMemoryUpgrade;
- (id)photoLibrary;
- (void)setCreationDateOfLastMemory:(id)arg1;
- (void)setNumberOfDaysSinceMemoryUpgrade:(unsigned long long)arg1;
- (id)timeZone;

@end
