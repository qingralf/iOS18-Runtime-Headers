/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CascadeEngine.framework/CascadeEngine
 */

@interface CCDonateConnectionFactory : NSObject <CCDonateServiceProvider> {
    CCDonateRequestManager * _requestManager;
}

- (void).cxx_destruct;
- (id)initWithRequestManager:(id)arg1;
- (id)makeConnection:(id)arg1;
- (id)makeXPCConnection:(id)arg1;
- (void)terminateConnection:(id)arg1;

@end