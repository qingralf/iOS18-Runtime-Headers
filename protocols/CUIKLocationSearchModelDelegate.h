/* Generated by RuntimeBrowser.
 */

@protocol CUIKLocationSearchModelDelegate

@required

- (CalDateRange *)dateRangeForSearchModel:(CUIKLocationSearchModel *)arg1;
- (NSString *)eventIDForSearchModel:(CUIKLocationSearchModel *)arg1;
- (void)locationSearchModel:(CUIKLocationSearchModel *)arg1 selectedLocation:(EKStructuredLocation *)arg2 withError:(NSError *)arg3;
- (void)locationSearchModel:(CUIKLocationSearchModel *)arg1 updatedSearchTypes:(unsigned long long)arg2;
- (bool)shouldIncludeConferenceRoom:(CUIKConferenceRoom *)arg1;
- (bool)shouldIssueAvailabilityRequestForSearchModel:(CUIKLocationSearchModel *)arg1;
- (EKSource *)sourceForSearchModel:(CUIKLocationSearchModel *)arg1;

@end