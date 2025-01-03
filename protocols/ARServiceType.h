/* Generated by RuntimeBrowser.
 */

@protocol ARServiceType <ARNamedService>

@required

+ (bool)isSupported;
+ (long long)maximumConcurrentServicesPerClient;

- (NSString *)clientBundleIdentifier;
- (int)clientProcessIdentifier;
- (NSString *)clientProcessName;
- (<ARDaemonServiceDataSource> *)dataSource;
- (<ARDaemonServiceDelegate> *)delegate;
- (void)invalidate;
- (bool)isActive;
- (void)resume;
- (void)setActive:(bool)arg1;
- (void)setDataSource:(id <ARDaemonServiceDataSource>)arg1;
- (void)setDelegate:(id <ARDaemonServiceDelegate>)arg1;
- (void)suspend;

@end
