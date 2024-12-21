/* Generated by RuntimeBrowser.
 */

@protocol MCMFileManagerMutatesACLs

@required

- (bool)setTopLevelSystemContainerACLAtURL:(NSURL *)arg1 error:(id*)arg2;
- (bool)standardizeACLsAtURL:(NSURL *)arg1 isSystemContainer:(bool)arg2 error:(id*)arg3;
- (bool)standardizeACLsForSystemContainerAtURL:(NSURL *)arg1 error:(id*)arg2;
- (bool)standardizeAllSystemContainerACLsAtURL:(NSURL *)arg1 error:(id*)arg2;
- (bool)stripACLFromURL:(NSURL *)arg1 error:(id*)arg2;

@end