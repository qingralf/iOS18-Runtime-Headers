/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MicroLocationDaemon.framework/MicroLocationDaemon
 */

@interface ULLoggedEventMO : NSManagedObject

@property (nonatomic, retain) NSData *event;
@property (nonatomic) int eventType;
@property (nonatomic, retain) NSString *eventUUID;
@property (nonatomic) double receivedTimestamp;

+ (id)createFromEntry:(const void*)arg1 inManagedObjectContext:(id)arg2;
+ (id)fetchRequest;

- (struct optional<CLMicroLocationLoggedEventsTable::Entry> { union { BOOL x_1_1_1; struct Entry { struct uuid { unsigned char x_1_3_1[16]; } x_2_2_1; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long doublex_1_4_1; } x_2_3_1; } x_2_2_2; int x_2_2_3; struct ReceivedEvent { int (**x_4_3_1)(); struct ReceivedEventAction {} *x_4_3_2; struct AppLaunch {} *x_4_3_3; struct BacklightOn {} *x_4_3_4; struct BatteryChargerConnected {} *x_4_3_5; struct ForcedRecording {} *x_4_3_6; struct HomeKitAccessory {} *x_4_3_7; struct HomeKitScene {} *x_4_3_8; struct NowPlaying {} *x_4_3_9; struct RecordingRequest {} *x_4_3_10; struct TruthLabelDonation {} *x_4_3_11; struct LearnModel {} *x_4_3_12; struct LearnCompleted {} *x_4_3_13; struct SensorsScanComplete {} *x_4_3_14; struct StartSpectating {} *x_4_3_15; struct StopSpectating {} *x_4_3_16; struct ServiceCreate {} *x_4_3_17; struct ServiceDelete {} *x_4_3_18; struct ServiceConnect {} *x_4_3_19; struct ServiceDisconnect {} *x_4_3_20; struct ServiceStartUpdating {} *x_4_3_21; struct ServiceStopUpdating {} *x_4_3_22; struct RequestObservation {} *x_4_3_23; struct RequestPrediction {} *x_4_3_24; struct MiloInit {} *x_4_3_25; struct MotionEvent {} *x_4_3_26; struct LegacyThrottle {} *x_4_3_27; struct RetrievedLoi {} *x_4_3_28; struct TriggerEvent {} *x_4_3_29; } x_2_2_4; } x_1_1_2; } x1; })convertToEntry;

@end
