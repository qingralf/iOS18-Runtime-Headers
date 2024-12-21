/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNXPCContactsSupport : NSObject <CNXPCContactsSupportProtocol> {
    <CNContactsLogger> * _logger;
    CNXPCConnection * _serviceConnection;
    <CNXPCContactsSupportService> * _serviceProxy;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CNContactsLogger> *logger;
@property (nonatomic, readonly) CNXPCConnection *serviceConnection;
@property (nonatomic, readonly) <CNXPCContactsSupportService> *serviceProxy;
@property (readonly) Class superclass;

+ (id)os_log;
+ (id)serviceProtocolInterface;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (id)logger;
- (id)requestProviderDomainCommand:(id)arg1 error:(id*)arg2;
- (id)serviceConnection;
- (id)serviceProxy;

@end