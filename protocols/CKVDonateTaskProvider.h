/* Generated by RuntimeBrowser.
 */

@protocol CKVDonateTaskProvider <NSObject>

@required

- (NSSet *)allInstalledAppBundleIdentifiers;
- (CKVDonateTask *)derivativeTaskForId:(unsigned short)arg1 usingLocalization:(CKVLocalization *)arg2 modifiedItemIds:(NSSet *)arg3;
- (void)enableSimulatedTasks:(bool)arg1;
- (void)setupBridgeListenersWithHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (CKVDonateTask *)taskForId:(unsigned short)arg1 usingLocalization:(CKVLocalization *)arg2;
- (CKVDonateTask *)verificationTaskForId:(unsigned short)arg1;

@end
