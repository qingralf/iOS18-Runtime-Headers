/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
 */

@interface ATXNotificationContextRequest : NSObject <NSSecureCoding> {
    ATXEntityContextRequestOptionalSignals * _contextRequestSignals;
    ATXUserNotification * _userNotification;
}

@property (nonatomic, readonly) ATXEntityContextRequestOptionalSignals *contextRequestSignals;
@property (nonatomic, readonly) ATXUserNotification *userNotification;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contextRequestSignals;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserNotification:(id)arg1 additionalContextSignals:(id)arg2;
- (id)userNotification;

@end