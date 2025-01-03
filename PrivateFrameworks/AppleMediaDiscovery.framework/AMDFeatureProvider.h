/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaDiscovery.framework/AppleMediaDiscovery
 */

@interface AMDFeatureProvider : NSObject

+ (id)getProviderForSource:(id)arg1 WithDomain:(id)arg2;

- (id)fetchOutputRemapDictForUsecase:(id)arg1;
- (id)getFeatureWithName:(id)arg1 withColumn:(id)arg2 error:(id*)arg3;
- (void)storeFeatureData:(id)arg1 error:(id*)arg2;
- (void)storeOutputRemapData:(id)arg1 error:(id*)arg2;

@end
