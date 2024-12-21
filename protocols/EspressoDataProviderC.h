/* Generated by RuntimeBrowser.
 */

@protocol EspressoDataProviderC <NSObject>

@required

- (NSNumber *)bindDataToInputsDirectly:(NSDictionary *)arg1 batchSize:(long long)arg2 error:(id*)arg3 errorDomain:(NSString *)arg4;
- (long long)numberOfDataPoints;
- (long long)numberOfIterationsPerEpoch:(long long)arg1;

@end