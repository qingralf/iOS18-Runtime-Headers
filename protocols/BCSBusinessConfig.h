/* Generated by RuntimeBrowser.
 */

@protocol BCSBusinessConfig <NSObject, BCSExpiring>

@required

- (long long)buckets;
- (NSURL *)filterMegaShardURL;
- (long long)filterShardCount;
- (NSNumber *)itemTTL;

@end