/* Generated by RuntimeBrowser.
 */

@protocol MRUHearingServiceControllerObserver <NSObject>

@optional

- (void)hearingServiceController:(MRUHearingServiceController *)arg1 didChangePrimaryAmplification:(float)arg2;
- (void)hearingServiceController:(MRUHearingServiceController *)arg1 didChangePrimaryHearingAidEnabled:(bool)arg2;
- (void)hearingServiceController:(MRUHearingServiceController *)arg1 didChangePrimaryListeningModeOffAllowed:(bool)arg2;
- (void)hearingServiceController:(MRUHearingServiceController *)arg1 didChangeSecondaryAmplification:(float)arg2;
- (void)hearingServiceController:(MRUHearingServiceController *)arg1 didChangeSecondaryHearingAidEnabled:(bool)arg2;
- (void)hearingServiceController:(MRUHearingServiceController *)arg1 didChangeSecondaryListeningModeOffAllowed:(bool)arg2;

@end
