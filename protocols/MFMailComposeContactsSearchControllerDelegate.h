/* Generated by RuntimeBrowser.
 */

@protocol MFMailComposeContactsSearchControllerDelegate <NSObject>

@required

- (long long)addressableGroupResultStyleForComposeContactsSearchController:(MFMailComposeContactsSearchController *)arg1;
- (void)composeContactsSearchController:(MFMailComposeContactsSearchController *)arg1 didFindCorecipients:(NSArray *)arg2;
- (void)composeContactsSearchController:(MFMailComposeContactsSearchController *)arg1 didSortResults:(NSArray *)arg2;
- (void)composeContactsSearchController:(MFMailComposeContactsSearchController *)arg1 finishedWithResults:(bool)arg2;
- (MFMailAccountProxy *)sendingAccountProxyForComposeContactsSearchController:(MFMailComposeContactsSearchController *)arg1;

@end
