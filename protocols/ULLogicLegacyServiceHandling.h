/* Generated by RuntimeBrowser.
 */

@protocol ULLogicLegacyServiceHandling <NSObject>

@required

- (NSError *)donateMicroLocationTruthTagWithTagUUID:(void *)arg1 correspondingToTriggerUUID:(void *)arg2 handler:(void *)arg3 clientId:(void *)arg4; // needs 4 arg types, found 9: NSUUID *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*, NSString *
- (NSError *)donateMicroLocationTruthTagWithTagUUID:(void *)arg1 forRecordingEventsBetweenDate:(void *)arg2 andDate:(void *)arg3 handler:(void *)arg4 clientId:(void *)arg5; // needs 5 arg types, found 10: NSUUID *, NSDate *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*, NSString *
- (NSString *)getMicroLocationInternalVersion;
- (NSError *)getRecordingTriggerUUIDAndRequestMicroLocationRecordingScanWithAdditionalInformation:(void *)arg1 shouldForceRecording:(void *)arg2 handler:(void *)arg3 clientId:(void *)arg4; // needs 4 arg types, found 10: NSDictionary *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*, NSString *
- (void)requestCurrentMicroLocationWithAdditionalInformation:(NSDictionary *)arg1 clientId:(NSString *)arg2;
- (void)requestMicroLocationRecordingScanWithAdditionalInformation:(NSDictionary *)arg1 clientId:(NSString *)arg2;

@end