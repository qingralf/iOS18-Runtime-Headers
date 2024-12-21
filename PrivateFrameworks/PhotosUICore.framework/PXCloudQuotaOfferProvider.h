/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCloudQuotaOfferProvider : PXObservable {
    ICQOffer * _dismissibleOffer;
    ICQOffer * _offer;
}

@property (nonatomic, readonly) ICQOffer *dismissibleOffer;
@property (nonatomic, readonly) ICQOffer *offer;

+ (id)currentOfferProvider;

- (void).cxx_destruct;
- (void)_currentOfferChangedNotification:(id)arg1;
- (void)_queue_getCurrentOffer;
- (void)_queue_initialSetup;
- (void)_updateCurrentOffer:(id)arg1;
- (void)dealloc;
- (id)dismissibleOffer;
- (id)init;
- (id)offer;
- (void)performChanges:(id /* block */)arg1;
- (void)setDismissibleOffer:(id)arg1;
- (void)setOffer:(id)arg1;

@end