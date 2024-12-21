/* Generated by RuntimeBrowser.
 */

@protocol ATXAppProtectionInfoProvider <NSObject>

@required

- (bool)bundleIdIsHiddenByUserPreference:(NSString *)arg1;
- (bool)bundleIdIsLockedByUserPreference:(NSString *)arg1;
- (bool)bundleIdIsLockedOrHiddenByUserPreference:(NSString *)arg1;
- (NSArray *)hiddenBundleIDs;
- (NSSet *)hiddenOrLockedBundleIDs;
- (NSArray *)lockedBundleIDs;

@end