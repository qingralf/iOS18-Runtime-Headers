/* Generated by RuntimeBrowser.
 */

@protocol HMDAppleAccountManagerDataSource <NSObject>

@required

- (id)accountChangeObserver;
- (<HMDACAccountStore> *)accountStore;
- (<HMDAPSConnection> *)apsConnection;
- (NSNotificationCenter *)notificationCenter;
- (NSObject<OS_dispatch_queue> *)queue;

@end