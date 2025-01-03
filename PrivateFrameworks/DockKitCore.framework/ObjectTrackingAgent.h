/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DockKitCore.framework/DockKitCore
 */

@interface ObjectTrackingAgent : NSObject <DockKitCore.DockClientDebugProtocol, DockKitCore.DockCoreManagerConnectionDelegate, DockKitCore.StateEventProtocol, DockKitCore.SystemTrackingProtocol, DockKitCore.XPCTrackingCameraCaptureClientProtocol> {
    void _selectedBodyIDs;
    void _selectedFaceIDs;
    void _selectedIDsLock;
    void _trackingEnabled;
    void agentQueue;
    void appID;
    void configStateLock;
    void currentCameraSession;
    void customInferenceEnabledConfig;
    void debugEnabled;
    void delegate;
    void expectingDisconnect;
    void lastFaces;
    void lastImage;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastSummaryPublishTime;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void manager;
    void publishSummaryPeriod;
    void registeredForTrackingConfigChanges;
    void setupComplete;
    void setupOngoing;
    void tracker;
    void trackerLock;
    void trackingSummaryLock;
}

@property (nonatomic, readonly) bool customInferenceEnabled;
@property (nonatomic, copy) NSDate *lastSummaryPublishTime;
@property (nonatomic, readonly) double publishSummaryPeriod;

+ (bool)trackingSummaryDebugEnabled;

- (void).cxx_destruct;
- (void)accessoryDescriptionFeedbackWithProcessID:(int)arg1 info:(id)arg2 accessoryDescription:(id)arg3 err:(id)arg4;
- (bool)customInferenceEnabled;
- (void)deRegisterForDebugNotificationsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)dealloc;
- (void)diagnosticsFeedbackWithProcessID:(int)arg1 info:(id)arg2 path:(id)arg3 err:(id)arg4;
- (void)disconnectedWithErr:(id)arg1;
- (id)dockKitFocusObservationFrom:(id)arg1;
- (bool)docked;
- (void)dumpTrackerDiagnosticsWithPath:(id)arg1;
- (void)dumpTrackerStateWithPath:(id)arg1;
- (void)flip180WithClockwise:(bool)arg1;
- (void)fwUpdateFeedbackWithProcessID:(int)arg1 info:(id)arg2 message:(id)arg3 complete:(bool)arg4 err:(id)arg5;
- (void)getConnectedTrackerWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 30: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '_' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, unsigned char, long double, out BOOL, /* Warning: Unrecognized filer type: 'k' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'K' using 'void*' */ void*, int, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, unsigned char, out const /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*, const /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, BOOL, /* Warning: Unrecognized filer type: 'k' using 'void*' */ void*, int, in /* Warning: Unrecognized filer type: 'g' using 'void*' */ void*, unsigned short, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, in double, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (id)getDockCoreObservationsFrom:(id)arg1 cameraPort:(id)arg2;
- (id)getSelectedBodyIds;
- (id)getSelectedFaceIds;
- (id)getTrackedObjects;
- (void)haltFeedbackWithProcessID:(int)arg1 info:(id)arg2 success:(bool)arg3 complete:(bool)arg4 err:(id)arg5;
- (id)init;
- (id)initWithAppID:(id)arg1;
- (id)initWithConfig:(id)arg1;
- (id)initWithTrackerConfig:(id)arg1;
- (void)isTrackingWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (id)lastSummaryPublishTime;
- (void)processImageWithImage:(void *)arg1 faces:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 22: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, unsigned char, unsigned int, unsigned int, /* Warning: Unrecognized filer type: 'm' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'g' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, const const /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'y' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (double)publishSummaryPeriod;
- (void)rebootFeedbackWithProcessID:(int)arg1 info:(id)arg2 success:(bool)arg3 complete:(bool)arg4 err:(id)arg5;
- (void)registerForDebugNotificationsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)registerForTrackingConfigChangesWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)returnToBase;
- (void)searchWithCalibrate:(bool)arg1;
- (void)selectSubjectAtEventWithX:(id)arg1 y:(id)arg2;
- (void)selectSubjectAtPoint:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 11: struct CGPoint { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)selectSubjects:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 17: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, const const /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'y' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)selectSubjectsEvent:(id)arg1;
- (void)sendCommandEventWithCommand:(id)arg1;
- (void)sendTrackingSummary;
- (void)sendUsageMetricWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)setFramingModeEventWithMode:(long long)arg1;
- (void)setLastSummaryPublishTime:(id)arg1;
- (void)setRectOfInterestEventWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRectOfInterestLocallyWithRect:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 11: struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)setRectOfInterestWithRect:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 11: struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)setupAgentWithTrustNotifications:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)stateEventWithInfo:(id)arg1 connectedState:(long long)arg2 dockState:(long long)arg3 trackingButtonState:(long long)arg4;
- (void)stateEventWithInfo:(void *)arg1 connectedState:(void *)arg2 dockState:(void *)arg3 trackingButtonState:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 30: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '_' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, unsigned char, long double, out BOOL, /* Warning: Unrecognized filer type: 'k' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'K' using 'void*' */ void*, int, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, unsigned char, out const /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, long double, out BOOL, /* Warning: Unrecognized filer type: 'k' using 'void*' */ void*, unsigned char, out const /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, unsigned int, in float, out /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, long long, long long, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)stop;
- (void)stopReturnToBase;
- (void)stopSearchWithCalibrate:(bool)arg1;
- (void)trackWithFocusObservation:(void *)arg1 metadata:(void *)arg2 image:(void *)arg3 cameraPortType:(void *)arg4 cameraIntrinsics:(void *)arg5 referenceDimensions:(void *)arg6 orientation:(void *)arg7 completionHandler:(void *)arg8; // needs 8 arg types, found 60: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, long double, /* Warning: Unrecognized filer type: 'K' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, out BOOL, /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*, short, bycopy /* Warning: unhandled bit fieldencoding: 'b' */ unsigned int, short, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, const void, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, int, out in /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, const const /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'y' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, unsigned char, unsigned int, unsigned int, /* Warning: Unrecognized filer type: 'm' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'g' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, unsigned short, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, const int, in /* Warning: Unrecognized filer type: 'g' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, const const /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'y' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, struct CGSize { double x1; double x2; }, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)trackWithMetadata:(void *)arg1 image:(void *)arg2 cameraPortType:(void *)arg3 cameraIntrinsics:(void *)arg4 referenceDimensions:(void *)arg5 orientation:(void *)arg6 completionHandler:(void *)arg7; // needs 7 arg types, found 44: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, const const /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'y' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, unsigned char, unsigned int, unsigned int, /* Warning: Unrecognized filer type: 'm' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'g' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, unsigned short, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, const int, in /* Warning: Unrecognized filer type: 'g' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, const const /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'y' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, struct CGSize { double x1; double x2; }, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)trackingButtonEnabledWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)trackingButtonStateChangedWithInfo:(id)arg1 state:(long long)arg2;
- (void)trackingEnabledForAppWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)trackingEnabledWithEnabled:(bool)arg1 appID:(id)arg2;
- (void)updateCameraSessionWithSession:(void *)arg1 new:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 44: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '_' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, unsigned char, long double, out BOOL, /* Warning: Unrecognized filer type: 'k' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'K' using 'void*' */ void*, int, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, unsigned char, out const /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, unsigned char, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'm' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, const /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, unsigned short, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, short, short, int, out in unsigned int, in float, out const /* Warning: Unrecognized filer type: 'm' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, int, out in /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, const const /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'y' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)xpcConnected;
- (void)xpcDisconnected;

@end
