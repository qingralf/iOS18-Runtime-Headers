/* Generated by RuntimeBrowser.
 */

@protocol MCMFileManagerResolvesPaths

@required

- (MCMFSNode *)fsNodeOfURL:(NSURL *)arg1 followSymlinks:(bool)arg2 error:(id*)arg3;
- (NSString *)fsSanitizedStringFromString:(NSString *)arg1 allowSpaces:(bool)arg2;
- (NSURL *)realPathForURL:(NSURL *)arg1 ifChildOfURL:(NSURL *)arg2;
- (NSURL *)realPathForURL:(NSURL *)arg1 isDirectory:(bool)arg2 error:(id*)arg3;

@end