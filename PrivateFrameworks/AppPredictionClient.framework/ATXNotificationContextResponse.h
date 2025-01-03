/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
 */

@interface ATXNotificationContextResponse : NSObject <NSSecureCoding> {
    double  _importanceConfidenceScore;
    NSDictionary * _notificationFeatureDictionary;
    int  _notificationSenderImportance;
}

@property (nonatomic, readonly) double importanceConfidenceScore;
@property (nonatomic, readonly) NSDictionary *notificationFeatureDictionary;
@property (nonatomic, readonly) int notificationSenderImportance;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (double)importanceConfidenceScore;
- (id)initWithCoder:(id)arg1;
- (id)initWithNotificationSenderImportance:(int)arg1 importanceConfidenceScore:(double)arg2 notificationFeatureDictionary:(id)arg3;
- (id)notificationFeatureDictionary;
- (int)notificationSenderImportance;

@end
