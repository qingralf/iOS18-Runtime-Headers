/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeFoundation.framework/BiomeFoundation
 */

@interface BMResourceSyncPolicy : NSObject {
    long long  _currentPlatform;
    NSDictionary * _platformPolicies;
}

@property (nonatomic, readonly) long long currentPlatform;
@property (nonatomic, readonly) NSDictionary *platformPolicies;

- (void).cxx_destruct;
- (long long)currentPlatform;
- (unsigned long long)directionsSupportedForTransport:(unsigned long long)arg1;
- (unsigned long long)directionsSupportedForTransport:(unsigned long long)arg1 fromPlatform:(long long)arg2;
- (id)init;
- (id)initWithPolicyDictionary:(id)arg1;
- (id)platformPolicies;
- (bool)supportsSyncingWithPlatform:(long long)arg1 overTransport:(unsigned long long)arg2 inDirection:(unsigned long long)arg3;
- (bool)supportsSyncingWithPlatform:(long long)arg1 overTransport:(unsigned long long)arg2 inDirection:(unsigned long long)arg3 fromPlatform:(long long)arg4;
- (bool)supportsTransport:(unsigned long long)arg1 direction:(unsigned long long)arg2;
- (bool)supportsTransport:(unsigned long long)arg1 direction:(unsigned long long)arg2 fromPlatform:(long long)arg3;

@end
