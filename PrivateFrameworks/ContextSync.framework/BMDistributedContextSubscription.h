/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContextSync.framework/ContextSync
 */

@interface BMDistributedContextSubscription : NSObject {
    BMDistributedContextSubscriptionConfiguration * _configuration;
    BMDSL * _dsl;
    NSString * _identifier;
    NSString * _subscribedDevice;
    NSString * _subscribingDevice;
}

@property (retain) BMDistributedContextSubscriptionConfiguration *configuration;
@property (nonatomic, retain) BMDSL *dsl;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *subscribedDevice;
@property (nonatomic, retain) NSString *subscribingDevice;

- (void).cxx_destruct;
- (id)configuration;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dsl;
- (unsigned long long)hash;
- (id)identifier;
- (id)initFromDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1 dsl:(id)arg2 subscribingDevice:(id)arg3 subscribedDevice:(id)arg4 configuration:(id)arg5;
- (bool)isEqual:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDsl:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSubscribedDevice:(id)arg1;
- (void)setSubscribingDevice:(id)arg1;
- (id)subscribedDevice;
- (id)subscribingDevice;

@end
