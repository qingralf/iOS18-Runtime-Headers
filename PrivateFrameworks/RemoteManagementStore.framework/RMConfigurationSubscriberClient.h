/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteManagementStore.framework/RemoteManagementStore
 */

@interface RMConfigurationSubscriberClient : NSObject {
    RMStatusPublisherDelegate * _publisherDelegate;
    RMConfigurationSubscriberDelegate * _subscriberDelegate;
}

@property (nonatomic, retain) RMStatusPublisherDelegate *publisherDelegate;
@property (nonatomic, retain) RMConfigurationSubscriberDelegate *subscriberDelegate;

+ (void)_currentLocaleDidChange:(id)arg1;
+ (void)_loadDynamicSchema;
+ (void)_registerApplicatorModelClasses:(id)arg1;
+ (void)_registerForLocaleChange;
+ (void)_registerPublisherModelClasses:(id)arg1;
+ (int)runConfigurationSubscriberClientWithApplicators:(id)arg1 publisherClass:(Class)arg2;
+ (int)runConfigurationSubscriberClientWithApplicators:(id)arg1 publisherClass:(Class)arg2 initializeSandbox:(bool)arg3;

- (void).cxx_destruct;
- (void)_buildSubscribedReferences:(id)arg1 declarations:(id)arg2 store:(id)arg3;
- (void)fetchConfigurationUIsWithTypes:(id)arg1 scope:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchConfigurationsWithTypes:(id)arg1 scope:(long long)arg2 completionHandler:(id /* block */)arg3;
- (id)publisherDelegate;
- (void)sendStatusKeys:(id)arg1 storeIdentifier:(id)arg2 scope:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)setPublisherDelegate:(id)arg1;
- (void)setSubscriberDelegate:(id)arg1;
- (id)subscriberDelegate;

@end
