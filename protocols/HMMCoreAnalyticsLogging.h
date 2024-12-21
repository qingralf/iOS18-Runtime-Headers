/* Generated by RuntimeBrowser.
 */

@protocol HMMCoreAnalyticsLogging <NSObject>

@required

- (NSDictionary *)coreAnalyticsEventDictionary;
- (NSString *)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;

@optional

- (NSString *)accessoryIdentifier;
- (NSUUID *)homeUUID;

@end