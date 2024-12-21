/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUAnalyticsManager : NSObject {
    SUCoreAnalyticsEventSubmitter * _coreEventSubmitter;
    NSString * _savePath;
    NSObject<OS_dispatch_queue> * _stateQueue;
}

@property (nonatomic, readonly, retain) NSDictionary *events;
@property (nonatomic, readonly, retain) NSString *savePath;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_queue_setEvent:(id)arg1;
- (void)_queue_submitAllEvents;
- (void)_queue_submitEvent:(id)arg1;
- (id)copyEventFromPath:(id)arg1;
- (id)coreAnalyticEventforSUAnalyticEvent:(id)arg1;
- (id)events;
- (id)init;
- (id)initWithPath:(id)arg1;
- (void)removeAllEvents;
- (void)removeEvent:(id)arg1;
- (void)removeEventsWithName:(id)arg1;
- (bool)saveEventToDisk:(id)arg1;
- (id)savePath;
- (void)setEvent:(id)arg1;
- (void)submitAllEvents;
- (void)submitEvent:(id)arg1;
- (void)submitEventsWithName:(id)arg1;

@end