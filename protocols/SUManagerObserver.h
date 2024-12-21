/* Generated by RuntimeBrowser.
 */

@protocol SUManagerObserver <NSObject>

@optional

- (void)downloadDidFail:(SUDownload *)arg1 withError:(NSError *)arg2;
- (void)downloadDidFinish:(SUDownload *)arg1 withInstallPolicy:(SUInstallPolicy *)arg2;
- (void)downloadDidStart:(SUDownload *)arg1;
- (void)downloadWasInvalidated:(SUDownload *)arg1;
- (void)installDidFinish:(SUDescriptor *)arg1;
- (void)unattendedInstallationKeybagCreated;

@end