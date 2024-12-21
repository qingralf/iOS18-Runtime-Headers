/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContainerManagerCommon.framework/ContainerManagerCommon
 */

@interface MCMCommandFlushContainerCache : MCMCommand <MCMParametersFlushContainerCache> {
    <MCMContainerConfiguration> * _containerConfig;
    <MCMXPCMessage> * _message;
    bool  _transient;
}

@property (nonatomic, readonly) <MCMContainerConfiguration> *containerConfig;
@property (nonatomic, readonly) <MCMXPCMessage> *message;
@property (nonatomic, readonly) bool transient;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (id)containerConfig;
- (void)execute;
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;
- (id)message;
- (bool)preflightClientAllowed;
- (bool)transient;

@end