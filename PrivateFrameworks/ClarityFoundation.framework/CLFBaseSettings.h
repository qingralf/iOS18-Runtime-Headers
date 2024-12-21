/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClarityFoundation.framework/ClarityFoundation
 */

@interface CLFBaseSettings : AXBaseSettings {
    NSMutableDictionary * _preferenceKeysBySelectorName;
}

@property (nonatomic, readonly) NSString *domainName;

+ (id)allPreferenceSelectorsAsStrings;
+ (void)deleteAllKeys;
+ (id)domainName;

- (void).cxx_destruct;
- (void)_deleteAllKeys;
- (void)deleteAllKeys;
- (id)domainName;
- (id)domainNameForPreferenceKey:(id)arg1;
- (id)init;
- (id)observeUpdatesForSelector:(SEL)arg1 handler:(id /* block */)arg2;
- (id)preferenceKeyForSelector:(SEL)arg1;
- (void)registerUpdateBlock:(id /* block */)arg1 withListener:(id)arg2;

@end