/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSRegulatoryEligibilityTask : AMSTask {
    NSObject * _cachedServerDataService;
    NSNumber * _override;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _overrideLock;
}

@property (nonatomic, retain) NSObject *cachedServerDataService;
@property (nonatomic, retain) NSNumber *override;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } overrideLock;

+ (id)fetchRegulatoryiTunesAccount;
+ (bool)setBillingCountry:(id)arg1 withStatus:(unsigned long long)arg2 error:(id*)arg3;
+ (id)setRegulatoryPropertyOnAccount:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)cachedServerDataService;
- (void)handleCachedDataUpdate;
- (id)init;
- (id)initWithServerData:(id)arg1;
- (id)override;
- (struct os_unfair_lock_s { unsigned int x1; })overrideLock;
- (void)setCachedServerDataService:(id)arg1;
- (bool)setForcedOverride:(id)arg1 error:(id*)arg2;
- (void)setOverride:(id)arg1;
- (id)update;
- (void)updateAMSDefaults:(id)arg1 country:(id)arg2 override:(id)arg3 result:(id)arg4;

@end
