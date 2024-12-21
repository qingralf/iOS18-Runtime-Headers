/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
 */

@interface BMDatabasesAccessDaemonDelegate : NSObject <BMAccessDelegate>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)handlesDirectoryCreationForResource:(id)arg1 inContainer:(id)arg2;
- (bool)handlesDirectoryRemovalForResource:(id)arg1 inContainer:(id)arg2;
- (bool)prepareResource:(id)arg1 withMode:(unsigned long long)arg2 inContainer:(id)arg3;
- (bool)teardownResource:(id)arg1 inContainer:(id)arg2;

@end