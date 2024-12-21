/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FPFS.framework/FPFS
 */

@interface FPFSSQLBackupManager : NSObject {
    _TtC9libfssync19FPFSSQLBackupEngine * _backupEngine;
    FPRTCReportingSession * _rtcReporting;
}

@property (nonatomic, retain) _TtC9libfssync19FPFSSQLBackupEngine *backupEngine;
@property (nonatomic, readonly) FPRTCReportingSession *rtcReporting;

- (void).cxx_destruct;
- (void)backUpWithCompletionHandler:(id /* block */)arg1;
- (id)backupEngine;
- (id)initWithUserURL:(id)arg1 outputUserURL:(id)arg2;
- (void)reportCompletionTelemetryWithError:(id)arg1;
- (id)rtcReporting;
- (void)setBackupEngine:(id)arg1;

@end