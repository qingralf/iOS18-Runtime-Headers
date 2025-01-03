/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SCSharingReminders.framework/SCSharingReminders
 */

@interface SCSharingReminderSignal : NSObject <NSSecureCoding> {
    NSString * _sharingIdentifier;
    NSString * _sharingType;
    NSString * _signalType;
}

@property (nonatomic, retain) NSString *sharingIdentifier;
@property (nonatomic, retain) NSString *sharingType;
@property (nonatomic, retain) NSString *signalType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setSharingIdentifier:(id)arg1;
- (void)setSharingType:(id)arg1;
- (void)setSignalType:(id)arg1;
- (id)sharingIdentifier;
- (id)sharingType;
- (id)signalType;

@end
