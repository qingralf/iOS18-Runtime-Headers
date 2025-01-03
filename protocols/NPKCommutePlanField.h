/* Generated by RuntimeBrowser.
 */

@protocol NPKCommutePlanField <NPKPassItemField>

@required

- (NSDate *)availableFrom;
- (NSDate *)availableUntil;
- (NSString *)detailLabel;
- (NSArray *)details;
- (bool)isActive;
- (bool)isCountBasedCommutePlan;
- (bool)isDeviceBound;
- (<NPKDateRange> *)usageDateRange;

@end
