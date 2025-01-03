/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActivityUIServices.framework/ActivityUIServices
 */

@interface ActivityUIServices.ActivityAlertProvider : NSObject <ActivityUIServices.ActivityAlertProviding> {
    void activityIdentifier;
    void alertAction;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  alertConfiguration;
    void configuration;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  payload;
    void presentationOptions;
}

@property (nonatomic, readonly) long long action;
@property (nonatomic, readonly) NSString *body;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, retain) TLAlertConfiguration *configuration;
@property (nonatomic, readonly) NSString *deviceIdentifier;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *payloadIdentifier;
@property (nonatomic, retain) ACAlertPresentationOptions *presentationOptions;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (long long)action;
- (id)body;
- (id)bundleIdentifier;
- (id)configuration;
- (id)deviceIdentifier;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 action:(long long)arg2 presentationOptions:(id)arg3 payload:(id)arg4;
- (id)payloadIdentifier;
- (id)presentationOptions;
- (void)setConfiguration:(id)arg1;
- (void)setPresentationOptions:(id)arg1;
- (id)title;

@end
