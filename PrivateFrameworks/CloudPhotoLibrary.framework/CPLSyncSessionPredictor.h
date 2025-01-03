/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLSyncSessionPredictor : NSObject {
    CPLSyncSessionPrediction * _currentPrediction;
    NSString * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSHashTable * _observers;
}

@property (readonly) CPLSyncSessionPrediction *currentPrediction;
@property (nonatomic, readonly) NSString *identifier;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)currentPrediction;
- (id)description;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)updatePredictedValue:(id)arg1 forType:(id)arg2;
- (void)updatePredictionWithValuesAndTypes:(id)arg1;
- (void)updatePredictionsWithDerivativesStatistics:(id)arg1;

@end
