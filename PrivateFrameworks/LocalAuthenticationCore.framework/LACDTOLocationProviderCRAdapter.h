/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LocalAuthenticationCore.framework/LocalAuthenticationCore
 */

@interface LACDTOLocationProviderCRAdapter : NSObject <LACDTOLocationProvider> {
    NSObject<OS_dispatch_queue> * _internalQueue;
    LACDTOLocationState * _locationState;
    RTRoutineManager * _manager;
    NSObject<OS_dispatch_queue> * _replyQueue;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_checkIsInFamiliarLocationWithCompletion:(id /* block */)arg1;
- (long long)_locationStateRawValueFromLocationEnum:(long long)arg1;
- (void)checkIsInFamiliarLocationWithCompletion:(id /* block */)arg1;
- (id)description;
- (id)initWithWorkQueue:(id)arg1;

@end
