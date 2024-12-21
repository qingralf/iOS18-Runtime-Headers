/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SCSharingReminders.framework/SCSharingReminders
 */

@interface SCSharingReminder : NSObject <NSSecureCoding> {
    NSString * _displayName;
    NSString * _identifier;
    NSDate * _scheduledDate;
    NSString * _type;
}

@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSDate *scheduledDate;
@property (nonatomic, copy) NSString *type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2 type:(id)arg3 deliverAfter:(double)arg4;
- (bool)isEqual:(id)arg1;
- (id)scheduledDate;
- (void)setDisplayName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setScheduledDate:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end