/* Generated by RuntimeBrowser.
 */

@protocol ChatKit.CKSuggestedActionsHandlerDelegate

@required

- (void)didRequestComposeAudio:(NSString *)arg1;
- (void)didRequestComposeText:(NSString *)arg1 text:(NSString *)arg2;
- (void)didRequestComposeVideo:(NSString *)arg1;
- (void)didRequestCreateCalendarEvent:(EKEventEditViewController *)arg1;
- (void)didRequestLocationPush:(bool)arg1;
- (void)didRequestOpenWebView:(IMActionOpenWeb *)arg1;
- (void)didRequestSendDeviceDetails;
- (void)didRequestSendResponseForAction:(IMChipAction *)arg1;
- (void)didRequestSettings;

@end
