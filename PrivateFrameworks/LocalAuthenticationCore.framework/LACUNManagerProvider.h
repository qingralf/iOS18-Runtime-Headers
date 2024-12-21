/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LocalAuthenticationCore.framework/LocalAuthenticationCore
 */

@interface LACUNManagerProvider : NSObject {
    NSMutableDictionary * _sharedInstances;
}

@property (nonatomic, retain) NSMutableDictionary *sharedInstances;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)setSharedInstances:(id)arg1;
- (id)sharedInstanceWithBundleIdentifier:(id)arg1 categories:(id)arg2 replyQueue:(id)arg3;
- (id)sharedInstanceWithBundleIdentifier:(id)arg1 replyQueue:(id)arg2;
- (id)sharedInstances;

@end