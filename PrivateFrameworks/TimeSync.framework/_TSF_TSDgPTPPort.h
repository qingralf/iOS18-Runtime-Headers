/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface _TSF_TSDgPTPPort : NSObject {
    unsigned long long  _clockIdentifier;
    _TSF_IODConnection * _connection;
    IOKInterestNotification * _generalInterestNotification;
    IOKNotificationPort * _notificationPort;
    unsigned short  _portNumber;
    int  _portRole;
    NSObject<OS_dispatch_queue> * _propertyUpdateQueue;
    IOKService * _service;
    bool  _updatePropertiesOnPropertyChange;
}

@property (nonatomic) unsigned long long clockIdentifier;
@property (nonatomic, readonly) _TSF_IODConnection *connection;
@property (nonatomic) unsigned short portNumber;
@property (nonatomic) int portRole;
@property (nonatomic, readonly) int portType;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyUpdateQueue;
@property (nonatomic, readonly) IOKService *service;

+ (id)diagnosticInfoForClockIdentifier:(unsigned long long)arg1 andPortNumber:(unsigned short)arg2;
+ (id)diagnosticInfoForService:(id)arg1;
+ (id)gPTPPortWithClockIdentifier:(unsigned long long)arg1 portNumber:(unsigned short)arg2;
+ (id)gPTPPortWithService:(id)arg1;
+ (id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)arg1 andPortNumber:(unsigned short)arg2;
+ (id)iokitMatchingDictionaryForPortClass:(id)arg1 clockIdentifier:(unsigned long long)arg2 andPortNumber:(unsigned short)arg3;

- (void).cxx_destruct;
- (unsigned long long)_clockIdentifier;
- (unsigned short)_portNumber;
- (int)_portRole;
- (unsigned long long)clockIdentifier;
- (id)connection;
- (void)finalizeNotifications;
- (id)getMetrics;
- (id)getMetricsWithDelta:(id)arg1;
- (id)init;
- (id)initWithService:(id)arg1;
- (id)initWithService:(id)arg1 pid:(int)arg2;
- (unsigned short)portNumber;
- (int)portRole;
- (int)portType;
- (id)propertiesForXPC;
- (id)propertyUpdateQueue;
- (id)service;
- (void)serviceTerminated;
- (void)setClockIdentifier:(unsigned long long)arg1;
- (void)setPortNumber:(unsigned short)arg1;
- (void)setPortRole:(int)arg1;
- (void)setPropertyUpdateQueue:(id)arg1;
- (bool)startAutomaticPropertyUpdates;
- (bool)stopAutomaticPropertyUpdates;
- (void)updateProperties;

@end
