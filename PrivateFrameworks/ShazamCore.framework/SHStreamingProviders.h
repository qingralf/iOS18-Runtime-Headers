/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ShazamCore.framework/ShazamCore
 */

@interface SHStreamingProviders : NSObject {
    NSDictionary * _providersKeyedByBundleID;
}

@property (nonatomic, readonly) NSDictionary *providersKeyedByBundleID;

- (void).cxx_destruct;
- (id)availableBundleIdentifiers;
- (long long)availableStreamingProviders;
- (id)buildStreamingProvidersFromResponseArray:(id)arg1;
- (id)initWithResponse:(id)arg1;
- (id)providerNameForBundleID:(id)arg1;
- (id)providersKeyedByBundleID;
- (id)searchURLForBundleID:(id)arg1 title:(id)arg2 artist:(id)arg3;
- (id)songURIForBundleID:(id)arg1;
- (id)streamingProviderForBundleID:(id)arg1;

@end