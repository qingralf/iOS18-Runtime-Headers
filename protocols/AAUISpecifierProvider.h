/* Generated by RuntimeBrowser.
 */

@protocol AAUISpecifierProvider <NSObject>

@required

- (<AAUISpecifierProviderDelegate> *)delegate;
- (id)initWithAccountManager:(AIDAAccountManager *)arg1;
- (void)setDelegate:(id <AAUISpecifierProviderDelegate>)arg1;
- (void)setSpecifiers:(NSArray *)arg1;
- (NSArray *)specifiers;

@optional

- (bool)handleURL:(NSDictionary *)arg1;
- (void)setADPState:(bool)arg1;

@end
