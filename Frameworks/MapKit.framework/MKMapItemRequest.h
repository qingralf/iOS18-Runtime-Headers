/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapItemRequest : NSObject {
    bool  _cancelled;
    MKMapFeatureAnnotation * _featureAnnotation;
    bool  _loading;
    MKMapItemIdentifier * _mapItemIdentifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stateLock;
    <MKMapServiceTicket> * _ticket;
}

@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (nonatomic, readonly) MKMapFeatureAnnotation *featureAnnotation;
@property (getter=isLoading, nonatomic, readonly) bool loading;
@property (nonatomic, readonly) MKMapFeatureAnnotation *mapFeatureAnnotation;
@property (nonatomic, readonly) MKMapItemIdentifier *mapItemIdentifier;

- (void).cxx_destruct;
- (void)_handleMapItems:(id)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_performLookupRequestWithMapItemIdentifier:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)cancel;
- (id)featureAnnotation;
- (void)getMapItemWithCompletionHandler:(id /* block */)arg1;
- (void)getMapItemWithQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithMapFeatureAnnotation:(id)arg1;
- (id)initWithMapItemIdentifier:(id)arg1;
- (bool)isCancelled;
- (bool)isLoading;
- (id)mapFeatureAnnotation;
- (id)mapItemIdentifier;

@end