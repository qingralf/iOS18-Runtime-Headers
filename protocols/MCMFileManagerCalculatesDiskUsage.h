/* Generated by RuntimeBrowser.
 */

@protocol MCMFileManagerCalculatesDiskUsage

@required

- (struct { unsigned long long x1; unsigned long long x2; })diskUsageForURL:(NSURL *)arg1;
- (bool)enableFastDiskUsageForURL:(NSURL *)arg1 error:(id*)arg2;
- (struct { unsigned long long x1; unsigned long long x2; })fastDiskUsageForURL:(NSURL *)arg1;

@end