/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

@interface WDExertionPerceivedListDataProvider : WDQuantityListDataProvider {
    bool  _shouldDisplayAllSamples;
}

@property (nonatomic) bool shouldDisplayAllSamples;

- (id)createDataFetcherForSampleType:(id)arg1 predicate:(id)arg2 limit:(long long)arg3 sortDescriptors:(id)arg4 resultsHandler:(id /* block */)arg5;
- (void)setShouldDisplayAllSamples:(bool)arg1;
- (bool)shouldDisplayAllSamples;

@end
