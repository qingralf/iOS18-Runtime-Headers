/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsUI.framework/MapsUI
 */

@interface MUPlaceItemHeaderViewModel : MUPlaceHeaderViewModel {
    MKDistanceFormatter * _distanceFormatter;
    <_MKPlaceItem> * _placeItem;
}

@property (nonatomic, readonly) bool isUserSpecificPlaceItem;
@property (nonatomic, readonly) bool showNearbyStringForContactPlaceItem;

- (void).cxx_destruct;
- (id)_formattedDistanceString;
- (id)_userSpecificPlaceSecondaryName;
- (id)addressDescriptionForContact;
- (id)enclosingPlaceAttributedStringWithFont:(id)arg1 labelColor:(id)arg2 tokenColor:(id)arg3;
- (bool)hasEnclosingPlace;
- (bool)hasInitialData;
- (id)initWithPlaceItem:(id)arg1;
- (id)initWithPlaceItem:(id)arg1 imageManager:(id)arg2;
- (id)initWithPlaceItem:(id)arg1 imageManager:(id)arg2 isDeveloperPlaceCard:(bool)arg3 developerPlaceCardAuditToken:(id)arg4;
- (id)initWithPlaceItem:(id)arg1 isDeveloperPlaceCard:(bool)arg2 developerPlaceCardAuditToken:(id)arg3;
- (bool)isUserSpecificPlaceItem;
- (id)placeName;
- (id)placeSecondaryName;
- (bool)showNearbyStringForContactPlaceItem;
- (bool)supportsContactAddressDescription;
- (id)transitLabelItems;

@end