/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudSubscriptionFeatures.framework/CloudSubscriptionFeatures
 */

@interface CloudSubscriptionFeatures.Ticket : NSObject <NSSecureCoding> {
    void status;
    void ticket;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) _TtC25CloudSubscriptionFeatures12TicketStatus *status;
@property (nonatomic, readonly) NSString *ticket;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)status;
- (id)ticket;

@end