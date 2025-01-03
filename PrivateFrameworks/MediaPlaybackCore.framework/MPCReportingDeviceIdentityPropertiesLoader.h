/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCReportingDeviceIdentityPropertiesLoader : NSObject <MPCReportingIdentityPropertiesLoading> {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSObject<OS_dispatch_queue> * _serialWorkQueue;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedLoader;

- (void).cxx_destruct;
- (id)init;
- (void)loadReportingIdentityPropertiesWithCompletionHandler:(id /* block */)arg1;

@end
