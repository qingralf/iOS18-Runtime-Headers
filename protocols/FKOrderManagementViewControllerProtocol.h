/* Generated by RuntimeBrowser.
 */

@protocol FKOrderManagementViewControllerProtocol <NSObject>

@required

- (void)addOrderAtURL:(NSURL *)arg1;
- (void)showDetailsForOrder:(NSURL *)arg1;
- (void)showDetailsForOrderTypeIdentifier:(NSString *)arg1 orderIdentifier:(NSString *)arg2 fulfillmentIdentifier:(NSString *)arg3 sourceApplication:(NSString *)arg4;
- (void)showOrderDashboard;
- (void)showReturnDetailsForOrderTypeIdentifier:(NSString *)arg1 orderIdentifier:(NSString *)arg2 returnIdentifier:(NSString *)arg3 sourceApplication:(NSString *)arg4;

@end
