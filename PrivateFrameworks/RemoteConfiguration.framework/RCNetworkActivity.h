/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
 */

@interface RCNetworkActivity : NSObject {
    RCUnfairLock * _accessLock;
    NSObject<OS_nw_activity> * _activity;
    unsigned int  _domain;
    unsigned int  _label;
    NSUUID * _parentToken;
}

@property (nonatomic, retain) RCUnfairLock *accessLock;
@property (nonatomic) unsigned int domain;
@property (nonatomic) unsigned int label;
@property (nonatomic, retain) NSUUID *parentToken;

+ (id)activityWithDomain:(unsigned int)arg1 label:(unsigned int)arg2 parentToken:(id)arg3;

- (void).cxx_destruct;
- (id)accessLock;
- (void)attachActivityToTask:(id)arg1;
- (void)completeActivityWithSuccess:(bool)arg1;
- (unsigned int)domain;
- (id)initWithDomain:(unsigned int)arg1 label:(unsigned int)arg2 parentToken:(id)arg3;
- (unsigned int)label;
- (id)parentToken;
- (void)setAccessLock:(id)arg1;
- (void)setDomain:(unsigned int)arg1;
- (void)setLabel:(unsigned int)arg1;
- (void)setParentToken:(id)arg1;
- (void)startActivity;

@end