/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DigitalSeparation.framework/DigitalSeparation
 */

@interface DSDaemonProxy : NSObject {
    SCSharingReminderPeerService * _daemonConnection;
    NSMutableSet * _unreportedSignals;
}

@property (nonatomic, retain) SCSharingReminderPeerService *daemonConnection;
@property (nonatomic, readonly) NSArray *signalsToReport;
@property (nonatomic, retain) NSMutableSet *unreportedSignals;

+ (void)initialize;

- (void).cxx_destruct;
- (void)addSignalWithIdentifier:(id)arg1 sharingType:(id)arg2 signalType:(id)arg3;
- (id)daemonConnection;
- (id)init;
- (void)removeSignalWithIdentifier:(id)arg1 sharingType:(id)arg2 signalType:(id)arg3;
- (void)sendAggregatedSignals;
- (void)setDaemonConnection:(id)arg1;
- (void)setUnreportedSignals:(id)arg1;
- (id)signalsToReport;
- (id)unreportedSignals;

@end
