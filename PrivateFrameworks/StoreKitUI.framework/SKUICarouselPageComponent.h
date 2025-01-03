/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUICarouselPageComponent : SKUIPageComponent <SSMetricsEventFieldProvider> {
    NSArray * _carouselItems;
    double  _cycleInterval;
    long long  _missingItemCount;
}

@property (nonatomic, readonly) NSArray *carouselItems;
@property (nonatomic, readonly) double cycleInterval;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SKUICarouselViewElement *viewElement;

- (void).cxx_destruct;
- (id)carouselItems;
- (long long)componentType;
- (double)cycleInterval;
- (void)enumerateMissingItemIdentifiersFromIndex:(long long)arg1 usingBlock:(id /* block */)arg2;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2;
- (id)initWithViewElement:(id)arg1;
- (bool)isMissingItemData;
- (id)metricsElementName;
- (void)updateWithMissingItems:(id)arg1;
- (id)valueForMetricsField:(id)arg1;

@end
