/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServicesCore.framework/PhotoLibraryServicesCore
 */

@interface PLAssetsdNotificationClient : PLAssetsdBaseClient

- (void)asyncNotifyEndOfInterestForUnrenderedCinematicVideoItems;
- (void)asyncNotifyExpiringMomentShareWithUUIDs:(id)arg1 thumbnailImageData:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4;
- (void)asyncNotifyInterestingMemoryNotificationForColletionID:(id)arg1 notificationDeliveryDate:(id)arg2;
- (void)asyncNotifyInterestingMemoryNotificationViewedForColletionID:(id)arg1;
- (void)asyncNotifyPhotosChallengeNewQuestionsWithNotificationDeliveryDate:(id)arg1;
- (void)asyncNotifyPhotosChallengeSubmissionWithNotificationDeliveryDate:(id)arg1;
- (void)asyncNotifyReadyToViewMomentShareWithUUID:(id)arg1;
- (void)asyncNotifyReportAsJunkPhotoStreamInvitationForAlbumWithCloudGUID:(id)arg1;
- (void)asyncNotifyResponseToPhotoStreamInvitationForAlbumWithCloudGUID:(id)arg1 acceptInvitation:(bool)arg2;
- (void)asyncNotifySharedLibrarySuggestionsWithNotificationDeliveryDate:(id)arg1;
- (void)asyncNotifyStartOfInterestForUnrenderedCinematicVideoItems;
- (void)asyncNotifyUserViewedNotificationWithAlbumCloudGUID:(id)arg1;

@end
