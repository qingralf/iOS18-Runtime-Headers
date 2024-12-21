/* Generated by RuntimeBrowser.
 */

@protocol BMAccessDelegate <NSObject>

@required

- (bool)handlesDirectoryCreationForResource:(BMResourceSpecifier *)arg1 inContainer:(BMResourceContainer *)arg2;
- (bool)handlesDirectoryRemovalForResource:(BMResourceSpecifier *)arg1 inContainer:(BMResourceContainer *)arg2;
- (bool)prepareResource:(BMResourceSpecifier *)arg1 withMode:(unsigned long long)arg2 inContainer:(BMResourceContainer *)arg3;
- (bool)teardownResource:(BMResourceSpecifier *)arg1 inContainer:(BMResourceContainer *)arg2;

@end