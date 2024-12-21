/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNFeatureFlagsTestDouble : NSObject <CNFeatureFlags> {
    <CNFeatureFlags> * _fallback;
    NSMutableDictionary * _featureFlags;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithFeatureFlags:(id)arg1;
- (bool)isFeatureEnabled:(unsigned long long)arg1;
- (void)setFeatureEnabled:(bool)arg1 forFeature:(unsigned long long)arg2;

@end