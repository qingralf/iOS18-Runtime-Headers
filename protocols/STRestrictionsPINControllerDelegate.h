/* Generated by RuntimeBrowser.
 */

@protocol STRestrictionsPINControllerDelegate <DevicePINControllerDelegate>

@required

- (bool)validatePIN:(NSString *)arg1 forPINController:(STRestrictionsPINController *)arg2;

@optional

- (NSObject<STRootViewModelCoordinator> *)coordinator;
- (void)setPIN:(NSString *)arg1 forPINController:(STRestrictionsPINController *)arg2;

@end