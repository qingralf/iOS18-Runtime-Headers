/* Generated by RuntimeBrowser.
 */

@protocol CESRSpeechProfileAdminService

@required

- (oneway void)beginEvaluation:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: KVProfile *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (oneway void)beginEvaluationWithSerializedSets:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (oneway void)endEvaluation:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (oneway void)rebuildSpeechProfileForUserId:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (oneway void)triggerMaintenance:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*

@end
