/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INGetUserCurrentRestaurantReservationBookingsIntent : INIntent <INGetUserCurrentRestaurantReservationBookingsIntentExport, NSCopying> {
    NSDate * _earliestBookingDateForResults;
    NSNumber * _maximumNumberOfResults;
    NSString * _reservationIdentifier;
    INRestaurant * _restaurant;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *earliestBookingDateForResults;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *maximumNumberOfResults;
@property (nonatomic, copy) NSString *reservationIdentifier;
@property (nonatomic, copy) INRestaurant *restaurant;
@property (readonly) Class superclass;

+ (id)intentDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)earliestBookingDateForResults;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRestaurant:(id)arg1 reservationIdentifier:(id)arg2 maximumNumberOfResults:(id)arg3 earliestBookingDateForResults:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)maximumNumberOfResults;
- (id)reservationIdentifier;
- (id)restaurant;
- (void)setEarliestBookingDateForResults:(id)arg1;
- (void)setMaximumNumberOfResults:(id)arg1;
- (void)setReservationIdentifier:(id)arg1;
- (void)setRestaurant:(id)arg1;

@end
