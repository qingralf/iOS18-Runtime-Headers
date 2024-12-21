/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapItemDetailViewController : UIViewController <MKSelectionAccessoryViewDelegate> {
    MKFullDeveloperPlaceCardSelectionAccessoryView * _accessoryView;
    <MKMapItemDetailViewControllerDelegate> * _delegate;
    bool  _displaysMap;
    MKMapItem * _mapItem;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <MKMapItemDetailViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMapItem:(id)arg1;
- (id)initWithMapItem:(id)arg1 displaysMap:(bool)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)mapItem;
- (void)selectionAccessoryViewDidRequestDismissal:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMapItem:(id)arg1;

@end