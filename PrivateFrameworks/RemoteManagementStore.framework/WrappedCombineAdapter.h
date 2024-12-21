/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteManagementStore.framework/RemoteManagementStore
 */

@interface WrappedCombineAdapter : NSObject {
    <RMConfigurationCombineAdapter> * _wrappedAdapter;
}

@property (nonatomic, readonly) <RMConfigurationCombineAdapter> *wrappedAdapter;

- (void).cxx_destruct;
- (void)allDeclarationKeysForScope:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)applyCombinedConfiguration:(id)arg1 declarationKeys:(id)arg2 scope:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)beginProcessingConfigurationsForScope:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)endProcessingConfigurations:(bool)arg1 scope:(long long)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithAdapter:(id)arg1;
- (void)removeCombinedConfigurationForScope:(long long)arg1 completionHandler:(id /* block */)arg2;
- (id)wrappedAdapter;

@end