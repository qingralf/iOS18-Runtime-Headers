/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCTrialConfiguration : NSObject {
    bool  enabledForFPFSMigration;
    NSString * factorPackId;
    NSString * rampId;
    NSString * rolloutId;
}

@property (nonatomic, readonly) bool enabledForFPFSMigration;
@property (nonatomic, readonly) NSString *factorPackId;
@property (nonatomic, readonly) NSString *rampId;
@property (nonatomic, readonly) NSString *rolloutId;

+ (id)defaultConfiguration;

- (void).cxx_destruct;
- (bool)boolForFactor:(id)arg1 client:(id)arg2 namespace:(id)arg3 byDefault:(bool)arg4;
- (bool)enabledForFPFSMigration;
- (id)factorPackId;
- (id)init;
- (long long)longLongForFactor:(id)arg1 client:(id)arg2 namespace:(id)arg3 min:(long long)arg4 max:(long long)arg5 byDefault:(long long)arg6;
- (id)rampId;
- (void)refresh;
- (id)rolloutId;

@end
