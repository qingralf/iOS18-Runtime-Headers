/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterPlatformSupport.framework/PosterPlatformSupport
 */

@interface PPSHostConfigurationManager : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableSet * _lock_rolesWithoutHostConfigurations;
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, retain) NSUserDefaults *userDefaults;

+ (id)bundleNameForRole:(id)arg1;
+ (id)sharedHostConfigurationManager;

- (void).cxx_destruct;
- (id)_lock_cachedHostConfigurationForRole:(id)arg1;
- (void)_lock_deleteHostConfigurationForRole:(id)arg1;
- (id)_lock_hostConfigurationForRole:(id)arg1 outCacheHit:(bool*)arg2;
- (id)_lock_loadBundledHostConfigurationForRole:(id)arg1;
- (void)_lock_setHostConfiguration:(id)arg1 forRole:(id)arg2;
- (id)defaultsKeyForRole:(id)arg1;
- (void)deleteHostConfigurationForRole:(id)arg1;
- (id)hostConfigurationForRole:(id)arg1;
- (id)initWithUserDefaults:(id)arg1;
- (void)setHostConfiguration:(id)arg1 forRole:(id)arg2;
- (void)setUserDefaults:(id)arg1;
- (id)userDefaults;

@end
