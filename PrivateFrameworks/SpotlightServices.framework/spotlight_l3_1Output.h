/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface spotlight_l3_1Output : NSObject <MLFeatureProvider> {
    MLMultiArray * _id_features;
    MLMultiArray * _y;
}

@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, retain) MLMultiArray *id_features;
@property (nonatomic, retain) MLMultiArray *y;

- (void).cxx_destruct;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)id_features;
- (id)initWithY:(id)arg1 id_features:(id)arg2;
- (void)setId_features:(id)arg1;
- (void)setY:(id)arg1;
- (id)y;

@end
