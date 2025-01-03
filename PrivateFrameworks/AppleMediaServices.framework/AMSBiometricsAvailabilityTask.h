/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSBiometricsAvailabilityTask : NSObject {
    void account;
    void connection;
    void purpose;
}

@property (nonatomic, readonly) AMSDaemonConnection *connection;

- (void).cxx_destruct;
- (id)connection;
- (id)init;
- (id)initWithAccount:(id)arg1 forSignaturePurpose:(unsigned long long)arg2;
- (id)perform;

@end
