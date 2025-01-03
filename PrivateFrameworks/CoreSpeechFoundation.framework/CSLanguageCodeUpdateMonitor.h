/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeechFoundation.framework/CoreSpeechFoundation
 */

@interface CSLanguageCodeUpdateMonitor : CSEventMonitor

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (bool)isLanguageCodeCurrent:(id)arg1;
- (void)notifySiriLanguageCodeChanged:(id)arg1;

@end
