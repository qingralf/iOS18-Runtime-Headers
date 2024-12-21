/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKGameActivityInternal : GKInternalRepresentation {
    NSString * _activityID;
    NSString * _activityType;
    NSString * _bundleID;
    NSDate * _createdAt;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly, copy) NSString *activityID;
@property (nonatomic, readonly, copy) NSString *activityType;
@property (nonatomic, readonly, copy) NSString *bundleID;
@property (nonatomic, readonly) NSDate *createdAt;
@property (nonatomic, readonly) NSDictionary *userInfo;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)activityID;
- (id)activityType;
- (id)bundleID;
- (id)createdAt;
- (id)description;
- (unsigned long long)hash;
- (id)initWithActivityType:(id)arg1 bundleID:(id)arg2 andUserInfo:(id)arg3;
- (id)initWithActivityType:(id)arg1 bundleID:(id)arg2 createdAt:(id)arg3 andUserInfo:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)userInfo;

@end