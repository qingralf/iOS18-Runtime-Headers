/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUStateEvent : NSObject {
    NSString * _name;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSDictionary *userInfo;

// Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils

+ (id)enterState;
+ (id)exitState;
+ (id)initialTransition;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithName:(id)arg1 userInfo:(id)arg2;
- (id)name;
- (id)userInfo;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (void)completedWithError:(id)arg1;
- (id)initWithName:(id)arg1 userInfo:(id)arg2 completion:(id /* block */)arg3;

@end
