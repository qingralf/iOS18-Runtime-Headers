/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

@interface MCUIBridgeRMConfigurationsDataProvider : NSObject <RMConfigurationsDataProvider> {
    NSString * _profileIdentifier;
}

@property (nonatomic, retain) NSString *profileIdentifier;

- (void).cxx_destruct;
- (id)_rmConfigurationViewModels;
- (id)initWithProfileIdentifier:(id)arg1;
- (id)pluginSectionViewModels;
- (id)pluginViewModels;
- (id)profileIdentifier;
- (id)profileViewModels;
- (void)setConfigurationActivated:(bool)arg1 forViewModel:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setProfileIdentifier:(id)arg1;

@end
