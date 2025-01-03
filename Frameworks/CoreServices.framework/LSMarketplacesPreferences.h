/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface LSMarketplacesPreferences : NSObject {
    NSArray * _preferredMarketplaces;
}

@property (nonatomic, copy) NSArray *preferredMarketplaces;

+ (id)currentPreferencesWithError:(id*)arg1;
+ (id)modifyPreferencesWithBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithValidatedPlist:(id)arg1;
- (id)preferredMarketplaces;
- (void)setPreferredMarketplaces:(id)arg1;
- (id)toPlist;

@end
