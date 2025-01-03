/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKProvisioningAnalyticsSessionReporter : NSObject {
    <PKProvisioningAnalyticsSessionReportingResponder> * _responder;
    NSString * _sessionID;
}

@property (nonatomic) <PKProvisioningAnalyticsSessionReportingResponder> *responder;
@property (nonatomic) NSString *sessionID;

- (void).cxx_destruct;
- (void)_populateDictionary:(id)arg1 withError:(id)arg2;
- (id)initWithResponder:(id)arg1 sessionID:(id)arg2;
- (void)reportError:(id)arg1 context:(id)arg2;
- (void)reportEvent:(id)arg1;
- (void)reportOtherError:(id)arg1 context:(id)arg2;
- (void)resetProductTypes;
- (id)responder;
- (id)sessionID;
- (void)setProductType:(id)arg1 subtype:(id)arg2;
- (void)setResponder:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)setSetupProduct:(id)arg1;

@end
