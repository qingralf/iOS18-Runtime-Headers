/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUManagerServerClient : NSObject {
    BKSApplicationStateMonitor * _appStateMonitor;
    NSXPCConnection * _connection;
    NSString * _identifier;
    bool  _isApplication;
    bool  _isExclusiveClient;
    bool  _isForeground;
    bool  _isMessagable;
    unsigned int  _lastAppState;
    int  _pid;
    int  _type;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isApplication;
@property (nonatomic) bool isExclusiveClient;
@property (nonatomic, readonly) bool isForeground;
@property (nonatomic, readonly) bool isMessagable;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) <SUManagerClientInterface> *proxy;
@property (nonatomic) int type;

+ (bool)_isStateForeground:(unsigned int)arg1;
+ (bool)_isStateMessagable:(unsigned int)arg1;

- (void).cxx_destruct;
- (void)_applicationStateChanged:(id)arg1;
- (void)_evaluateForegroundness;
- (void)_evaluateMessagability;
- (id)connection;
- (void)dealloc;
- (id)description;
- (bool)hasEntitlement:(id)arg1;
- (id)identifier;
- (id)initWithConnection:(id)arg1;
- (void)invalidate;
- (bool)isApplication;
- (bool)isExclusiveClient;
- (bool)isForeground;
- (bool)isMessagable;
- (int)pid;
- (id)proxy;
- (void)setIsExclusiveClient:(bool)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (void)wakeupIfNecessary;

@end
