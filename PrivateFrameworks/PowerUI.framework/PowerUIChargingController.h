/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
 */

@interface PowerUIChargingController : NSObject {
    NSLock * _chargeLimitLock;
    NSObject<OS_os_log> * _log;
    NSMutableDictionary * _tokenDict;
}

@property (nonatomic, retain) NSLock *chargeLimitLock;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic, retain) NSMutableDictionary *tokenDict;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)chargeLimitLock;
- (void)clearAllChargeLimits;
- (void)clearChargeLimitForLimitType:(unsigned long long)arg1;
- (id)init;
- (struct __CFString { }*)loadChargeLimitTokenForPreferenceKey:(id)arg1 forReason:(id)arg2;
- (id)log;
- (id)readNumberForPreferenceKey:(id)arg1;
- (struct __CFString { }*)registerNewTokenForPreferenceKey:(id)arg1 forReason:(id)arg2;
- (void)setChargeLimitLock:(id)arg1;
- (bool)setChargeLimitTo:(long long)arg1 forLimitType:(unsigned long long)arg2;
- (void)setLog:(id)arg1;
- (void)setNumber:(id)arg1 forPreferenceKey:(id)arg2;
- (void)setTokenDict:(id)arg1;
- (id)tokenDict;

@end
