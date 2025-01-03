/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSAppsOperation : VSAsyncOperation {
    VSAccountChannels * _accountChannels;
    VSAccountChannelsCenter * _accountChannelsCenter;
    VSFailable * _channelAppsFailable;
    NSObject<OS_dispatch_group> * _dispatchGroup;
    VSIdentityProvider * _identityProvider;
    NSArray * _nonChannelApps;
    VSApps * _result;
}

@property (nonatomic, retain) VSAccountChannels *accountChannels;
@property (nonatomic, retain) VSAccountChannelsCenter *accountChannelsCenter;
@property (nonatomic, retain) VSFailable *channelAppsFailable;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *dispatchGroup;
@property (nonatomic, retain) VSIdentityProvider *identityProvider;
@property (nonatomic, retain) NSArray *nonChannelApps;
@property (nonatomic, retain) VSApps *result;

- (void).cxx_destruct;
- (id)accountChannels;
- (id)accountChannelsCenter;
- (id)channelAppsFailable;
- (id)createAppsResult;
- (id)dispatchGroup;
- (void)executionDidBegin;
- (void)fetchChannelAppsWithCompletion:(id /* block */)arg1;
- (void)filterVisionOSCompatibleApps:(id)arg1;
- (id)identityProvider;
- (id)initWithIdentityProvider:(id)arg1;
- (id)initWithIdentityProvider:(id)arg1 accountChannels:(id)arg2;
- (id)nonChannelApps;
- (id)result;
- (void)setAccountChannels:(id)arg1;
- (void)setAccountChannelsCenter:(id)arg1;
- (void)setChannelAppsFailable:(id)arg1;
- (void)setDispatchGroup:(id)arg1;
- (void)setIdentityProvider:(id)arg1;
- (void)setNonChannelApps:(id)arg1;
- (void)setResult:(id)arg1;

@end
