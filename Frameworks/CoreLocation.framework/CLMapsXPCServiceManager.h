/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLMapsXPCServiceManager : NSObject {
    NSXPCConnection * _connection;
    NSTimer * fInactivityTimer;
    double  fTimerUpdateMachContTime;
}

@property (nonatomic, retain) NSXPCConnection *connection;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedInstance;

- (void)clearMemoryAndExitHelperProcessCleanly;
- (void)collectMapDataOfType:(long long)arg1 aroundCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 inRadius:(double)arg3 allowNetwork:(bool)arg4 isPedestrianOrCycling:(bool)arg5 clearTiles:(bool)arg6 callSynchronously:(bool)arg7 WithReply:(id /* block */)arg8;
- (id)connection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)createConnection;
- (void)dealloc;
- (void)onTimerFire:(id)arg1;
- (void)releaseMapHelperServiceOSTransaction;
- (void)setConnection:(id)arg1;
- (void)updateTimer;

@end