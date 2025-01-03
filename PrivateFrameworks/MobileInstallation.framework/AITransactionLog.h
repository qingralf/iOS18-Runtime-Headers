/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileInstallation.framework/MobileInstallation
 */

@interface AITransactionLog : NSObject {
    NSObject<OS_os_log> * _log;
}

+ (id)_defaultLog;
+ (void)initializeWithLog:(id)arg1;
+ (void)logScenario:(id)arg1 step:(unsigned long long)arg2 success:(bool)arg3 forBundleID:(id)arg4 description:(id)arg5;
+ (void)logStep:(unsigned long long)arg1 byParty:(unsigned long long)arg2 phase:(unsigned long long)arg3 success:(bool)arg4 forBundleID:(id)arg5 description:(id)arg6;
+ (void)logStep:(unsigned long long)arg1 byParty:(unsigned long long)arg2 phase:(unsigned long long)arg3 success:(bool)arg4 forBundleID:(id)arg5 persona:(id)arg6 description:(id)arg7;

- (void).cxx_destruct;
- (id)_initWithLog:(id)arg1;
- (void)_logScenario:(id)arg1 step:(unsigned long long)arg2 success:(bool)arg3 forBundleID:(id)arg4 persona:(id)arg5 description:(id)arg6;

@end
