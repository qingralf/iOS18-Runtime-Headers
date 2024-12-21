/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BacklightServicesHost.framework/BacklightServicesHost
 */

@interface BLSHTTRWatchdogConfiguration : NSObject {
    bool  _enabledByDefault;
    NSString * _identifier;
    double  _leeway;
    double  _timeout;
    NSString * _timerIdentifier;
}

@property bool enabledByDefault;
@property (retain) NSString *identifier;
@property double leeway;
@property double timeout;
@property (retain) NSString *timerIdentifier;

- (void).cxx_destruct;
- (bool)enabledByDefault;
- (id)identifier;
- (double)leeway;
- (void)setEnabledByDefault:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLeeway:(double)arg1;
- (void)setTimeout:(double)arg1;
- (void)setTimerIdentifier:(id)arg1;
- (double)timeout;
- (id)timerIdentifier;

@end