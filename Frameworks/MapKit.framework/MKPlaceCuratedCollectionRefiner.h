/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceCuratedCollectionRefiner : NSObject {
    MKMapItemIdentifier * _collectionIdentifier;
    <MKMapServiceCuratedCollectionTicket> * _identifierRefinementTicket;
    <MKMapServiceCuratedCollectionItemsTicket> * _mapItemRefinementTicket;
}

- (void).cxx_destruct;
- (void)fetchWithCallbackQueue:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithCollectionIdentifier:(unsigned long long)arg1;
- (id)initWithCollectionIdentifier:(unsigned long long)arg1 providerIdentifier:(int)arg2;

@end
