/* Generated by RuntimeBrowser.
 */

@protocol HMMRadarInitiating <NSObject>

@required

- (void)requestRadarWithDisplayReason:(NSString *)arg1 radarTitle:(NSString *)arg2;
- (void)requestRadarWithDisplayReason:(NSString *)arg1 radarTitle:(NSString *)arg2 componentName:(NSString *)arg3 componentVersion:(NSString *)arg4 componentID:(long long)arg5;
- (void)requestRadarWithDisplayReason:(NSString *)arg1 radarTitle:(NSString *)arg2 componentName:(NSString *)arg3 componentVersion:(NSString *)arg4 componentID:(long long)arg5 attachments:(NSArray *)arg6;
- (void)requestRadarWithDisplayReason:(NSString *)arg1 radarTitle:(NSString *)arg2 componentName:(NSString *)arg3 componentVersion:(NSString *)arg4 componentID:(long long)arg5 attachments:(NSArray *)arg6 waitForResponse:(bool)arg7;

@end