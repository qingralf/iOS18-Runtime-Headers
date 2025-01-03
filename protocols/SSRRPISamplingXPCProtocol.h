/* Generated by RuntimeBrowser.
 */

@protocol SSRRPISamplingXPCProtocol

@required

- (void)getAudioIdWithRequestId:(void *)arg1 languageCode:(void *)arg2 date:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSString *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSString *, void*
- (void)getEnrollmentSelectionStatusWithLocale:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSNumber *, void*
- (void)markFinishStatusForAllWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeAllSamplingMetaDataWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)removeMappingOnAndBefore:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeMappingWithLocale:(void *)arg1 date:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeRequestIdToAudioIdMappingWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)updateStatus:(void *)arg1 languageCode:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSNumber *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)writeIntoMappingWithRequestId:(void *)arg1 audioId:(void *)arg2 date:(void *)arg3 locale:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NSString *, NSString *, NSDate *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
