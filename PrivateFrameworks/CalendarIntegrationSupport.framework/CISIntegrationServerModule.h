/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarIntegrationSupport.framework/CalendarIntegrationSupport
 */

@interface CISIntegrationServerModule : NSObject <CADModule> {
    _TtC26CalendarIntegrationSupport17IntegrationServer * server;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activate;
- (void)catchupSyncRequested;
- (void)deactivate;
- (void)didRegisterForAlarms;
- (id)init;
- (void)protectedDataDidBecomeAvailable;
- (void)receivedAlarmNamed:(id)arg1;
- (void)receivedNotificationNamed:(id)arg1;
- (void)regularSyncRequested;

@end
